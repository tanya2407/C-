/*
VERY IMPORT QUESTION -> Find median using counting sort

HackerLand National Bank has a simple policy for warning clients about possible fraudulent account activity.
If the amount spent by a client on a particular day is greater than or equal to 2 * the client's median spending for a
trailing number of days, they send the client a notification about potential fraud.
The bank doesn't send the client any notifications until they have at least that trailing number of prior days' transaction data.

Given the number of trailing days d and a client's total daily expenditures for a period of n days, find and print the number
of times the client will receive a notification over all  days.
*/
#include <bits/stdc++.h>
using namespace std;
int activityNotifications(vector<int> expenditure, int d) {
   int count = 0;
   
    int start=0;
    int end = start+d-1;

     vector<int> countarr(201,0);
     for(int i=0;i<d;i++){
         countarr[expenditure[i]]++;
     }
   for(int i=d;i<expenditure.size();i++){
        int acc=0;
        int mid1 = -1, mid2 = -1;
        for(int j=0;j<201;j++){
            acc = acc + countarr[j];
            if(mid1 == -1 && acc >= int(floor((d+1)/2.0)))
                mid1 = j;
            if(mid2 == -1 && acc >= int(ceil((d+1)/2.0)))
                mid2 = j;
            
        }
        //cout<<mid1<<" "<<mid2<<endl;
        int median_2 = mid1 + mid2;
        if(expenditure[i] >= median_2)
            count++;
        ++start;
        ++end;
        countarr[expenditure[start-1]]--;
        countarr[expenditure[end]]++;
        
   }
      
   return count;

}

