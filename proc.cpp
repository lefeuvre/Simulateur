#include "proc.h"

Proc::Proc() : Atomic_comp()
{
}


void Proc::init()
{
	current_state = 0;
}


void Proc::delta_int()
{
	if (current_state == 1) {
		next_state = 0;
	}
	current_state = next_state;
}


void Proc::delta_ext(string input)
{
	if (current_state == 0 && input == "req") {
		next_state = 1;
	}
	current_state = next_state;
}


double Proc::get_ta()
{
	if (current_state == 0) {
		return 9999999999999;
	}
	else if (current_state == 1) {
		return 1;
	}
	return 0;
}


string Proc::lambda()
{
	string output("");
	if (current_state == 1) {
		output = "done";
	}
	return output;
}

