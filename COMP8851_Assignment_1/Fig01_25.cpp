#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

// Generic findMax, with a function object, C++ style.
// Precondition: a.size( ) > 0.
template <typename GetLength, typename Comparator>
const GetLength & findMaxLength( const vector<GetLength> & length, Comparator isLessThan )
{
    int maxIndex = 0;

    for( int i = 1; i < length.size( ); ++i )
        if( isLessThan( length[ maxIndex ], length[ i ] ) )
            maxIndex = i;

    return length[ maxIndex ];
}

// Generic findMax, using default ordering.
#include <functional>
template <typename GetLength>
const GetLength & findMaxLength( const vector<GetLength> & arr )
{
    return findMaxLength( arr, less<GetLength>{ } );
}


template <typename GetWidth, typename Comparator>
const GetWidth & findMaxWidth(const vector<GetWidth> & width, Comparator isLessThan)
{
	int maxIndex = 0;

	for (int i = 1; i < width.size(); ++i)
		if (isLessThan(width[maxIndex], width[i]))
			maxIndex = i;

	return width[maxIndex];
}

template <typename GetWidth>
const GetWidth & findMaxWidth(const vector<GetWidth> & width)
{
	return findMaxWidth(width, less<GetWidth>{ });
}



//////////////
//QUESTION 1//
//////////////
/*
int main( )
{
	vector<int> Length = { 6, 4, 2, 5, 3 };
	vector<int> Width = { 3, 1, 9, 2, 4 };

   
    cout << findMaxLength( Length ) << endl;
	cout << findMaxLength(Width) << endl;
	cout << findMaxLength(Length) * findMaxLength(Width) << endl;
	cout << 2 * findMaxLength(Width) + 2 * findMaxLength(Length) << endl;
    return 0;


	int a = 0;

	while (a != 10) {
	
		cout << a << endl;
		a++;
	}
}
*/


//////////////
//QUESTION 8//
//////////////

int main( )
{
	int a = 0;

	while (a != 10) {
	
		cout << a << endl;
		a++;
	}
	return 0;
}

