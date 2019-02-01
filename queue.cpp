//including library
#include <iostream>
#include "ll.cpp"
using namespace std;

class QueueLl{
	public:
	//create a pointer end;
	Node *end;
	//create a pointer front;
	Node *front;
	LinkedList l1;
	Queue(){
		front = l1.head;
		end = l1.tail;
	}
	//insert an element in the end
	void Enqueue(int value){
		//void insertAt(int pos,int value){
		l1.insert(value);
		//end=new head
		front = l1.head;
	}
	//delete the last element
	void Dequeue(){
		//void dlt(){
		l1.dltAt(1);
		//front = new tail
		end = l1.tail;
	}
	//checks whether the queue is empty
	bool isEmpty(){
		if(front==NULL) return true;
		return false;
	}
	//count the number of items in the queue
	int size(){
    	return l1.countItem();
	}
	//display the queue
	void display(){
		l1.display();
	}
};

int main(){
	QueueLl q1;
	if(q1.isEmpty()==1){
			cout<<"THe queue is empty"<<endl;	
	}

	for(int i = 1; i <10;i++){
		q1.Enqueue(i);
	}
	q1.display();
	q1.Dequeue();
	q1.display();
	cout<<"The total number of elements in queue "<<q1.size()<<endl;
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	cout<<"The total number of elements in queue "<<q1.size()<<endl;
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	q1.Dequeue();
	q1.display();
	cout<<"The total number of elements in queue "<<q1.size()<<endl;
	q1.Dequeue();
	q1.display();
}
