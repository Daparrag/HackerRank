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

#define ARG(x) (x*(x+1))

typedef unsigned long int  Number;

using namespace std;


int main(){
    Number t;
    cin >> t;
    for(Number a0 = 0; a0 < t; a0++){
        Number n;
        cin >> n;
        
        Number N = n-1;
        
        Number a = ceil((N)/3);
        Number b = ceil((N)/5);
        Number c = ceil((N)/15);
        
        Number sum3 = 3*ARG(a);
        Number sum5 = 5*ARG(b);
        Number sum15 = 15*ARG(c);
        
        
        
    cout << (Number)((sum3 + sum5 - sum15)>>1)    << endl ;  
    }
    return 0;
}