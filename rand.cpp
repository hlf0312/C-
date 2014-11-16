// =====================================================================================
// 
//       Filename:  rand.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2014年11月16日 14时46分29秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  ywolf (), hlf0312@gmail.com
//        Company:  xxx
// 
// =====================================================================================

#include	<cstdlib>
#include	<ctime>
#include	<iostream>

int main ( int argc, char *argv[] )
{
    srand(time(0));
    
    for (int i=0; i<100; i++) 
    {
        std::cout<<std::dec<<rand()%100<<"\t";
        
        if ( 0 == (i+1)%5 ) 
        {
            std::cout<<std::endl;
        }
    }
    return EXIT_SUCCESS;
}				// ----------  end of function main  ----------
