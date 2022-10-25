/*
https://lightoj.com/problem/dimik-box-1


তোমার হাতে যথেষ্ট পরিমাণে কাজকর্ম নেই দেখে তোমাকে একটি বাক্স আঁকার কাজ দেওয়া হলো। আসলে ব্যাপারটি তেমন কিছু কঠিন নয়। 
তোমাকে বর্গের একটি বাহুর দৈর্ঘ্য বলা হবে, আর তুমি চট করে * অক্ষরটি ব্যবহার করে ওই বর্গটি এঁকে ফেলবে। বর্গের কেবল বাহু আঁকলেই হবে 
না, ভেতরের ঘরগুলোও * দিয়ে পূর্ণ করে দিতে হবে। যেহেতু তুমি প্রোগ্রামিং শেখা 
শুরু করেছ এবং লুপ পর্যন্ত শিখে ফেলেছ, তাই তুমি কাজটি করবে একটি প্রোগ্রাম লিখে।

*/

#include <iostream>
using namespace std;

int main()
{
    int numberOfBoxes, size;
    cin >> numberOfBoxes;
    
    for(int i = 0; i<numberOfBoxes; i++){
        cin >> size;
    
        
        for(int rows = 0; rows < size; rows++ ){
            for(int cols = 0; cols < size; cols++){
                cout << "*";
            }
            cout << endl;
        }
    }
    
    return 0;
}
