#include <boost/shared_ptr.hpp>
#include <iostream>
#include <ctime>
#include <chrono>

#define BOOST_SP_USE_QUICK_ALLOCATOR

using namespace std;

int main()
{
    boost::shared_ptr<int> p;

    time_t then = time(nullptr);
    chrono::milliseconds then_ = chrono::duration_cast< chrono::milliseconds >(
    chrono::system_clock::now().time_since_epoch()
    );

    for(int i=0; i<= 1000000; i++)
    {
        p.reset(new int{i});
    }

    chrono::milliseconds now_ = chrono::duration_cast< chrono::milliseconds >(
    chrono::system_clock::now().time_since_epoch()
    );

    time_t now = time(nullptr);
    cout << now-then << endl;

    cout << now_.count() - then_.count() << endl;

    
}