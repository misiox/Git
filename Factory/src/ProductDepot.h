/*
 * ProductDepot.h
 *
 *  Created on: 30 gru 2017
 *      Author: malot
 */

#ifndef PRODUCTDEPOT_H_
#define PRODUCTDEPOT_H_

#include "Product.h"

class ProductDepot {
	void push(Product product);
	bool empty();
	bool size();
	Product view(); // []
};


#endif /* PRODUCTDEPOT_H_ */
