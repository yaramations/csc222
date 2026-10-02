#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

return 0;
// I forgot to make a failing case before working on the problem, sorry!

/*
int find_largest(int a, int b){
	if(a > b || a == b){
	return a;
	}
	else{
	return b;
	}
}
*/

TEST_CASE("find_largest returns the greater of two integers") {
    CHECK(find_largest(6, 19) == 19);
    CHECK(find_largest(6, 1) == 6);
    CHECK(find_largest(22, 42) == 42);
    CHECK(find_largest(42, 42) == 42);
}
