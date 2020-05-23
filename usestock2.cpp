#include <iostream>
#include "stock2.h"

int main()
{
	using std::cout;
	cout << " Using constructor to create new objects.\n";
	Stock stock1("TATA", 60, 24.0);
	stock1.show();

	Stock stock2 = Stock("Boffo Objects", 30, 45.6);
	stock2.show();

	cout << " Assigning stock1 to stock2:\n";
	stock2 = stock1;
	cout << " Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();

	cout << " Using a constructor to reset an object\n";
	stock1 = Stock("Nifty Foods", 10, 15.0);
	cout << " Revised stock1:\n";
	stock1.show();
}