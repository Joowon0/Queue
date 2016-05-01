//
// Name: Joowon Byun
// Date: July 22th 2015 ~ July 27th 2015
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "QueueNode.h"

using namespace std;

template< typename NODETYPE >
class Queue {
private:
	QueueNode< NODETYPE > *front;
	QueueNode< NODETYPE > *rear;
public:
	Queue();
	void pushRear( NODETYPE &in );
	void popFront();
	void listFromFront();
	bool isEmpty();
};

template< typename NODETYPE >
		Queue< NODETYPE>::Queue(): front( NULL ), rear( NULL ) {}

template< typename NODETYPE >
void	Queue< NODETYPE >::pushRear( NODETYPE &in ) {
	QueueNode< NODETYPE > *temp = new QueueNode< NODETYPE >( in, rear );
	if ( isEmpty() )
		front = rear = temp;
	else {
		rear->setNext(temp);
		rear = temp;
	}
}

template< typename NODETYPE >
void	Queue< NODETYPE>::popFront() {
	QueueNode< NODETYPE > *delTemp = front;
	
	if (isEmpty())
		return;
	else if (front == rear)
		front = rear = NULL;
	else {
		front = front->next;
		front->changePreToNull();
	}
	
	delete delTemp;	
}

template< typename NODETYPE >
void	Queue< NODETYPE>::listFromFront() {
	QueueNode< NODETYPE > *temp;
	cout << "The data is " << endl;
	for ( temp = front ; temp != NULL ; temp = temp->next )
		cout << "\t" << temp->data << endl;
	cout << endl;
}

template< typename NODETYPE >
bool	Queue< NODETYPE>::isEmpty() {
	if ( front == NULL )
		return true;
	return false;
}

#endif
