
class throttle {
public:
// MODIFICATION MEMBER FUNCTIONS void shut_off( );
void shift(int amount);
// CONSTANT MEMBER FUNCTIONS
double flow( ) const;
bool is_on( ) const;
private:
int position;
 };
