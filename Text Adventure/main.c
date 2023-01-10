#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"
#include <string.h>
#include <time.h>
#include <stdlib.h>
int HP=30,MaxHp=30,Str=5,Int=5,Spd=5,Dex=5,Agl=5,Def=5,EXP=0;
int a,i,command,dspeed=0;
int hpot=5,dpot=5,spot=5,ppot=5;

int cstr=0,cdef=0,cspd=0;
int dmg=0,enemydmg=0;

creature rat,wolf;
weapon longsword;
int second;

void info()
{
creature rat;
char str3[20] = "Rat";
strcpy(rat.name, str3);
rat.Str=1;
rat.Def=1;
rat.MaxHp=10;
rat.Spd=1;
creature *ratp;
ratp=&rat;

creature goblin;
char str1[20] = "Goblin";
strcpy(goblin.name, str1);
goblin.Str=2;
goblin.Def=1;
goblin.MaxHp=20;
goblin.Spd=4; 

creature wolf;
char str2[20] = "Wolf";
strcpy(wolf.name, str2);	
wolf.Str=15;
wolf.Def=5;
wolf.MaxHp=30;
wolf.Spd=5;	
creature *wolfp;
wolfp=&wolf;

weapon longsword;
char strls[20] = "Long Sword";
strcpy(longsword.name, strls);
longsword.power=4;
longsword.weight=3;
weapon *lsp;
lsp=&longsword;

}








int main() {
	
info(&wolf,&longsword);
Battle(wolf,longsword);
struct location locs[2] = {
   {"an open field", "field"},
   {"a little cave", "cave"}
};


 






weapon current;


char strls[20] = "Long Sword";
weapon Longsword;
strcpy(Longsword.name, strls);
Longsword.power=5;
Longsword.weight=2;	


while(command!=0){
}
current=Longsword;
printf("You are in %s.\n\n", locs[0].description); 




Battle(wolf,current);
system("cls");
	


	
	
	
	
	
	return 0;
	
}