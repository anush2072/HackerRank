#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
using namespace std;

map<string, string> read_into_map(int size){
    map<string, string> my_map;
    string key, value;
    for(int i=0; i<size; i++){
        cin >> key >> value ;
        my_map[key] = value;
    }
    cin.ignore();
    return my_map;
}

void print_map(map<string, string> my_map){
    for (const auto &p : my_map) {
        cout << p.first << " = " << p.second << '\n';
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    cin.ignore();

    map<string, string> my_map;
    my_map = read_into_map(n);
    
    //print_map(my_map);
    
    //Read names and save them in a list
    string name;
    list<string> names;
    map<string,string>::iterator it;
    while (getline(cin, name))
    {
        names.push_back(name);
    }
    
    // Iterate through list of names and find the number
    for (std::list<string>::iterator it = names.begin(); it != names.end(); it++){
        std::map<string, string>::iterator itr;
        itr = my_map.find(*it); 
        if (itr != my_map.end()){
             cout << itr->first << "=" << itr->second << '\n';
        }
        else{
            cout << "Not found \n";
        }  


    }
    
    return 0;
}
