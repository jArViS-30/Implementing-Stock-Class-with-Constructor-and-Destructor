#ifndef STOCK2_H_
#define STOCK2_H_

#include <string>

class Stock
{
private:

	std::string company;
	long shares;
	double share_value;
	double total_value;
	void set_tot() { total_value = shares * share_value; }
public:
	Stock();
	Stock(const std::string& co, long n=0, double pr=0.0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};

#endif // !
