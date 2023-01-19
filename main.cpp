#include <iostream>

#include "temps.h"

using namespace std;

int main() {
   {
      Temps<int> t1(01, 15, 25);
      Temps<int> t2(02, 15, 10);

      cout << t1 << endl;

      Temps<int> t3 = t1 + t2;

      cout << t3 << endl;
   }

   return EXIT_SUCCESS;
}
