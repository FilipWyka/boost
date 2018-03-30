#include <boost/scoped_array.hpp>
#include <iostream>

using namespace std;

int main()
{
    boost::scoped_array<int> p{new int[2]};
    *p.get() = 1;
    p[1] = 2;
    cout << p[0] << " " << p[1] << endl;

    p.reset(new int[3]);
    *p.get() = 2;
    p[1] = 3;
    p[2] = 8;
    cout << p[0] << " " << p[1] << " " << p[2] << endl;

}