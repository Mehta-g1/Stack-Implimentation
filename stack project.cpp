#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class stack{
	public:
	int a[10],i;
	stack(){
		cout<<"Default Constructor.."<<endl;
		i=-1;
	}
	void push(int val){
		i++;
		if(i>5){
			cout<<"Stack is Overflow !"<<endl;
			i--;
			return;
		}
		a[i]=val;
	}
	void pop(){
		i--;
	}
	int peek(){
		return i+1;
	}
	int top(){
		return a[i];
	}
	void print(){
		int j=i;
		for(j;j>=0;j--)
			cout<<a[j]<<" ";
		cout<<endl;
	}
};
int main(){
	int n,val;
	stack a;
	while(1){
	system("cls");
	cout<<"\t==== MENU ====\n";
	cout<<"1.\tPUSH"<<endl;
	cout<<"2.\tPOP"<<endl;
	cout<<"3.\tPEEK"<<endl;
	cout<<"4.\tDISPLAY"<<endl;
	cout<<"5.\tEXIT"<<endl;
	cout<<"\nEnter choice:";
	cin>>n;
	switch(n){
		case 1:
			system("cls");
			cout<<"Enter Value:";
			cin>>val;
			a.push(val);
			cout<<"value stored in stack"<<endl;
			getch();
			break;
		case 2:
			system("cls");
			a.pop();
			cout<<"Elemet Poped Success !"<<endl;
			getch();
			break;
		case 3:
			system("cls");
			cout<<"Peek value:"<<a.peek()<<endl;
			getch();
			break;
		case 4:
//			system("cls");
			cout<<"Stack Elements are:";
			a.print();
			getch();
			break;
		case 5:
			system("cls");
			cout<<"Press any key for exit !"<<endl;
			exit(1);
			getch();
			break;
		default:
			system("cls");
			cout<<"Enter valid choice !"<<endl;	
			getch();
	}	}
	return 0;
}
