#include <stdio.h>
/*
Richard and Vicent are crazy about football collectable cards. In their spare time, they arrange a way of playing some game involving such cards. Both also have the habit of exchanging the repeated cards with their friends, and one day they thought about a different game. They called all their friends and proposed the following: with the cards in hand, each one tried to make an exchange with his closest friend following this simple rule: each one must count how many cards he owned. After this, they had to split these cards into stacks, all of it with the same size, as large as it was possible for both players. Then, each one choose one of the friend's card stacks to receive. For example, if Richard and Vincent would change the cards with respectively 8 and 12 cards each, both must put his cards in stacks of four cards (Richard would have two stacks and Vincent had three stacks), and both choose a stack from his friend to receive it.
Input

The first input line contains a single integer N (1 ≤ N ≤ 3000), indicating the number of test cases. Each test case contains two integer numbers F1 (1 ≤ F1 ≤ 1000) and F2 (1 ≤ F2 ≤ 1000)  indicating, respectly, the among of collectable cards that Richard and Vicent have to change.
Output

For each test case there will be an integer number at the output, representing the maximum size of the stack of cards which can be exchanged between two players.
*/
int main(){
    int jogador1,jogador2,divisor,maximo,resto,dividendo;
    
    scanf("%d",&maximo);
    for (int i = 1; i <= maximo; i++)
    {
        scanf("%d %d",&jogador1,&jogador2);
        if (jogador1 < jogador2 )
        {   
            divisor = jogador1;
            dividendo = jogador2;
            resto = jogador1;

            while(divisor != 0)
            {
                resto = dividendo % divisor;
                dividendo = divisor;
                divisor = resto;
            }
        }
        else
        {
            divisor = jogador2;
            dividendo = jogador1;
            resto = jogador1;

            while(divisor != 0)
            {
                resto = dividendo % divisor;
                dividendo = divisor;
                divisor = resto;
            }
        }
    
        printf("%d\n",dividendo);
    
    }
        
    
    
        
    
    
    return 0;
}