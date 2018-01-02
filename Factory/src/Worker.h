/*
 * Worker.h
 *
 *  Created on: 28 gru 2017
 *      Author: malot
 */

#ifndef WORKER_H_
#define WORKER_H_

#include "ProductQueue.h"
#include "ReceiverType.h"
#include "Receiver.h"
#include "Sender.h"

class Worker : public Receiver, public Sender {
private:
	int _id;
	int _processingDuration;
	int _productProcessingStartTime;
	ProductQueue* _queue;
public:
	Worker(int id,int processingDuration,ProductQueue* queue);
	void receiveProduct(Product product);
	Product viewDepot(); //  []
	void work();
	int get_processingDuration();
	int get_productProcessingStartTime();
	ReceiverType getReceiverType();
	int get_id();

};



#endif /* WORKER_H_ */
