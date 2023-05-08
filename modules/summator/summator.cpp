/* summator.cpp */

#include "summator.h"

void Summator::add(int p_value) {
	count += p_value;
}

void Summator::sub(int p_value) {
	count -= p_value;
}

void Summator::reset() {
	count = 0;
}

int Summator::get_total() const {
	return count;
}

int Summator::get_magic() const{
    return 12345;
}

void Summator::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
	ClassDB::bind_method(D_METHOD("sub", "value"), &Summator::sub);
	ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
    ClassDB::bind_method(D_METHOD("get_magic"), &Summator::get_magic);
}

Summator::Summator() {
	count = 0;
}