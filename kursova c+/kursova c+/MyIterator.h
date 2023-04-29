#pragma once
#include<iostream>
#include<string>
#include "Trip.h"

class MyIterator
{
protected:
	Trip* CurTrip;

public:
	MyIterator(Trip* trip);

	~MyIterator();

	Trip operator* ();
	Trip& operator+=(int value); 
	Trip& operator++(int);

	bool operator!= (const MyIterator& it);
	bool operator>= (const MyIterator& it);
	bool operator<= (const MyIterator& it);
};

