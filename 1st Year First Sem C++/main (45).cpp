#include <iostream>
using namespace std; 

int main()
{
int n, t1 = 1, t2 = 1, nextTerm = 0;
cout << "First 20th Term of Fibonacci Sequences"; cout << endl;

for (int i = 1; i <= 20; ++i)
{
if(i == 1)
{
cout << " " << t1 << " ";
continue;
}
if(i == 2)
{
cout << t2 << " "; continue;
}
nextTerm = t1 + t2; t1 = t2;
t2 = nextTerm;
cout << nextTerm << " ";
}
cout << endl;

return 0;
}

