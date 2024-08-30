#include"mul.h"
#include"pr.h"
int fun2(uint a, int b)
{
	struct stu st;
	st.a = 1;
	return (a * b);         // a * b != st.a * b
}