#include <bits/stdc++.h>
#define LL long long
#define ull unsigned long long
#define LD long double
#include<boost/multiprecision/cpp_int.hpp>
namespace mp=boost::multiprecision;
using namespace std;

int map_v [9][7] ={ 
	{0,0,0,0,0,0,0},
	{1,1,1,1,1,1,1},
	{1,2,4,8,7,5,1},
	{0,0,0,0,0,0,0},
	{1,4,7,1,4,7,1},
	{1,5,7,8,4,2,1},
	{0,0,0,0,0,0,0},
	{1,7,4,1,7,4,1},
	{1,8,1,8,1,8,1}
};
int prd[9]={1,1,6,2,3,6,2,3,2};
int main() {
	mp::cpp_int a,b,c = 1,ans = 1;
	int x;
	c*=9;
	cin >> a >> b;
	int aux = (int)(a%9);
	int p = prd[aux];
	if(aux == 3 || aux == 6 && b == 1){
		x = aux;
	}else if(aux == 0){
		x = 9;
	}else{
		x = map_v[aux][(int)(b%p)];
	}
	x =  (1 + x - 1 + 9)%9;
	if(x == 0) x = 9;
	cout << x <<endl;
	return 0;
}
