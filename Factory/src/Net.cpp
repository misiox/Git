/*
 * Net.cpp
 *
 *  Created on: 2 sty 2018
 *      Author: malot
 */




#include "Net.h"

	// Ramp Net::get_ramps() {// [] }

	void Net::addRamp(Ramp ramp) {
		_ramps.push_back(ramp);
	}

	void Net::removeRamp(int id) {
		bool f=true;
		int i=0;
		while (f) {
			if (_ramps[i].get_id()==id) f=false;
			else i++;
		}
		_ramps.erase(_ramps.begin() + i -2);
	}

	// Worker Net::get_workers() {// [] }

	void Net::addWorker(Worker worker) {
		_workers.push_back(worker);
	}

	void Net::remooveWorker(int id) {

	}

	 // Storehouse Net::get_storehouses() {// [] }

	void Net::addStorehouse(Storehouse storehouse) {
		_storehouses.push_back(storehouse);
	}

	void Net::removeStorehouse(int id) {

	}

	// bool Net::isConsistent();
