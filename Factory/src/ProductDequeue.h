/*
 * ProductDequeue.h
 *
 *  Created on: 30 gru 2017
 *      Author: malot
 */

#ifndef PRODUCTDEQUEUE_H_
#define PRODUCTDEQUEUE_H_

#include "ProductQueue.h"
#include <deque>

class ProductDeque : public ProductQueue {
private:
	std::deque<Product> _deque;
public:
	void push(Product product); // dodaj
	Product pop(); // usun
	bool empty();
	bool size();
	Product view(); // []
	QueueType getQueueType();
};


#endif /* PRODUCTDEQUEUE_H_ */
