#include "gen.h"

Gen::Gen() : Atomic_comp()
{
}


void Gen::init()
{
	current_state = 0;
}


void Gen::delta_int()
{
	if (current_state == 0) {
		next_state = 0;
	}
	current_state = next_state;
}


void Gen::delta_ext(string input)
{
}


double Gen::get_ta()
{
	if (current_state == 0) {
		return 1;
	}
	return 0;
}


string Gen::lambda()
{
	string output("");
	if (current_state == 0) {
		output = "job";
	}
	return output;
}

