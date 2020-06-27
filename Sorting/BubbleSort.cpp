void BubbleSort(vector<int> a) {
int count = 0;
int n = a.size();
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            count++;
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
cout<<"Array is sorted in "<<count<<" swaps."<<endl;
cout<<"First Element: "<<a[0]<<endl;
cout<<"Last Element: "<<a[n-1]<<endl;

}
