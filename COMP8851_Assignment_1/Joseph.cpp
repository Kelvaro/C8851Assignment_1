#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;





int Josephus(int n, int k)
{
	if (n == 1) {
		return n;
	}
	else {
	

		return (Josephus(n - 1, k) + k) % n + 1;
	}

}


//////////////
//QUESTION 5//
//////////////
/*
int main()
{
	int n = 5;
	int k = 1;
	//printf("The chosen place is %d", joseph(n, k));

	cout << "The safe spot is: " << Josephus(n, k) << endl;


	return 0;
}

*/