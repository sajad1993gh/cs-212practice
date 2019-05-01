// Sajad Gholamzadehrizi
#include <iostream>
#include <cassert>
#include<string>
using namespace std;

void search(const int a[ ],
  size_t first, size_t last, int target, bool& found, size_t& location)
// Precondition: The array segment starting at a[first] and ending at a[last]. first <= last. array containing size elements is sorted // from smallest to largest.
// Postcondition: The array segment starting at a[first] and containing size elements has been // searched for the target. If the target was present, then found is true, and location is set so // that target == a[location]. Otherwise, found is set to false.
// Library facilities used: cstdlib (provides size_t from namespace std)
  {
     assert(first <= last);
     size_t middle;
     if (last == 0) found = false;
     else
     {
       middle = first + (last+1)/2;
        if (target == a[middle])
          {
             location = middle;
             found = true;
           }
        else if (target < a[middle])
        // The target is less than a[middle], so search before the middle.
            search(a, first, last/2, target, found, location);
        else
       // The target must be greater than a[middle], so search after the middle.
            search(a, middle+1, last/2, target, found, location);
    }
  }
int main()
{
  int A[8] = {2,3,6,7,10,12,16,18};
  bool found = false;
  size_t where = 0;
  search(A, 0, 7, 16, found, where);
  cout <<  found << "\t" << where << "\n";
  return 0;
}

// output of the test:
//   $ ./a.out
//   1	6
