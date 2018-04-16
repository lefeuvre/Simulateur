#ifndef	GEN 
#define GEN
 
#include <iostream>
#include <string>

using namespace std;
 
class Gen 
{
	public:

		Gen();
		void init();
		void delta_int();
		void delta_ext(string input);
		double get_ta();
		string lambda();

		int current_state, next_state; 
};
 
#endif
