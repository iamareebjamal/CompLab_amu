 /**
 * Nodes Parsing and Navigation
 * Nodes.cpp
 * Purpose : Reads the input mesh.txt file for getting the matrix and input moves and stores the navigation
 * result in start->move->end fashion in output.txt file
 *
 * @source mesh.txt
 * @author Areeb Jamal
 * @version 1.4 23/08/15
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

using namespace std;

typedef struct Node node;

/* Node Declaration */
struct Node {
    int id;       //Exclusive ID set for each node for searching and pointing to null
    char name[20];
    node *up, *down, *left, *right;
    node *next;   //Each node is first linearly linked for iterating through all elements.
}*start, *nul;

const int   NUL      = 0;    //Magic Number for pointing to NULL pointer's ID
const char* IN_FILE  = "mesh.txt";
const char* OUT_FILE = "output.txt";
const char  SEP      = ' ';  //Default separator for the input matrix and
//resulting linear matrix data for creating nodes through common delimiter.

/* Mesh Specifications */
static int rows, columns, size;
string matrix, moves;

////////////////////////////////////
/* Function Declaration */

// Getters
int getRows();
int getColumns();
int getSize();
string getMatrix();
string getMoves();

// Checkers
bool validElement(char);
bool notNull(node*);
bool isMalformed(string);

// String Modification
string stripString(string, char delimiter=SEP);
string stripAll(string, char delimiter=SEP);
string convertTabs(string);
void initializeMoves(string);
void initializeMatrix(string);
string parseMoves();

// Node Management
void createNodes(node* curr=start);
node* findNode(int, node* curr=start);
node* findNode(string, node* curr=start);
int filter(int, char);
void arrangeNodes();

/* Declaration End */
////////////////////////////////////
int main() {
    ofstream out;
    ifstream in;
    string input;

    in.open(IN_FILE);

    while(!in.is_open()) {
        cout<<"File could not be opened. Please check that \""<<IN_FILE<<"\" exists in program path and is accessible without"
            " administrative privileges."
            "\nSometimes a file can't be opened because some other process is accessing it and hasn't closed the file stream."
            "\n\nPlease check that no other program is accessing the file and then press any key...\nPress Q to quit..."<<endl;
        if(cin.get()=='Q')
            return 0;
        in.open(IN_FILE);
    }

    cout<<"File \'"<<IN_FILE<<"\' Opened..."<<endl;
    stringstream buffer;
    buffer<<in.rdbuf();
    input = buffer.str();
    in.close();

    initializeMatrix(convertTabs(input));

    if(isMalformed(getMatrix()))
        return 0;

    start = (node*) malloc(sizeof(node));
    createNodes();
    arrangeNodes();
    out.open(OUT_FILE);
    out<<parseMoves();
    out.close();

    cout<<"Output file \'"<<OUT_FILE<<"\' written...\nProgram Completed"<<endl;

    return 0;
}

/** Functions Definitions **/

int getRows() {
    return rows;
}

int getColumns() {
    return columns;
}

int getSize() {
    return size;
}

string getMatrix() {
    return matrix;
}

string getMoves() {
    return moves;
}


/**
 * Null Pointer Checker
 * Checks and returns true if a node pointer is not NULL and false if it is
 *
 * @param tmp The Node pointer to be checked
 * @return a boolean implying if node is NULL or not
 */
bool notNull(node* tmp) {
    if((tmp->id)==NUL||tmp==NULL)
        return false;
    return true;
}


/**
 * Valid Character Checker
 * Checks and returns true if a character is alphanumeric/special character and false otherwise
 *
 * @param element The character to be checked
 * @return a boolean implying if character lies within range of alphanumeric/special characters or not
 */
bool validElement(char element) {
    if((element>='!'&&element<='z'))
        return true;
    else
        return false;
}


/**
 * Malformed Matrix Checker
 * Checks if the input @source mesh.txt file contains a valid matrix by counting number of elements in it
 * and cross checking it the product of rows and columns recorded while reading matrix. Returns true if
 * expected size of matrix matches the recorded data.
 *
 * @param  matrix The Matrix string to be checked
 * @return a boolean implying if matrix in source text is valid or not
 */
bool isMalformed(string matrix) {
    int size=0;
    stringstream elements(matrix);
    string element;
    while(getline(elements, element, SEP))
        size++;

    if(size!=getSize()) {
        cout<<"Malformed Matrix in txt file.\n\nActual Matrix size   : "<<size<<"\nExpected Matrix size : "<<getSize()<<"\n\n"
            "Program will not continue with malformed matrix or values in nodes will not be filled correctly. "
            "\nNumber of columns may be be inconsistent between rows."
            "\nPlease fix the matrix and then run the program."<<endl;
        return true;
    }
    return false;
}


/**
 * Filter Nodes and extremities
 * Checks if the element belongs to right or left column, and if does, sends NUL ID to be set
 * in @arrangeNodes.
 * Done because our structure is a matrix and right of the last column and left of the first column
 * should be NULL.
 * First the second argument dir is checked and it is determined if the column being analyzed is first
 * or last. After being assessed, input is modified accordingly and then checked if the column is at
 * extremities. If it is, then NUL ID is send, or else, the original ID.
 *
 * @param  inp The integer ID of the Node to be analysed
 * @param  dir The direction of the linking to determine first or last column. 'R' or 'L' (For any other value)
 * @return NUL ID if at extremities, original if not
 */
int filter(int inp, char dir) {
    int sides = inp;
    if(dir=='R')
        sides--;

    if(!(sides%getColumns()))
        return NUL;
    else
        return inp;
}


/**
 * Find Node by ID
 * Searches through all the nodes and returns the node with matching ID.
 * If no ID matches, returns NULL pointer nul.
 * Done to effectively arrange/link nodes dynamically.
 *
 * @param id    The integer ID to be searched
 * @param *curr The Node pointer from where search is to be started. Default : *start
 * @return a node pointer with ID matching with argument or NULL if none matches
 */
node* findNode(int id, node* curr) {
    for(int i = 0; i < getSize(); i++) {
        if(curr->id==id) {
            return curr;
        }
        if(curr->next)
            curr=curr->next;
        else
            break;
    }
    return nul;
}


/**
 * Find Node by Name
 * Searches through all the nodes and returns the node with matching name.
 * If no name matches, returns NULL pointer nul.
 *
 * @param name  The string name to be searched
 * @param *curr The Node pointer from where search is to be started. Default : *start
 * @return a node pointer with name matching with argument or NULL if none matches
 */
node* findNode(string name, node *curr) {
    for(int i = 0; i < getSize(); i++) {
        if(curr->name==name) {
            return curr;
        }
        if(curr->next)
            curr=curr->next;
        else
            break;
    }
    return nul;
}


/**
 * Tab to Spaces String Modifier
 * Replaces any Tab character '\t' to default delimeter space ' '
 * Done to parse the matrix and moves effectively as they are split using default delimeter ' ' (Space)
 *
 * @param  line The string in which tab is to be replaced
 * @param  delimiter The character which is to be stripped. Default : ' ' (Space)
 * @return a string with tab replaced with default delimeter
 */
string convertTabs(string input) {
    for(int i = 0; i < input.length(); i++) {
        if(input[i]=='\t')
            input[i]=SEP;
    }
    return input;
}


/**
 * Strip All String Modifier
 * First uses Strip String Modifier to single out all occurences of delimiter and remove any trailing
 * delimiter and then removes all occurences of delimiter except the first one.
 * Done to parse moves effectively as the first word in moves string represents a node name and all
 * others are moves/
 *
 * @param  line      The string in which the stripping is to take place
 * @param  delimiter The character which is to be stripped. Default : ' ' (Space)
 * @return a stripped string with single occurence of the delimiter just after node name and no trailing delimiter.
 */
string stripAll(string line, char delimiter) {
    line = stripString(line);
    string tmp;
    for(int i = 0; i < line.length(); i++) {
        if(i<=line.find(delimiter)) {
            tmp+=line[i];
        } else if(line[i]!=delimiter) {
            tmp+=line[i];
        }
    }
    return tmp;
}


/**
 * Strip String Modifier
 * Changes all occurences of a repeated delimiter to single one and removes any trailing delimiters.
 * Done in order to split the string for parsing movements effectively.
 *
 * @param  line      The string in which the stripping is to take place. Default : ' ' (Space)
 * @param  delimiter The character which is to be stripped
 * @return a stripped string with single occurences of the delimiter and no trailing delimiter
 */
string stripString(string line, char delimiter) {
    string tmp;
    for(int i = 0; i < line.length(); i++) {
        if(line[i]==delimiter&&line[i+1]==delimiter)
            continue;
        else
            tmp+=line[i];
    }
    if(tmp[tmp.length()-1]==delimiter)
        tmp.erase(tmp.length()-1);

    if(tmp[0]==delimiter)
        tmp.erase(0, 1);

    return tmp;
}


/**
 * Arrange/Link the Nodes
 * Dynamcally links all the nodes depending upon the number of Columns from @getColumn.
 * Determines whether to link NULL or next to the current pointer in left/right by @filter function.
 */
void arrangeNodes() {
    for(int i = 1; i <=getSize(); i++) {
        findNode(i)->up    = findNode(i-getColumns());
        findNode(i)->down  = findNode(i+getColumns());
        findNode(i)->right = findNode(filter(i+1, 'R'));
        findNode(i)->left  = findNode(filter(i-1, 'L'));
    }
}


/**
 * Nodes Creator
 * Gets the size of Matrix from @getSize and creates the number of nodes accordingly with assigning unique ID
 * (from 1 to @getSize) to each. Each node takes the name of element from @getMatrix by splitting through common
 * delimeter ' ' (Space) and is linked next to other for searching and linking purposes.
 * A NULL pointer *nul is created for the non-existant nodes with ID of 0 (NUL)
 *
 * @param *curr a Node pointer to start creating nodes from. Default : *start
 */
void createNodes(node* curr) {
    nul = (node*) malloc(sizeof(node));
    nul->id=NUL;
    stringstream elements(getMatrix());
    string element;
    for(int i = 0; i < getSize(); i++) {
        curr->next = (node*) malloc(sizeof(node));
        getline(elements, element, SEP);
        if(isalnum(element[0])) {
            curr->name[element.copy(curr->name, element.length())] = '\0';
            curr->id=i+1;
        }
        curr=curr->next;
    }

}


/**
 * Moves Storage and Formation
 * Firstly ignores all empty lines and uses @stripAll function to remove all delimeters after the node name.
 * Then checks if inputMode is to be enabled by checking if "Input" appears in the line, if does, enables
 * inputMode.
 * If inputMode is on, starts reading all the starting node names and moves, and stores them in moves
 * global variable.
 *
 * @param input The whole mesh.txt file data to be formed and stored to moves
 */
void initializeMoves(string input) {
    bool inputStart = false;
    stringstream lines(input);
    for(string line; getline(lines, line);) {
        line = stripAll(line);
        if(!line.empty()) {
            if(inputStart)
                moves+=line+"\n";
            if(line.find("Input:")!=string::npos||line.find("input:")!=string::npos||line.find("INPUT:")!=string::npos)
                inputStart = true;
        }
    }
}


/**
 * Matrix Storage and Formation
 * Firstly ignores all empty lines and lines using '//' comment tag, and uses @strpString function to remove
 * all repeated delimeters to just one.
 * Then checks if "Input" appears in the line, if does, then calls @initializeMoves function and breaks.
 * If it doesn't, then starts storing matrix if first letter of line is valid by checking by @validElement
 * function. Matrix is stored by splitting the line through common delimiter space ' ', and updates rows, columns
 * and size accordingly.
 *
 * Note : @stripString, @convertTabs, checking for empty lines and comment tag '//' gives us enough independence to
 * form our mesh.txt file with flexibility. Any amount of words, comments, tabs, new and whitespaces can be used in
 * input file to arrange it visually but our code will handle it dynamically given that the matrix elements are
 * separated by at least one delimiter, and, Input moves and starting nodes are separated by at least one delimeter.
 * Words of Matrix elements should be alphanumeric/special chars, but words starting with special chars will be taken
 * as NULL nodes.
 *
 * @param input The whole mesh.txt file data to be formed and stored to matrix
 */
void initializeMatrix(string input) {

    stringstream lines(input);
    int row = 0, maxColumn = 0;
    for(string line; getline(lines, line);) {
        int column = 0;
        line=stripString(line);
        if(!line.empty()&&!(line.find("//")!=string::npos)) {

            if(line.find("Input:")!=string::npos||line.find("input:")!=string::npos||line.find("INPUT:")!=string::npos) {
                initializeMoves(input);
                break;
            }
            if(validElement(line[0])) {
                row++;
                stringstream words(line);
                string s;
                while(getline(words, s, SEP))
                    column++;
                if(column>maxColumn)
                    maxColumn = column;
            } else
                break;
            matrix+=line+SEP;
        }
    }
    rows = row;
    columns = maxColumn;
    size = getRows()*getColumns();
}


/**
 * Nodes Movement Parser and Navigator
 * Gets all the moves from @getMoves and searches the node with name matching the first word of each line.
 * Then moves according to the moves listed after delimeter separating them from the node name.
 * String is formed with corresponding moves format.
 *
 * @return a fully formed output string with data in form of start->move->end for each movement of nodes
 */
string parseMoves() {
    stringstream lines(getMoves());

    string output = "Node Traversing Output Text\n\n Sample Output:-\n\tStart starting_node"
                    " :- first->movement->next    next->movement->final ... final->movement->Null\n\n\n";

    for(string line; getline(lines, line);) {
        node *tmp = findNode(line.substr(0, line.find(SEP)));
        if(notNull(tmp)) {
            output+="Start "+string(tmp->name)+" :-   ";
            for(int i = line.find(SEP)+1; i < line.length(); i++) {
                output+=string(tmp->name);
                if(line[i]=='u'||line[i]=='U') {
                    tmp=tmp->up;
                    output+="->U->";
                } else if(line[i]=='d'||line[i]=='D') {
                    tmp=tmp->down;
                    output+="->D->";
                } else if(line[i]=='l'||line[i]=='L') {
                    tmp=tmp->left;
                    output+="->L->";
                } else if(line[i]=='r'||line[i]=='R') {
                    tmp=tmp->right;
                    output+="->R->";
                } else {
                    output+="->Invalid Move";
                    break;
                }
                if(notNull(tmp))
                    output+=string(tmp->name)+"    ";
                else {
                    output+="Null";
                    break;
                }

            }
            output+="\n\n";
        } else
            output+=line.substr(0, line.find(SEP))+" is an invalid element name\n\n";
    }
    return output;
}
