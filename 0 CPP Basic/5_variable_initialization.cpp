#include <iostream>

int main()
{
       int a; // no initializer 

       int b = 5; // initializer after equals sign // copy initialization of value 5 into variable width
           // For simple types like int, copy initialization is efficient. However, when types get more complex, copy initialization can be inefficient.

       int c( 6 ); // initializer in parenthesis // direct initialization of value 5 into variable width
           // For simple data types (like int), copy and direct initialization are essentially the same. For more complicated types, direct initialization tends to be more efficient than copy initialization.

       int d { 7 }; // initializer in braces
       int width { 5 }; // direct list initialization of value 5 into variable width (preferred)
       int height = { 6 }; // copy list initialization of value 6 into variable height
       int depth {}; // value initialization (see next section)
                // Direct and copy list initialization function almost identically, but the direct form is generally preferred.
                

	return 0;
}