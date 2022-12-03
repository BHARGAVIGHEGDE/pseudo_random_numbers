#include<iostream>
#include<random> //for importing random library

int main(int argc,char*argv[])

{
  //random_device is a class
  std::random_device rn;    //is a uniformly-distributed integer random number generator that produces non-deterministic random numbers.
  //non deterministic means the computer will always produde the output other than the input
  // in deterministic the computer will always produce the output same as the input

  std::default_random_engine re(rn());//This is a random number engine class that generates pseudo-random numbers.


  std::uniform_int_distribution <int> uniform_int_distribution(1,100);//produces random integer values on the closed interval
  
  int random_int=uniform_int_distribution(re);
  std::cout<<random_int<<std::endl;
  return 0;

}