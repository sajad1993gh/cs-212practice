
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
double flow( ) const;
bool is_on( ) const;
private:
int position;
double top_position;
 };
