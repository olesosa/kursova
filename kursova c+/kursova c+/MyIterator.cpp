#include "MyIterator.h"

MyIterator::MyIterator(Trip* trip) : CurTrip(trip) {}

MyIterator::~MyIterator() {}

Trip MyIterator::operator*() 
{
	return *CurTrip;
}

Trip& MyIterator::operator++(int) 
{
	return *CurTrip++;
}
Trip& MyIterator::operator+=(int value) 
{
	return *(CurTrip += value);
}

bool MyIterator::operator!=(const MyIterator& it) 
{
	return CurTrip != it.CurTrip;
}

bool MyIterator::operator>=(const MyIterator& it) 
{
	return CurTrip <= it.CurTrip;
}

bool MyIterator::operator<=(const MyIterator& it) 
{
	return CurTrip <= it.CurTrip;
}