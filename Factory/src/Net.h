/*
 * Net.h
 *
 *  Created on: 29 gru 2017
 *      Author: malot
 */

#ifndef NET_H_
#define NET_H_

#include "Ramp.h"
#include "Worker.h"
#include "Storehouse.h"
#include <vector>

class Net {
private:
	std::vector<Ramp> _ramps;
	std::vector<Worker> _workers;
	std::vector<Storehouse> _storehouses;
public:
	Ramp get_ramps(); // []
	void addRamp(Ramp ramp);
	void removeRamp(int id);
	Worker get_workers(); // []
	void addWorker(Worker worker);
	void remooveWorker(int id);
	Storehouse get_storehouses(); // []
	void addStorehouse(Storehouse storehouse);
	void removeStorehouse(int id);

	bool isConsistent();
};


#endif /* NET_H_ */
