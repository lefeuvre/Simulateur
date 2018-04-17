#ifndef	BUF 
#define BUF
 
#include <iostream>
#include <string>

#include "atomic_comp.h"

using namespace std;
 
class Buf : public Atomic_comp
{
	public:

		Buf();
		void init();
		void delta_int();
		void delta_ext(string input);
		double get_ta();
		string lambda();

		int current_state, next_state; 

	private:

		int v;
};
 
#endif
