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

	void Worker::receiveProduct(Product product);

	Product Worker::viewDepot(); //  []

	void Worker::work() {

	}
	int Worker::get_processingDuration() {
		return _processingDuration;
	}
	int Worker::get_productProcessingStartTime() {
		return _productProcessingStartTime;
	}
	//ReceiverType getReceiverType();
	int Worker::get_id() {
		return _id;
	}

