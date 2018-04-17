#include "buf.h"

Buf::Buf() : Atomic_comp()
{
}


void Buf::init()
{
	current_state = 0;
}


void Buf::delta_int()
{
	if (current_state == 1) {
		next_state = 2;
	}
	current_state = next_state;
}


void Buf::delta_ext(string input)
{
	if (current_state == 0 && input == "job") {
		v++;
		next_state = 1;
	}
	else if (current_state == 1 && input == "job") {
		v++;
		next_state = 1;
	}
	else if (current_state == 2 && input == "job") {
		v++;
		next_state = 2;
	}
	else if (current_state == 2 && input == "done" && v > 0) {
		next_state = 1;
	}
	else if (current_state == 2 && input == "done" && v == 0) {
		next_state = 0;
	}
	current_state = next_state;
}


double Buf::get_ta()
{
	if (current_state == 0) {
		return 9999999999999;
	}
	else if (current_state == 1) {
		return 0;
	}
	else if (current_state == 2) {
		return 9999999999999;
	}
	return 0;
}


string Buf::lambda()
{
	string output("");
	if (current_state == 1) {
		output = "req";
	}
	return output;
}

