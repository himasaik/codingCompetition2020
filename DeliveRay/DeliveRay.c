#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdbool.h>

struct destination{

  int x;
  int y;

}destination;

struct destination createDestination(int x, int y){
  destination.x = x;
  printf("cdx %d\n", destination.x);
  destination.y = y;
  printf("cdy %d\n", destination.y);
}

int distanceBetween(int x1, int y1, int x2, int y2){

  int dist = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));
//   dist = sqrt(dist);
  return dist;

}

int main (){


 int numOrders = 3;

 int arrayOfDistances[5];

struct  destination  location1 = createDestination(0,1);

struct  destination location2 = createDestination(1,0);

struct  destination location3 = createDestination(1,1);
printf("x = %d\n", location1.x);
printf("y = %d\n", location1.y);


//1st combo
int firstDistance = 0;
firstDistance = distanceBetween(location1.x, location1.y, location2.x, location2.y);
printf("fdxxx %d\n", firstDistance);
int nextDistance = 0;
nextDistance += distanceBetween(location2.x, location2.y, location3.x, location3.y);
printf("fd %d\n", nextDistance);
int totalDistanceCombo1 = firstDistance + nextDistance;
printf("%d\n", totalDistanceCombo1);
arrayOfDistances[0] = totalDistanceCombo1;

//2nd combo
int secondDistance = 0;
secondDistance += distanceBetween(location3.x, location3.y, location2.x, location2.y);
int nextDistance2 = 0;
nextDistance2 += distanceBetween(location2.x, location2.y, location1.x, location1.y);
int totalDistanceCombo2 = secondDistance + nextDistance2;
printf("%d\n", totalDistanceCombo2);
arrayOfDistances[1] = totalDistanceCombo2;

//3rd combo
int thirdDistance = 0;
thirdDistance += distanceBetween(location2.x, location2.y, location1.x, location1.y);
int nextDistance3 = 0;
nextDistance3 += distanceBetween(location1.x, location1.y, location3.x, location3.y);
int totalDistanceCombo3 = thirdDistance + nextDistance3;
printf("%d\n", totalDistanceCombo3);
arrayOfDistances[2] = totalDistanceCombo3;

//4th combo
int fourthDistance = 0;
fourthDistance += distanceBetween(location2.x, location2.y, location3.x, location3.y);
int nextDistance4 = 0;
nextDistance4 += distanceBetween(location3.x, location3.y, location1.x, location1.y);
int totalDistanceCombo4 = fourthDistance + nextDistance4;
printf("%d\n", totalDistanceCombo4);
arrayOfDistances[3] = totalDistanceCombo3;

//5th combo
int fifthDistance = 0;
fifthDistance += distanceBetween(location1.x, location1.y, location3.x, location3.y);
int nextDistance5 = 0;
nextDistance5 += distanceBetween(location3.x, location3.y, location2.x, location2.y);
int totalDistanceCombo5 = fifthDistance + nextDistance5;
arrayOfDistances[4] = totalDistanceCombo4;
printf("%d\n", totalDistanceCombo5);

//copy of arrayOfDistances
int copy[5];
for(int i = 0; i < 5; i++){
  copy[i] = arrayOfDistances[i];
}

for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4 - i; j++){
 int temp;
  if(arrayOfDistances[j] > arrayOfDistances[j+1]){
    temp = arrayOfDistances[j];
    arrayOfDistances[j] = arrayOfDistances[j+1];
    arrayOfDistances[j+1] = temp;

  }

}
}

//print in order of delivery
for(int i = 0; i < 5; i++){
  for(int j = 0; j < 5; j++){
    if(copy[i] == arrayOfDistances[j]){
      printf("%d", i);
    }
  }
}
printf("\n"); //line break
//Distance output
printf("%d\n", arrayOfDistances[0]);

}
