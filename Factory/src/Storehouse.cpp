/*
 * Storehouse.cpp
 *
 *  Created on: 2 sty 2018
 *      Author: malot
 */




#include "Storehouse.h"

	Storehouse::Storehouse(int id) {
		_id=id;
	}
	void Storehouse::receiverProduct(Product product) {

	}
	Product Storehouse::view_depot(); // [] oznacza ze funkcja ma zwrocic dostep do calej kolekcji

	int Storehouse::get_id() {
		return _id;
	}
