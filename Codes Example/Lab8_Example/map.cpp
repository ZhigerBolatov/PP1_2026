#include<iostream>
#include<map>
using namespace std;
int main() {
    map <string, int> people;
    // uniq elements key, value not uniq
    // sorted
    // key = value
    // map[key] = value 
    // map <key, value>
    // map <name, age>

    people["John"] = 32;
    people["Adele"] = 22;

    //Change John age
    people["John"] = 50;

    people["John"]++; // John age changed from 50 to 51

    people.insert({"Liam", 24});
    people.insert({"Kasper", 20});

    // Trying to add two elements with equal keys
    people.insert({"Jenny", 22});
    people.insert({"Jenny", 30});

    //Output all people
    for (auto person : people) {
        cout << person.first << " is: " << person.second << "\n";
    }

    // Remove an element by key
    people.erase("John");

    cout << people.size();

    

    // Remove all elements
    people.clear();

    cout << people.empty(); //True or False (1 or 0)

    

    
    return 0;
}