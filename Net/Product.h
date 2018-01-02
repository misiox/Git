/*
 * Product.h
 *
 *  Created on: 29 gru 2017
 *      Author: malot
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product {

private:
	int _id;
	static int _packageCounter;
public:
	Product();
	Product(int id);  // tworzenie produktu o zadanym numerze id pobranym z _packageCounter
	int get_id();


};



#endif /* PRODUCT_H_ */
