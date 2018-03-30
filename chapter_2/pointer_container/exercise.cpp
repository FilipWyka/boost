#include <boost/ptr_container/ptr_vector.hpp>
#include <iostream>
#include <string>

using namespace std;

class animal{

    string name;
    int legs;
    bool hasTail;

public:
    animal():name(), legs(0), hasTail(false){}
    animal(string name_, int legs_, bool hasTail_): name(name_), legs(legs_), hasTail(hasTail_){};

    void display() {cout << name << " has " << legs << " legs and " << hasTail << " tail" << endl;}
    bool operator < (animal &x) {return legs < x.legs;};
    bool operator > (animal &x) {return legs > x.legs;};
    
};

int main()
{
    boost::ptr_vector<animal> v;
    v.push_back(new animal("girrafe", 4, true));
    v.push_back(new animal("human", 2, false));
    v.push_back(new animal{"gorilla", 2, true});
    v.push_back(new animal{"chuj", 1, false});

    for(int i=0; i<v.size(); i++)
        v[i].display();

    //
    v.sort();

    return 0;
}