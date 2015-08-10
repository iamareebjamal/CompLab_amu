#include <iostream>
#include <cstring>

using namespace std;

struct Node{
	char name[20];
}nodes[3][3];


int valid(int i, int j){
	if(i<0||j<0||i>2||j>2)
		return false;
	else
		return true;
}


int main()
{
	int i, j;
	char x;
	char name[20];
	string message = 
	   "    N    N    N     \n"
	   "    |    |    |     \n"
	   "N - 1 -- 2 -- 3 - N \n"
			"    |    |    |     \n"
	   "N - 4 -- 5 -- 6 - N \n"
	   "    |    |    |     \n"
	   "N - 7 -- 8 -- 9 - N \n"
	   "    |    |    |     \n"
	   "    N    N    N     \n\n";
	
	cout<<message<<endl;
	x='1';
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++,x++){
			cout<<"Enter name of Node "<<x<<" : ";
			cin.getline(nodes[i][j].name, 20);
		}
	}
	
	while(x){
		cout<<"\nEnter Starting Node Name:"<<endl;
		cin.getline(name, 20);
	
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(!strcmp(nodes[i][j].name, name)){
					x = 0;
					break;
				}
			}
			if(!x)
				break;
		}
		if(x)
			cout<<"Name not found. Try again"<<endl;
	}
	
	message = "";
	cout<<"\n\nYou are at Node "<<nodes[i][j].name<<".\nEnter movements: [U/D/R/L]"<<endl;
	
	while(valid(i,j)){
		cin>>x;
		message+="\nYou moved from ";
		message+=nodes[i][j].name;
		if(x == 'D' || x == 'd'){
			message+=" down  to ";
			i++;
		}else if(x == 'U' || x == 'u'){
			message+=" up    to ";
			i--;
		}else if(x == 'R' || x == 'r'){
			message+=" right to ";
			j++;
		}else if(x == 'L' || x == 'l'){
			message+=" left  to ";
			j--;
		} else {
			message+=" nowhere to ";
		}
		if(!valid(i,j)){
			message+=" Null Point!";
			cout<<"You have reached Null Point!"<<endl;
		}else{
			message+=nodes[i][j].name;
		}
	}
	
	cout<<"\n\n"<<message<<endl;
	
	return 0;
}
