/*
Interview bit-> array

Given an array of real numbers greater than zero in form of strings.
Find if there exists a triplet (a,b,c) such that 1 < a+b+c < 2 .
Return 1 for true or 0 for false.
*/

int Solution::solve(vector<string> &A) {
    int n = A.size();
    if(n<3)
        return 0;
    float a = stof(A[0]);
    float b = stof(A[1]);
    float c = stof(A[2]);
    for(int i=3;i<n;i++){
        float temp = stof(A[i]);
        //cout<<(a+b+c)<<endl;
        if(a+b+c>1 && a+b+c<2)
            return 1;
        
        else if(a+b+c >= 2){ // replace the greatest number with new number
            if(a>=b && a>=c)
                a = temp;
            else if(b>=a && b>=c)
                b = temp;
            else
                c = temp;
        }
        else if(a+b+c <= 1){ // replace the smallest number with the current number
            if(a <= b && a <= c)
                a = temp;
            else if(b<=a && b<=c)
                b = temp;
            else
                c = temp;
        }
        //else
            //return 1;
        
    }
    if(a+b+c>1 && a+b+c<2) return 1;
    return 0;
    
}
