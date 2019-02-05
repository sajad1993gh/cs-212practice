/*
FILE: throttle.h
CLASS PROVIDED: throttle (part of the namespace main_savitch_2A)
CONSTRUCTORS for the throttle class:
throttle( )
Postcondition: The throttle has one position above the shut_off position, and it is currently shut off.
throttle(int size)
Precondition: size > 0.
Postcondition: The throttle has size positions above the shut_off position, and it is currently shut off.
MODIFICATION MEMBER FUNCTIONS for the throttle class:
void shut_off( )
Postcondition: The throttle has been turned off.
void shift(int amount)
Postcondition: The throttle’s position has been moved by amount (but not below 0 or above the top position).
CONSTANT MEMBER FUNCTIONS for the throttle class:
double flow( ) const
Postcondition: The value returned is the current flow as a proportion of the maximum flow.
bool is_on( ) const
Postcondition: If the throttle’s flow is above 0 then the function returns true; otherwise it returns false.
*/
class throttle {
public:
  //Constructor
  throttle( );
  throttle(int size);
// Precondition: 0 < size.
// Postcondition: The throttle has size positions above the shutoff position,
// and its current position is off.

// MODIFICATION MEMBER FUNCTIONS
void shut_off( ) { position = 0; }
void shift(int amount);
// CONSTANT MEMBER FUNCTIONS
double flow( ) const {return position / double(top_position);}
bool is_on( ) const {return (position > 0);}
private:
int position;
int top_position;
 };
