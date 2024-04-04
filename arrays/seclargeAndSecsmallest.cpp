// find the second largest and second smallest number in an array

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> v;
    int largestEle=a[0];
    
    for(int i=1;i<n;i++) {
        if(largestEle < a[i]) {
            largestEle = a[i];
        }
        
    }

    int secLargeEle =-1; //INT_MIN
    for(int i =0;i<n;i++) {
        if(a[i] != largestEle) {

            if(secLargeEle == -1) {
                secLargeEle = a[i];

            }else if(a[i] >= secLargeEle) {
                secLargeEle = a[i];
            }
        }
    }
    v.push_back(secLargeEle);

    int smallestEle=a[0];
    
    for(int i=1;i<n;i++) {
        if(smallestEle > a[i]) {
            smallestEle = a[i];
        }
        
    }

    int secSmallestEle =-1;
    for(int i =0;i<n;i++) {
        if(a[i] != smallestEle) {

            if(secSmallestEle == -1) {
                secSmallestEle = a[i];

            }else if(a[i] <= secSmallestEle) {
                secSmallestEle = a[i];
            }
        }
    }
    v.push_back(secSmallestEle);
    return v;

}
