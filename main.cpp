#include <iostream>

#include "temps.h"

using namespace std;

int main() {
   {
      Temps<int> t1(01, 15, 25);

      cout << t1;
   }

   return EXIT_SUCCESS;
}
