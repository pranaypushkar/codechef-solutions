/*
 The problem statement can be found on https://www.codechef.com/problems/INTEST */

/*  Author   - PRANAY PUSHKAR
 *  Date     - 22 May 2017
 *  IDE      - Codeblocks
 *  Language - C++
 */


#include<iostream>
#include<stdlib.h>

using namespace std;


 void EnormousInputTest_INTEST()
 {
     int n, k;
     std::cin >> n >> k;

     int *arrayPointer = nullptr;
     int divisibleCount = 0;

     if(n<= 10000000 && k <= 1000000)
     {
         arrayPointer = new int[n];

         for(int i = 0; i < n; i++)
         {
             std::cin >> arrayPointer[i];
             if(arrayPointer[i] <= 1000000000)
             {
                if(arrayPointer[i]% k == 0)
                {
                 divisibleCount++;
                }
             }
             else
             {
                exit(0);
             }

         }

         std::cout << divisibleCount << std::endl;
     }

 }
