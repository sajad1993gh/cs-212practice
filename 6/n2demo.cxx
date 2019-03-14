
#include <iostream>   // Provides cout and cin
#include <string>
#include "node2.h"  // With value_type defined as double
#include "point.h"
using namespace std;
using namespace main_savitch_6B;
using namespace main_savitch_2A;

int main()
{

node<int>* ages = NULL;
list_head_insert(ages,18);

cout<< ages->data();

node<string> name;
name.set_data(“Jorge”);

cout << name.data();

node<point> *seat;
seat = new node<point>;
(*seat).set_data(point(2,4));

cout<< seat->get_x() <<"\n";
cout<< seat->get_y() <<"\n";



//return 0;
}
