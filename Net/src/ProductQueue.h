/*
 * ProductQueue.h
 *
 *  Created on: 29 gru 2017
 *      Author: malot
 */

#ifndef PRODUCTQUEUE_H_
#define PRODUCTQUEUE_H_

#include <ProductDepot.h>
#include <Product.h>
#include <QueueType.h>

class ProductQueue : public ProductDepot {
public:
	void push(Product product); // dodaj
	Product pop(); // usun
	bool empty();
	bool size();
	Product[] view();
	QueueType getQueueType();

};


#endif /* PRODUCTQUEUE_H_ */
