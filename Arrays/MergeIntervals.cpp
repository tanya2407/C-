/*
interview bit -> arrays -> medium level question
Many cases to take into account
https://www.interviewbit.com/problems/merge-intervals/
*/


/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    

    int n = intervals.size();
    vector<Interval> ans;
    if(n == 0){
        
        ans.push_back(newInterval);
        return ans;
        
    }
    bool flag = false;
    for(int i=0;i<n;i++){
        if(flag)
            ans.push_back(intervals[i]);
            
        else if(intervals[i].end < newInterval.start){
            ans.push_back(intervals[i]);
            continue;
        }
        else if(newInterval.end < intervals[i].start){
            flag = true;
            ans.push_back(newInterval);
            ans.push_back(intervals[i]);
        }
        else{
            newInterval.start = min(newInterval.start, intervals[i].start);
            newInterval.end = max(newInterval.end,intervals[i].end);
        }
    }
    if(!flag)
        ans.push_back(newInterval);
    return ans;
    
}
