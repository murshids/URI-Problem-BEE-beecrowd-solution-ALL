#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
#include<bitset>

using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459

int main(int argc, char** argv) {
	char a,b,c;
	cin>>a>>b>>c;
	printf("A = %c, B = %c, C = %c\n",a,b,c);
	printf("A = %c, B = %c, C = %c\n",b,c,a);
	printf("A = %c, B = %c, C = %c\n",c,a,b);
}