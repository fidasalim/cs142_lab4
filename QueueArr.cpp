#include<iostream>
using namespace std;
	
class Queue{
	public:
	int front , end;
	int QueueArr[];
	//constructer
	Queue(){
		front = -1;
		end = -1;
		QueueArr[0];
	}
	//insert arr in the end
	void Enqueue(int value){
		//end=new_end
		end++;
		//adding values to the end
		QueueArr[end]=value;
		if(end == 0){
			front = end;
		}		
	}	
	//delete the first element
	void Dequeue(){	
		if(end == -1){
			cout<<"The queue doesnt have sufficient elements"<<endl;
		}
		else{
			front++;
		}	
	}
	//checks whether the queue is empty
	bool isEmpty(){
		if(end==-1) return true;
		return false;
	}
	//count the number of items in the queue
	int size(){
	return (end-front+1);
	}
	void display(){
		for(int i = (front); i<(end+1);i++){
			cout<<QueueArr[i]<<"->";
		}
		cout<<"NULL"<<endl;
	}

};
int main(){
	Queue q1;	

	cout<<q1.isEmpty()<<endl;
	
	q1.Enqueue(2);
	q1.Enqueue(3);
	q1.Enqueue(1);
	q1.Enqueue(5);
	q1.display();
	q1.Dequeue();
	q1.display();
	cout<<"The size of stack is "<<q1.size()<<endl;
	q1.Enqueue(9);
	q1.Enqueue(6);
	q1.display();
	q1.Dequeue();
	q1.display();
	cout<<"The size of stack is "<<q1.size()<<endl;
}

