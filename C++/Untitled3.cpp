#include <iostream>
using namespace std;
template<typename type>
type shape(type base, type height, string name){
    cout<<"Name: "<<name<<endl;
    cout<<"Base: "<<base<<"\nHeight: "<<height<<endl;
    cout<<"Area: "<<base * height<<endl;
    return base * height;
}
template<typename type>
type show_master(int i, type array[10]){
    return array[i];
}
int main(){
    string triangle = "triangle", rectangle = "rectangle";
    shape<float>(8, 4, triangle);
    shape<int>(5, 5, rectangle);
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<show_master<int>(5, arr);
    return 0;
}
