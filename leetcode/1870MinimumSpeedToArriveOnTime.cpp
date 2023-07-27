/*
1870. Minimum Speed to Arrive on Time
Medium
2.1K
241
Companies

You are given a floating-point number hour, representing the amount of time you have to reach the office. To commute to the office, you must take n trains in sequential order. You are also given an integer array dist of length n, where dist[i] describes the distance (in kilometers) of the ith train ride.

Each train can only depart at an integer hour, so you may need to wait in between each train ride.

    For example, if the 1st train ride takes 1.5 hours, you must wait for an additional 0.5 hours before you can depart on the 2nd train ride at the 2 hour mark.

Return the minimum positive integer speed (in kilometers per hour) that all the trains must travel at for you to reach the office on time, or -1 if it is impossible to be on time.

Tests are generated such that the answer will not exceed 107 and hour will have at most two digits after the decimal point.

 

Example 1:

Input: dist = [1,3,2], hour = 6
Output: 1
Explanation: At speed 1:
- The first train ride takes 1/1 = 1 hour.
- Since we are already at an integer hour, we depart immediately at the 1 hour mark. The second train takes 3/1 = 3 hours.
- Since we are already at an integer hour, we depart immediately at the 4 hour mark. The third train takes 2/1 = 2 hours.
- You will arrive at exactly the 6 hour mark.

Example 2:

Input: dist = [1,3,2], hour = 2.7
Output: 3
Explanation: At speed 3:
- The first train ride takes 1/3 = 0.33333 hours.
- Since we are not at an integer hour, we wait until the 1 hour mark to depart. The second train ride takes 3/3 = 1 hour.
- Since we are already at an integer hour, we depart immediately at the 2 hour mark. The third train takes 2/3 = 0.66667 hours.
- You will arrive at the 2.66667 hour mark.

Example 3:

Input: dist = [1,3,2], hour = 1.9
Output: -1
Explanation: It is impossible because the earliest the third train can depart is at the 2 hour mark.

 

Constraints:

    n == dist.length
    1 <= n <= 105
    1 <= dist[i] <= 105
    1 <= hour <= 109
    There will be at most two digits after the decimal point in hour.

*/


class Solution {
public:
// The below solution using Binary search worked for all the cases :)
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if(hour<=dist.size()-1){
            return -1;
        }
        int l = 1; int r = 1e7;
        while(l<r){
            int mid = l + (r-l)/2;
            double time = 0;
            for(int i=0;i<dist.size();i++){
                if(i==dist.size()-1){
                    time += (double)dist[i]/(double)mid;
                }
                else time += ceil((double)dist[i]/mid);
            }
            if(time<=hour){
                r = mid;
            }
            else l = mid+1;
        }
        return l;

// The below solution gave TLE for some cases. :(

    //     int speed = 1;
    //     int fg = 0;
    //     while(true){
    //         double time = 0;
    //         int flag = 0;
    //         if((hour)<=dist.size()-1){
    //             break;
    //         }
    //         for(int i=0; i<dist.size();i++){
    //             if(dist[i]%speed != 0){
    //                 if(i==dist.size()-1){
    //                     time += double(dist[i])/double(speed);
    //                 }
    //                 else time += dist[i]/speed + 1;
    //             }
    //             else{
    //                 time += dist[i]/speed;
    //             }
    //             if(time>hour){
    //                 flag = 1;
    //                 break;
    //             }
    //         }
    //         if(flag==1){
    //             speed++;
    //         }
    //         else{
    //             fg = 1;
    //             break;
    //         }
    //     }
    //     if(fg==1){
    //         return speed;
    //     }
    //     else{
    //         return -1;
    //     }
    }
};