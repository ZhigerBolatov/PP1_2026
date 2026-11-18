#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<string> mySet;
    int n; cin >> n;
    string login;
    for (int i=0; i<n; i++) {
        cin >> login;
        if (mySet.find(login) != mySet.end())
            cout << "user already exists" << endl;
        else {
            mySet.insert(login);
            cout << "new user added" << endl;   
        }
        // another way to solve
        // insert() returns a pair: iterator and bool
        // .second is true if the login was successfully added (new user)
        // .second is false if the login already exists
        // if (mySet.insert(login).second)
        //     cout << "new user added" << endl;
        // else
        //     cout << "user already exists" << endl;
    }

        
    return 0;
}