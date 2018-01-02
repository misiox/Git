/*
 * Worker.cpp
 *
 *  Created on: 2 sty 2018
 *      Author: malot
 */


#include "Worker.h"

    Worker::Worker(int id,int processingDuration,ProductQueue* queue) {
    	_id=id;
    	_processingDuration=processingDuration;
    	_queue=queue;
    }
	void receiveProduct(Product product);
	//Product viewDepot(); //  []
	void work();
	int get_processingDuration();
	int get_productProcessingStartTime();
	//ReceiverType getReceiverType();
	int get_id();

