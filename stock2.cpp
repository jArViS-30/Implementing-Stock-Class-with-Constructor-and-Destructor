#include <iostream>
#include "stock2.h"

Stock::Stock()  // default constructor
{
    std::cout << " Deafult constructor is called.\n";
    company = "no name";
    shares = 0;
    share_value = 0.0;
    total_value = 0.0;
}

Stock::Stock(const std::string& co, long n, double pr)
{
    std::cout << " Constructor using " << co << " called.\n";
    company = co;

    if (n < 0)
    {
        std::cout << " No of shares can't be negative;"
            << company << " shares set to 0.\n";

        shares = 0;
    }
    else
        shares = n;
    share_value = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout << " Bye, " << company << "!\n";
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << " No of shares purchased can't be negative."
            << " Transaction declined.\n";
    }
    else
    {
        shares += num;
        share_value = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << " No of shares sold can't be negative."
            << " Transaction declined.\n";
    }
    else if (num > shares)
    {
        cout << "We can't sell more than we have! "
            << " Transaction declined.\n";
    }
    else
    {
        shares -= num;
        share_value = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_value = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;

    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << " Company: " << company
        << " Shares: " << shares << "\n";
    cout << " Share Price: INR " << share_value;
    cout.precision(2);

    cout << " Total Worth: INR " << total_value << '\n';

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}