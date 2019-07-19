#include "globals.h"


void sendToDebug(String message)
{
   if (useDebug)
   {
     Serial.print(message);
   }
/*   display.clear();
   display.drawStringMaxWidth(0, 0, 128, message);
   display.display();
*/
}
