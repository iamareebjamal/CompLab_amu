/*
    Areeb Jamal
    14PEB049
    2nd Year Computers
    2015-16
*/

#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct Node node;

struct Node{
     char name[20];
     node* up;
     node* down;
     node* left;
     node* right;
}**nodes;

void createNodes(){
	nodes = (node**)malloc(9*sizeof(node));
	for(int i=0;i<9;i++){
		nodes[i] = (node*)malloc(sizeof(node));
	}
	for(int i = 0; i < 9 ; i++){
		nodes[i]->up=(i==0||i==1||i==2)?NULL:nodes[i-3];
		nodes[i]->right=(i==2||i==5||i==8)?NULL:nodes[i+1];
		nodes[i]->left=(i==0||i==3||i==6)?NULL:nodes[i-1];
		nodes[i]->down=nodes[i+3];
	}
}

int getIndex(){
	string name;
	bool found = 0;
	while(!found){
		cout<<"\n\nEnter the starting node name :    ";
		getline(cin, name);
	
		for(int i=0;i<9;i++){
			if(name==nodes[i]->name){
				found=true;
				return i;
			}
		}
		
		if(!found){
			cout<<"No matching node name found. Try again."<<endl;
		}
	}
}


int main(){
	
	int i;
	
	createNodes();
	
	string str = 
	"    N    N    N     \n"
	"    |    |    |     \n"
	"N - 1 -- 2 -- 3 - N \n"
  	"    |    |    |     \n"
	"N - 4 -- 5 -- 6 - N \n"
	"    |    |    |     \n"
	"N - 7 -- 8 -- 9 - N \n"
	"    |    |    |     \n"
	"    N    N    N     \n\n";
	
	cout<<str<<endl;
	
	for(i=0;i<9;i++){
		cout<<"Enter name for Node "<<i+1<<" :      ";
		cin.getline(nodes[i]->name, 20);
	}
	
	node *tmp = nodes[i=getIndex()];
	
	str ="";
	
	cout<<"\n\nYou are at Node "<<i+1<<".\nEnter movements: [U/D/R/L]"<<endl;
	
	while(tmp){
		char mov;
		cin>>mov;
		str+="\nYou moved from ";
		str+=tmp->name;
		if(mov == 'D' || mov == 'd'){
			str+=" down  to ";
			tmp = tmp->down;
		}else if(mov == 'U' || mov == 'u'){
			str+=" up    to ";
			tmp = tmp->up;
		}else if(mov == 'R' || mov == 'r'){
			str+=" right to ";
			tmp = tmp->right;
		}else if(mov == 'L' || mov == 'l'){
			str+=" left  to ";
			tmp = tmp->left;
		} else {
			str+=" to Undefined Direction!";
			break;
		}
		if(!tmp){
			str+=" Null Point!";
			cout<<"You have reached Null Point!"<<endl;
		}else{
			str+=tmp->name;
		}
	}
	
	cout<<"\n\n"<<str<<endl;
    return 0;
}
