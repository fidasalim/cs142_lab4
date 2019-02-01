#include<iostream>
#include "qFStack.cpp"
using namespace std;

class QueueFS{
	public:
	Stack s1;
	Stack s2;
	Node *end;
	Node *front;
	//constructor
	QueueFS(){
		//end is the top of stack
		end = s1.top;
		front = s1.top;
	}
	//insert element in the top;
	//void push(int value){
	void Enqueue(int value){
		s1.push(value);
		//end = new top
		end = s1.top;
		if(end == front){	
			front = s1.top;
		}

	}
	//delete the last element
	void Dequeue(){	
		while(s2.top->next!=NULL){
			s2.top=s1.top;
			s1.top= s1.top->next;
			s2.top->next=s2.top;
		}
		while(s2.top!=NULL){
			s1.top=s2.top;
			s1.top->next=s1.top;
			s2.top=s2.top->next;
		}		
	}	

	//check whether the queue is empty
	bool isEmpty(){
		return s1.isEmpty();
	}
	//know the size of the queue
	int size(){
		cout<<"The number of elements in queue :"<<s1.size()<<endl;
	}
	//display the element
	void display(){
		s1.display();
	}
	
};
int main(){
	QueueFS q1;
	for(int i = 1; i <5;i++){
		q1.Enqueue(i);
	}
	q1.display();
	q1.size();
	q1.Dequeue();
	q1.display();
}
