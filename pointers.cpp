#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool to_int(string s_length, int* length);
void initialize_int_array(int *i_array, int length);

const regex number("[0-9]{0,4}");

int main (){
    int length = 0;  
    string length_string;
    cout << "array counter\nhow big do you want the array?\n";
    do{
        cin >> length_string;
        if(to_int(length_string, &length) == false)
            cout << "invalid... try again\n";

    }while (length <= 0);
    cout << "good, the new length is "<<length<<endl;
    int cheese[length];
    initialize_int_array(cheese, length);
    //make sure its acctually putting 1's in the array.
    for(int i =0; i<length;i++)
        cout << cheese[i];
    return 0;
}

bool to_int(string s_length, int* length){
    if (regex_match(s_length, number)){
        *length = stoi(s_length);
        return true;
    }
    return false;
}

void initialize_int_array(int *i_array, int length){
    int limit = length - 9;
    int j = 0;
    for (; j < limit; j+=10)
    {
        i_array[j] = 1;
        i_array[j+1] = 2;
        i_array[j+2] = 3;
        i_array[j+3] = 4;
        i_array[j+4] = 5;
        i_array[j+5] = 6;
        i_array[j+6] = 7;
        i_array[j+7] = 8;
        i_array[j+8] = 9;
        i_array[j+9] = 10;
    }
    for (; j < length; j++){
        i_array[j] = 1;
    }
}