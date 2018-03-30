#include <boost/shared_ptr.hpp>
#include <iostream>

using namespace std;


int main()
{
    boost::shared_ptr<int> p1{new int{1}};
    cout << *p1 << endl;
    boost::shared_ptr<int> p2{p1};
    p1.reset(new int{2});
    cout << "p1:" << *p1 << " p2:" << *p2 << endl;
    std::cout << std::boolalpha << static_cast<bool>(p2) << endl;
}