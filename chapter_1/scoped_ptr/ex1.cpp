#include <boost/scoped_ptr.hpp>
#include <iostream>

using namespace std;

int main()
{
    boost::scoped_ptr<int> p{new int{1}};
    cout << *p << " " << p.get() << endl;
    p.reset(new int{2});
    cout << boolalpha << static_cast<bool>(p) << endl;
    cout <<  *p << " " <<  p.get() << endl;
    p.reset();
    cout << boolalpha << static_cast<bool>(p) << endl;
}