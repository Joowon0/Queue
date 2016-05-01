//
// Name: Joowon Byun
// Date: July 22th 2015 ~ July 27th 2015
//
#ifndef QUEUENODE_H
#define QUEUENODE_H

template< typename NODETYPE > class Queue;

template< typename NODETYPE>
class QueueNode {
	friend class Queue<NODETYPE>;
private:
	NODETYPE data;
	QueueNode< NODETYPE > *prior;
	QueueNode< NODETYPE > *next;
protected:
	QueueNode( NODETYPE &info, QueueNode< NODETYPE > *NODE );
	void setNext( QueueNode< NODETYPE > *NODE );
	void changePreToNull();
public:
	NODETYPE getData();
};

template< typename NODETYPE >
			QueueNode< NODETYPE >::QueueNode( NODETYPE &info, QueueNode< NODETYPE > *NODE )
				:data( info ), prior( NODE ), next( 0 ) {}

template< typename NODETYPE >
void		QueueNode< NODETYPE >::setNext( QueueNode< NODETYPE > *NODE ) {
	next = NODE;
}

template< typename NODETYPE >
void		QueueNode< NODETYPE >::changePreToNull() {
	prior = NULL;
}

template< typename NODETYPE >
NODETYPE	QueueNode< NODETYPE >::getData() {
	return data;
}

#endif
