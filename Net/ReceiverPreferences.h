/*
 * ReceiverPreferences.h
 *
 *  Created on: 29 gru 2017
 *      Author: malot
 */

#ifndef RECEIVERPREFERENCES_H_
#define RECEIVERPREFERENCES_H_

#include <map>
#include <Receiver.h>

class ReceiverPreferences {
private:
	std::map<Receiver*,double> _probabilities;
public:
	std::map<Receiver*,double> get_probabilities();
	void set_probabilities(std::map<Receiver*,double> probabilities);
	void addReceiver(Receiver* receiver);
	void addReceiverWithProbability(Receiver* receiver,double probabilities);
	Receiver* drawReceiver(); // ?????
	pair<Receiver*,double>[] view(); // ?????


};



#endif /* RECEIVERPREFERENCES_H_ */
