/#include "Person.h"
#include <string>

class buyer : public Person
{
	protected:
		int Buyer_ID;

	public:
		buyer(int B_ID, string B_Name, string C_Num, string eml);
		void Display();
		void DisplayBuyer();
		~buyer();
};
