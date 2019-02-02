#include<iostream>
using namespace std;
	
class Stack{
	public:
	int top;
	int arr[];
	Stack(){
		top = -1;
		int arr[top+1];
	}
	//insert arr in the top
	void push(int value){
		//adding values to the top
		arr[top+1]=value;
		//top = new_top
		top = top++;
			
	}	
	//delete the top element
	void pop(){
		//top = previous top;
		top = top--;
		
		
	}
	//checks whether the stack is empty
	bool isEmpty(){
		if(top==-1) return true;
		return false;
	}
	//count the number of items in the stack
	int size(){
	return top+1;
	}
	//display the top eelement
	void topDisplay(){

	}
	void display(){
		for(int i = 0; i<(top+1);i++){
			cout<<arr[i]<<"->";
		}
		cout<<"NULL"<<endl;
	}

};
int main(){
	Stack s1;	

	cout<<s1.isEmpty()<<endl;
	//s1.push(1);
	int n = 0;
	for(int i = 1; i <5; i++){
		s1.push(i);
	}	
	s1.display();	

}
	
