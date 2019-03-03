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

Number max_pfactor(Number n){

    Number max_prime = n;
    Number i;
    //case n is multiple of 2
    while(n%2 == 0) { max_prime = 2; (n=n/2); };

    //case n is multiple of 3 5 7 ...
    for (i = 3; i <= sqrt(n); i+=2 ){
        while(n%i == 0) {max_prime =i; n=n/i; }

    }

    //case n is prime
    if(n > 2)max_prime = n;
    else
        max_prime = i-2;

    return max_prime;

}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        Number n;
        cin >> n;
        std::cout << max_pfactor(n)<< std::endl;
    }
    return 0;
}