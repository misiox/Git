/*
 * ProductQueueLIFO.h
 *
 *  Created on: 30 gru 2017
 *      Author: malot
 */

#ifndef PRODUCTQUEUELIFO_H_
#define PRODUCTQUEUELIFO_H_

#include <ProductDequeue.h>


class ProductQueueLIFO : public ProductDeque {
public:
	void push(Product product); // dodaj
	Product pop(); // usun
	bool empty();
	bool size();
	Product[] view();
	QueueType getQueueType();
};


#endif /* PRODUCTQUEUELIFO_H_ */
