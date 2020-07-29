/*
interview bit-> array -> easy
https://www.interviewbit.com/problems/spiral-order-matrix-ii/
*/

vector<vector<int> > Solution::generateMatrix(int A) {
    
    //directions: 0->left, 1->right, 2->up, 3->down
    int l=0,r=A-1,u=1,d=A-1;
    int dir = 1;
    int i=0,j=0;
    vector<vector<int>> m(A,vector<int> (A,0));
    //cout<<m.size()<<" "<<m[0].size()<<endl;
    for(int n=1;n<=A*A;n++){
        if(dir == 1){  //right
            m[i][j] = n;
            if(j == r){
                i++;
                dir = 3;
                r--;
            }
            else{
                j++;
            }
            
        }
        else if(dir == 3){      //down
            m[i][j] = n;
            if(i == d){
                j--;
                dir = 0;
                d--;
            }
            else{
                i++;
            }
        }
        
        else if(dir == 0){      //left
            m[i][j] = n;
            if(j == l){
                i--;
                dir = 2;
                l++;
            }
            else{
                j--;
            }
        }
        
        else if(dir == 2){ //up
            m[i][j] = n;
            if(i == u){
                j++;
                dir = 1;
                u++;
            }
            else{
                i--;
            }
        }
    }
    return m;
}
