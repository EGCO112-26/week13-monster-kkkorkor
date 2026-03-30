//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;
    monster m1("KK",15,7);
    monster m2("Fang"),m4("JJ",30);
    monster x[5] = {{"Gojo",100},{"Lin",50}};
    p=new monster("Lulu",10,50);
    delete p; //destructor
   // monster m3; ----> error
 
    return 0; //destructor x,m4,m2,m1
}
