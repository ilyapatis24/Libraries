#pragma once

class Counter {
public:
	Counter();
	Counter(int counter_value);

	int increment_counter();
	int decrement_counter();
	int print_counter_state();

	~Counter();

private:
	int counter_var;
};

