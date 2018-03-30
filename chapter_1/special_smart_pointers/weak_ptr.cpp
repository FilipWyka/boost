#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>
#include <thread>
#include <functional>
#include <iostream>


void reset(boost::shared_ptr<int> &sh)
{
    sh.reset();
}

void print(boost::weak_ptr<int> &w)
{
    boost::shared_ptr<int> sh = w.lock();
    if(sh)
    {
        std::cout << *sh << std::endl;
    }
}

int main()
{
    boost::shared_ptr<int> sh{new int{99}};
    boost::weak_ptr<int> w{sh};
    std::thread t2{print, std::ref(w)};
    std::thread t1{reset, std::ref(sh)};
    t1.join();
    t2.join();
}