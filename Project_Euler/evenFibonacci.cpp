#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

typedef long long int Number;

// Returns sum of even Fibonacci numbers which are 
// less than or equal to given limit. 
Number evenFibSum(Number limit) 
{ 
    if (limit < 2) 
        return 0; 
  
    // Initialize first two even prime numbers 
    // and their sum 
    Number ef1 = 0, ef2 = 2; 
    Number sum = ef1 + ef2; 
  
    // calculating sum of even Fibonacci value 
    while (ef2 <= limit) 
    { 
        // get next even value of Fibonacci sequence 
        long long int ef3 = 4*ef2 + ef1; 
  
        // If we go beyond limit, we break loop 
        if (ef3 > limit) 
            break; 
  
        // Move to next even number and update sum 
        ef1 = ef2; 
        ef2 = ef3; 
        sum += ef2; 
    } 
  
    return sum; 
} 


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        Number n;
        cin >> n;
        
        std::cout << evenFibSum(n) << std::endl;
        
    }
    return 0;
}