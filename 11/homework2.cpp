
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdio>

void search(
const int a[ ], size_t size, int target, bool& found, size_t& location
            )
// Precondition: The array segment starting at a[first] and containing size elements is sorted // from smallest to largest.
// Postcondition: The array segment starting at a[first] and containing size elements has been // searched for the target. If the target was present, then found is true, and location is set so // that target == a[location]. Otherwise, found is set to false.
// Library facilities used: cstdlib (provides size_t from namespace std)
  {
     size_t first = 0;
     size_t middle;
     if (size == 0) found = false;
     else
     {
       middle = first + size/2;
        if (target == a[middle])
          {
             location = middle;
             found = true;
           }
        else if (target < a[middle])
        // The target is less than a[middle], so search before the middle.
            search(a, middle-1, target, found, location);
        else
       // The target must be greater than a[middle], so search after the middle.
            search(a, middle+1, target, found, location);
    }
  }

  int A[8] = {2,3,6,7,10,12,16,18};
  cout<< "search result:\n" << search(A, 8, 17, true, 0) <<"\n";
