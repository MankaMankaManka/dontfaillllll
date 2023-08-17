#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>  
#include <vector>


class BagOfHolding{

    void addItem(std::string word){
        dabag.push_back(word);
    };

    std::string removeItem(){
        srand(time(NULL));
        int location = rand() % dabag.size();
        
        std::string result= dabag(dabag.begin()+location);
        dabag.erase(dabag.begin()+location);
        return result;
    };


    BagOfHolding();

    std::vector<std::string> dabag;

};


BagOfHolding::BagOfHolding(){}



int main(){
return 0;

}