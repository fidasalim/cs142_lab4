#include<iostream>
using namespace std;
	
class Queue{
	public:
	int top;
	int QueueArr[];
	//constructer
	Queue(){
		top = -1;
		QueueArr[0];
	}
	//insert arr in the top
	void push(int value){
		//top = new_top
		top++;
		//adding values to the top
		QueueArr[top]=value;
		
			
	}	
	//delete the first element
	void pop(){
		
		
	if(top == -1){
		cout<<"The stack doesnt have sufficient elements"<<endl;
	}
	else{
		int current = top;
		while(current!=0){
			int a = QueueArr[top];
			QueueArr[top] = QueueArr[current-1];
			QueueArr[current-1] = a;
			current--;
		}
		top--;
	}
		
		
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
			cout<<QueueArr[i]<<"->";
		}
		cout<<"NULL"<<endl;
	}

};
int main(){
	Queue q1;	

	cout<<q1.isEmpty()<<endl;
	
	q1.push(2);
	q1.push(3);
	q1.push(1);
	q1.push(5);
	q1.display();
	q1.pop();
	q1.display();
	cout<<"The size of stack is "<<q1.size()<<endl;
	

}

