// =====================================================================================
// 
//       Filename:  lamda.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2014年11月16日 19时51分26秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  ywolf (), hlf0312@gmail.com
//        Company:  xxx
// 
// =====================================================================================

#include	<iostream>

int main ( int argc, char *argv[] )
{
    auto glambda = [](auto a, auto&& b) { return a < b; };
    bool b = glambda(3, 3.14);
    std::cout<<b<<endl;

    return EXIT_SUCCESS;
}				// ----------  end of function main  ----------
