#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"
#include <string.h>
#include <time.h>
#include <stdlib.h>
int HP=30,MaxHp=30,Str=5,Int=5,Spd=5,Dex=5,Agl=5,Def=5,EXP=0;
int a,i,command=0,dspeed=0;
int hpot=5,dpot=5,spot=5,ppot=5;

int cstr=0,cdef=0,cspd=0;
int dmg=0,enemydmg=0;

creature rat,wolf;
weapon current, longsword;
int second;






int main() {
	
creatureinfo();
weaponinfo();





 while(command==1){
}
current=longsword;


Battle(wolf,current);


	


	
	
	
	
	
	return 0;
	
}