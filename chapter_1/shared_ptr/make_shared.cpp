#include <boost/make_shared.hpp>
#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    auto p1 = boost::make_shared<int>(1);
    cout << typeid(p1).name() << " " << *p1 <<  endl;
    auto p2 = boost::make_shared<int[]>(10);
    cout << typeid(p2).name() << endl;
}