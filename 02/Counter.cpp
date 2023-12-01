#include "Counter.h"


Counter::Counter() {
	counter_var = 0;
}
Counter::Counter(int counter_value) {
	counter_var = counter_value;
}

Counter::~Counter() {}

int Counter::increment_counter() {
	return ++counter_var;
}

int Counter::decrement_counter() {
	return --counter_var;
}

int Counter::print_counter_state() {
	return counter_var;
}