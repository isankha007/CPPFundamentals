/*
 * Complex.h
 *
 *  Created on: 02-May-2019
 *      Author: sankhadeepchatterjee
 */
#include <iostream>
using namespace std;

#ifndef COMPLEX_H_
#define COMPLEX_H_
namespace sankha{
	class Complex {
	private:
		double real,img;
	public:
		Complex();
		Complex(double real,double img);
		Complex(const Complex &other);
		double getReal() const;
		double getImg() const;
		const Complex &operator=(const Complex &other);
		friend ostream & operator << (ostream &out, const Complex &c);
		//		const Complex &operator+(int real,int img);
		virtual ~Complex();

	};

//	ostream &operator<<(ostream &out,const Complex &c);
}

#endif /* COMPLEX_H_ */
