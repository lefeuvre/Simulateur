#ifndef	PROC 
#define PROC
 
#include <iostream>
#include <string>

using namespace std;
 
class  Proc
{
	public:

		Proc();
		void init();
		void delta_int();
		void delta_ext(string input);
		double get_ta();
		string lambda();

		int current_state, next_state; 
};
 
#endif
