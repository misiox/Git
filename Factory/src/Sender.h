/*
 * Sender.h
 *
 *  Created on: 29 gru 2017
 *      Author: malot
 */

#ifndef SENDER_H_
#define SENDER_H_

#include <vector>
#include "Product.h"
#include "ReceiverPreferences.h"

class Sender : ReceiverPreferences {
private:
	ReceiverPreferences _receiverPreferences;
	std::vector<Product> _sendingBuffer;   //  przechowuje nowy produkt ktory odebral ze spawnera lub ktory juz przerobil i teraz wysle dalej
public:
	Sender(int id);
	ReceiverPreferences get_receiverPreferences();
	void set_receiverPreferences(ReceiverPreferences receiverPreferences);
	void sendProduct();
	std::vector<Product> get_sendingBuffer();
};


#endif /* SENDER_H_ */
