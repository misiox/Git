/*
 * Ramp.h
 *
 *  Created on: 28 gru 2017
 *      Author: malot
 */

#ifndef RAMP_H_
#define RAMP_H_

#include "Sender.h"

class Ramp : public Sender {
private:
	int _id;
	int _deliveryInterval;
public:
	Ramp(int id,int deliveryInterval);
	void spawner(int time);   // pojawianie sie produktow na rampach
	int get_deliveryInterval();
	int get_id();
};



#endif /* RAMP_H_ */
