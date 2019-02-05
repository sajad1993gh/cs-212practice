
//Constructor
throttle::throttle( )
{
top_position = 1;
position = 0;
}
throttle::throttle(int size)
{
  assert(size>0)
  top_position = size;
  position = 0;
}

//// Precondition: None.
// Postcondition: The throttle has been turned off.
// {
//      position = 0;
//  }

void throttle::shift(int amount)
  // Precondition: shut_off has been called at least once to initialize the throttle.
  // Postcondition: The throttle’s position has been moved by amount (but // not below 0 or above 6).
  {
        position += amount;
  if (position < 0) position = 0;
  else if (position > top_position) position = top_position;
  }

//  double throttle::flow( ) const
  // Precondition: shut_off has been called at least once to initialize the throttle.
  // Postcondition: The value returned is the current flow as a proportion of // the maximum flow.
  {
//  return position / double(top_position);
//}

//// Precondition: shut_off has been called at least once to initialize the throttle.
// Postcondition: If the throttle’s flow is above 0, then the function
// returns true; otherwise, it returns false.
//{
//return (position > 0);
// }
