/*
 * Storehouse.h
 *
 *  Created on: 29 gru 2017
 *      Author: malot
 */

#ifndef STOREHOUSE_H_
#define STOREHOUSE_H_


#include "Receiver.h"
#include "ProductDepot.h"

class Storehouse : public Receiver {
private:
	int _id;
	ProductDepot* _depot;
public:
	Storehouse(int id);
	void receiverProduct(Product product);
	Product view_depot(); // [] oznacza ze funkcja ma zwrocic dostep do calej kolekcji
	int get_id();
};



#endif /* STOREHOUSE_H_ */
