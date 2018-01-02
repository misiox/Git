/*
 * ProductQueueFIFO.h
 *
 *  Created on: 30 gru 2017
 *      Author: malot
 */

#ifndef PRODUCTQUEUEFIFO_H_
#define PRODUCTQUEUEFIFO_H_


#include "ProductDequeue.h"


class ProductQueueFIFO : public ProductDeque {
public:
	void push(Product product); // dodaj
	Product pop(); // usun
	bool empty();
	bool size();
	Product[] view();
	QueueType getQueueType();
};


#endif /* PRODUCTQUEUEFIFO_H_ */
