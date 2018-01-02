/*
 * Receiver.h
 *
 *  Created on: 29 gru 2017
 *      Author: malot
 */

#ifndef RECEIVER_H_
#define RECEIVER_H_


#include <ReceiverType.h>
#include <Product.h>

class Receiver {
public:
	void Receive(Product product);
	Product[] viewDepot();
	ReceiverType getReceiverType();
	int get_id();

};


#endif /* RECEIVER_H_ */
