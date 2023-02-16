#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> a(10, 2);

    a.push_back(1);
    a.push_front(8);

    auto it = a.begin();
    for(int i = 0; i < 4; i++) {
        it++;
    }
    a.insert(it, 5);

    for(int i = 0; i < 4; i++) {
        it++;
    }
     a.insert(it, 3, 3);
    a.sort();
    print(a);
    a.unique();
 cout << a.back() << endl; 
}

