#include <iostream> 
#include "functions.h" 
#include <cstdlib> 
#include <ctime> 
 
 
 
using namespace std; 
 
void filling() { 
 srand(time(0)); 
 extern int matrix[5][2];//mkmcekcodmceokcmeocmkodmeocdmedcoecdmo 
 
 int num1, num2; 
 bool  
  first = true, 
  random; 
 
 int num = 0; 
 for (int i = 0; i < 5; i++) 
  if (matrix[i][0] == 0) 
   num++; 
 
 if (num > 1) { 
  num1 = rand() % 100 + 1; 
  num2 = rand() % 100 + 1; 
  random = (rand() & 1); 
 
  for (int i = 0; i < 5; i++) 
   if(matrix[i][0] == 0) 
    if(first) { 
     matrix[i][0] = num1; 
     first = false; 
    } 
    else  
     matrix[i][0] = num2; 
 
  first = true; 
 
  for (int i = 0; i < 5; i++) 
   if (matrix[i][1] == 0) 
    if (first) { 
     matrix[i][1] = (random)? num1 : num2; 
     first = false; 
    } 
    else 
     matrix[i][1] = (random) ? num2 : num1; 
 } 
}