#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// Misc variables
int a,i;

// Stats
int HP,MaxHp,Mp,MaxMp,Str,Int,Spd,Dex,Def,Agl,EXP;
int dspeed;
int command;

// Magic
typedef struct Magic{
char name[20];	
int  Damage;
int  Cost;
int  Effect; 	
}Magic;

// Items
int hpot;
int ppot;
int dpot;
int spot;

// Combat
int cstr,cdef,cspd;
int dmg, enemydmg;


// Creatures and Equipment
typedef struct creature {
char name[50];	
int  MaxHp;
int  Str;
int  Spd;
int  Def; 	
}creature;


    







typedef struct weapon{
 char name[20];
 int weight;
 int power;	
}weapon;

typedef struct armor{
	
char name[20];
int weight;
int defense;	
}armor;


creature rat,wolf;

void creatureinfo()
{
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

char str2[20] = "Wolf";
strcpy(wolf.name, str2);	
wolf.Str=15;
wolf.Def=5;
wolf.MaxHp=30;
wolf.Spd=5;	
creature *wolfp;
wolfp=&wolf; 

}

weapon longsword;
void weaponinfo()
{
char strls[20] = "Long Sword";
strcpy(longsword.name, strls);
longsword.power=4;
longsword.weight=3;
weapon *lsp;
lsp=&longsword;
}













// Delay funciton
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 500 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

// In game mechanics
void UseItem()
{ 
  int b;
  printf("1: %d Health Potion\n2: %d Defense Potion\n3: %d Strength Potion\n4: %d Speed Potion  ",hpot,dpot,ppot,spot);
  scanf("%d",&b);
  switch(b){
  case 1:
  delay(1);
  if(hpot==0){printf("You don't have any health potions..."); break;}	
  printf("Tastes good. You got 50hp!\n");
  MaxHp+=50; if(MaxHp>HP){MaxHp=HP;}
  hpot--;    if(hpot<0) {hpot=0;}
  return;
  case 2:
  delay(1);
  if(dpot==0){printf("You don't have any defense potions..."); break;}	
  printf("You feel tougher the moment you sip the potion. Your defense increased by 5!\n");
  cdef+=5;
  dpot--;    if(dpot<0){dpot=0;}
  return;
  case 3:
  delay(1);
  if(ppot==0){printf("You don't have any strength potions..."); break;}	
  printf("With this surge of power , you're ready to deal a devastating blow. Your strength increased by 5!\n");
  cstr+=5; 
  ppot--;    if(spot<0){spot=0;}
  return;
  case 4:
  delay(1);
  if(spot==0){printf("You don't have any speed potions..."); break;}	
  printf("you feel so nimble that you can race a cheetah. Your speed increased by 5!\n");
  cspd+=5; 
  spot--;    if(spot<0){spot=0;}
  return;	
	
	
	
	
	
	}
	}
void Battle (creature a,weapon w) {
int b,exp;
exp=a.MaxHp;
Spd-=w.weight;
Str+=w.power;
cdef=Def;
cstr=Str;
cspd=Spd;
dspeed=a.Spd+5;

printf("%s appeared\n\n",a.name);
printf("You have %d Hp\n",MaxHp);
printf("%s has %d Hp\n",a.name,a.MaxHp);	
while(a.MaxHp>0)
{
printf("1:Attack\n2:Magic\n3:item\n4:Info\n5:Run\n");	
	
dmg=cstr-a.Def;
enemydmg=a.Str-cdef;
if(enemydmg<0){enemydmg=0;}	
scanf("%d",&b);

switch(b)
{ case 1:
  a.MaxHp-=dmg;
  printf("\nyou dealt %d damage to %s\n",dmg,a.name);
  delay(1);
  if(cspd>dspeed){ printf("You hit %s one more time with a nimble attack\n",a.name); a.MaxHp-=dmg;}
  break;
  
  case 2:
  printf("You don't have any magics");
  break;
  
  
  case 3:if(hpot<0 && ppot<0 && spot<0 && dpot<0){
  printf("You don't have any items\n\n");}
  else {UseItem();}
  
  	

  
}
if(a.MaxHp>0)
  {
  MaxHp-=enemydmg;
  if(MaxHp<=0){MaxHp=0;}
  delay(1);
  printf("\n%s has %d Hp\n",a.name,a.MaxHp);
  delay(1);
  printf("\n%s dealt %d damage to you\n",a.name,enemydmg);
  if(MaxHp==0){printf("You died\nGame Over");command==0;return;}
  delay(3);
  system("cls");
  printf("\nyou have %d Hp\n",MaxHp);
  printf("%s has %d Hp\n",a.name,a.MaxHp);  
  }
  else
{ printf("%s is dead \n",a.name); 
  break;
 

}
  
  

} 
EXP+=exp;
Spd+=w.weight;
Str-=w.power;
printf("You got %d EXP",exp);
}
void LevelUp(int a)
{printf("You leveled up!!\n+4HP\n+1Str+1Spd");
 MaxHp+=a;
 MaxHp+=a;	
 MaxHp+=a;
 MaxHp+=a;
 Str+=a;
 Spd+=a;
 Def+=a;
}




// Locations and Events
typedef struct location{
const char *description;
const char *tag;
}location;

typedef struct event{
}event;



 



















