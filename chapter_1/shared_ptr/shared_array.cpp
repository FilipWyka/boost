#include <boost/shared_array.hpp>
#include <iostream>

using namespace std;

int main()
{
    boost::shared_array<int> p1{new int[1]};
    p1[0] = 1;
    {
        boost::shared_array<int> p2{p1};
        p2[0] = 10;
    }
    cout << p1[0] << endl;

}