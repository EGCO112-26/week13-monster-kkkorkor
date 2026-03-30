//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
    int hp,potion;
public:
    void Attack(monster &);
          void heal();
    monster(string = "NAH", int=10,int=1); //constructor

    ~monster();
};

monster::monster(string n, int h, int p){
    name=n;
    hp>200? hp=200:hp=h;
    potion>10? potion=10:potion=p;

    cout<<"Monster "<<name<<" ma leaw luk jaa"<<endl;
}

monster::~monster(){
    cout<<"Bye Bye~ "<<name<<" hp: "<<hp<<endl;
}
#endif /* monster_h */
