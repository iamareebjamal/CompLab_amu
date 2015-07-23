/*
 * Areeb Jamal
 * 14PEB049 (Second Year) Computer Engineer
 * 2015-16
 */
 
/*Disclaimer:
     I am not the developer of this code. 
     I have just improved the code using functions 
     and increased its readability by comments. 
*/
 

#include <dos.h>     //DOS library required to play
#include <stdio.h>   //makes this program exclusive
                     //to Windows Operating System.

//Normal Play with stopping previous sound
void play(int tone, int delay){
    sound(tone);
    delay(delay);
    nosound();
}

//Continous play without stopping previous sound
void cplay(int tone, int delay){
    sound(tone);
    delay(delay);
}

int main(){
    int A, B, D, G, F;
    A = 440;
    G = 780;
    B = 461;
    D = 586;
    F = 687;
    
    //Let's Begin 
    
    play(G, 500);
    play(G, 250);
    play(G, 250);
    play(G, 500);
    play(2*D, 500);
    play(2*A, 250);
    play(2*B, 250);
    play(2*A, 250);
    play(G, 250);
    play(F, 500);
    play(2*A, 500);
    play(G, 250);
    play(2*A, 250);
    play(G, 250);
    cplay(F, 250);
    cplay(G, 250);
    cplay(2*A, 250);
    cplay(2*B, 500);
    cplay(2*A, 500);
    cplay(G, 250);
    cplay(F, 250);
    play(D, 500);
    
    //Tune 1 end
    
    play(G, 500);
    play(G, 250);
    play(G, 250);
    play(G, 500);
    play(2*D, 500);
    play(2*A, 250);
    play(2*B, 250);
    play(2*A, 250);
    play(G, 250);
    play(F, 500);
    play(2*A, 500);
    play(G, 250);
    play(2*A, 250);
    play(G, 250);
    cplay(F, 250);
    cplay(G, 250);
    cplay(2*A, 250);
    cplay(2*B, 500);
    cplay(2*A, 500);
    cplay(G, 250);
    cplay(F, 250);
    play(D, 500);
    
    //Tune 2 end
    
    play(2*A, 250);
    play(G, 250);
    cplay(F, 250);
    cplay(G, 250);
    cplay(2*A, 250);
    cplay(2*B, 500);
    cplay(2*A, 500);
    cplay(G, 250);
    cplay(F, 250);
    play(D, 500);
    
    //Tune 3 end 
    
    play(2*A, 250);
    play(G, 250);
    cplay(F, 250);
    cplay(G, 250);
    cplay(2*A, 250);
    cplay(2*B, 500);
    cplay(2*A, 500);
    cplay(G, 250);
    cplay(F, 250);
    play(D, 500);
    
    return 0;
}