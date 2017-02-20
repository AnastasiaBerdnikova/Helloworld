#include <stdio.h>

const int godovoidoxod = 100000;
{
   float pr = 1;
   if( days <= 30) {
       pr -= 0.1;
   } else if ( days <= 120) {
     pr += ( dep <= godovoidoxod ? 0.02 : 0.03 );
   } else if( days <= 240 ) {
     pr +=  ( dep <=godovoidoxod ? 0.06 : 0.08 );
   } else if ( days <= 365 ) { 
     pr +=  (dep <= godovoidoxod  ? 0.12 : 0.15);
   }
   return pr;
     