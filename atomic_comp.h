#ifndef	ATOMIC_COMP
#define ATOMIC_COMP
 
#include <iostream>
#include <string>

using namespace std;
 
class  Atomic_comp
{
	public:

		Atomic_comp();
		virtual	void init();
		virtual void delta_int();
		virtual void delta_ext(string input);
		virtual double get_ta();
		virtual string lambda();

		int current_state, next_state; 
};
 
#endif
