// Print a single base-10 integer denoting the maximum number of consecutive 1's in the binary representation of n
//
//
//Sample Case 1: 
//The binary representation of 5 is 101, so the maximum number of consecutive 1's is 1.
//Sample Case 2: 
//The binary representation of 13 is 1101, so the maximum number of consecutive 1's is 2.

#include <stack>
#include <cstdio>
#include <iostream>

using namespace std;

stack<int> convert_to_base2(int n){
    stack<int> stk;
    while(n > 0){
        int remainder = n%2;
        stk.push(remainder);
        n = n/2;
    }
        
        
    return stk;
}

void print_stack(stack<int> s){
     while(!s.empty())
    {
        int w = s.top();
        std::cout << w;
        s.pop();
    }
}    

//check for consecutive 1's => send digit = 1
int count_consecutive(stack<int> s, int digit){
    int n = 0, max=1;
    while(!s.empty())
    {
        int w = s.top();
        if(w==digit){
            n++;
			//check if current consecutive streak is > max
            if(n > max){
                max = n;
            }
        }
        else{
            //re-start the counter
            n = 0;
        }
        s.pop();
    }
    return max;
}

int main(){
    int n, result;
    cin >> n;
    
    stack<int> base2 = convert_to_base2(n);
    //print_stack(base2);
    
    result = count_consecutive(base2, 1);
    cout << result;
    
    return 0;
}
