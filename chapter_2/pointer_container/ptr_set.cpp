#include <boost/ptr_container/ptr_set.hpp>
#include <boost/ptr_container/indirect_fun.hpp>
#include <set>
#include <memory>
#include <functional>
#include <iostream>


using namespace std;


int main()
{
    boost::ptr_set<int> s;
    s.insert(new int{2});
    s.insert(new int{1});
    cout << *s.begin() << endl;

    set<std::unique_ptr<int>, boost::indirect_fun<std::less<int>>> v;
    v.insert(std::unique_ptr<int>(new int{2}));
    v.insert(std::unique_ptr<int>(new int{1}));
    cout << **v.begin() << endl;
}