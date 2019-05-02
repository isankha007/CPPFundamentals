/*
 * Complex.h
 *
 *  Created on: 02-May-2019
 *      Author: sankhadeepchatterjee
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
namespace sankha{
	class Complex {
	private:
		double real,img;
	public:
		Complex();
		Complex(double real,double img);
		double getReal();
		double getImg();
		virtual ~Complex();
	};
}

#endif /* COMPLEX_H_ */
