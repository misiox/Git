/*
 * Ramp.cpp
 *
 *  Created on: 2 sty 2018
 *      Author: malot
 */




#include "Ramp.h"

	Ramp::Ramp(int id,int deliveryInterval) {
		_id=id;
		_deliveryInterval=deliveryInterval;
	}
	void Ramp::spawner(int time) {  // pojawianie sie produktow na rampach

	}
	int Ramp::get_deliveryInterval() {
		return _deliveryInterval;
	}
	int Ramp::get_id() {
		return _id;
	}
