void throttle::shut_off( )
// Precondition: None.
// Postcondition: The throttle has been turned off.
 {
      position = 0;
  }

void throttle::shift(int amount)
  // Precondition: shut_off has been called at least once to initialize the throttle.
  // Postcondition: The throttle’s position has been moved by amount (but // not below 0 or above 6).
  {
        position += amount;
  if (position < 0) position = 0;
  else if (position > 6) position = 6;
  }

  double throttle::flow( ) const
  // Precondition: shut_off has been called at least once to initialize the throttle.
  // Postcondition: The value returned is the current flow as a proportion of // the maximum flow.
  {
  return position / 6.0;
}

bool throttle::is_on( ) const
// Precondition: shut_off has been called at least once to initialize the throttle.
// Postcondition: If the throttle’s flow is above 0, then the function
// returns true; otherwise, it returns false.
{
return (flow( ) > 0);
 }
