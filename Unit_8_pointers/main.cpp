//
//  main.cpp
//  Unit_8_pointers
//
//  Created by Marcin Salamon on 25/03/2022.
//

#include <iostream>
#include <vector>
using namespace std;

void outWords (vector<string>  *words);

int main() {
    vector<string> words{"Hello", "Word,", "Pointers", "are", "great", "!"};
    outWords(&words);
    cout<<endl;
    return 0;
}

void outWords (vector<string>  *words){
    
    for(auto element:*words){
        cout<<element + " ";
    }

}
