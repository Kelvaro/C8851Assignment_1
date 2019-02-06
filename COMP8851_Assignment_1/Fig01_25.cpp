#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

// Generic findMax, with a function object, C++ style.
// Precondition: a.size( ) > 0.
template <typename Object, typename Comparator>
const Object & findMax( const vector<Object> & area, Comparator isLessThan )
{
    int maxIndex = 0;

    for( int i = 1; i < area.size( ); ++i )
        if( isLessThan( area[ maxIndex ], area[ i ] ) )
            maxIndex = i;

    return area[ maxIndex ];
}

// Generic findMax, using default ordering.
#include <functional>
template <typename Object>
const Object & findMax( const vector<Object> & arr )
{
    return findMax( arr, less<Object>{ } );
}





//////////////
//QUESTION 1//
//////////////
class rectangle {

public:
	rectangle(int l, int w);
		int length;
		int width;
	
	int area;
	int parameter;
	
	int getWidth() {
		return width;
	}

	int getLength() {
		return length;
	}

	int getArea() {
		return (length * width);
	}

	int getParameter() {
		return (2 * (length + width));
	}
	
	
private:
	
};

rectangle::rectangle(int l, int w)
{
	length = l;
	width = w;
	area = length * width;
	parameter = (2 * (length + width));
}

//////////////
//QUESTION 1//
//////////////



/*
int main( )
{
	vector<rectangle>Boxes;
	vector<int> length{3,6,1};
	vector<int> width{7,2,5};
	vector<int> area;
	vector<int> parameter;
	for (int i = 0; i < 2; i++) {
		rectangle r(length[i],width[i]);

		Boxes.push_back(r);
		area.push_back(r.getArea());
		parameter.push_back(r.getParameter());
		
	}
	cout <<"I have " << Boxes.size()<< " boxes" << endl;
	//cout << findMax(area) << endl;
	//cout << "area of this rectangle is: " <<Boxes[1].getArea()<< endl;
	cout <<"Box: " <<"has the highest area with an area of: "<< findMax(area) << endl;
	cout <<"Box: " <<"has the highest parameter with a parameter of: "<<findMax(parameter) << endl;
	

	return 0;
 
	
}
*/




///////////////
//QUESTION 4a//
///////////////


/////// first iteration: 3 * 0 + 4 = 4
/////// second iteration: 3 * 4 + 8 = 20
/////// third iteration: 3* 20 + 0 = 60
/////// fourth iteration: 3* 60 + 1 = 181
/////// fifth iteration: 3* 181 + 2 = 545