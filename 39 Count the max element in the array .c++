int birthdayCakeCandles(vector<int> candles) {
    int n=candles.size(),count=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(candles[i]>mx) 
            // count++;
            mx=candles[i]; 
    }
    for(int i=0;i<n;i++){
        if(candles[i]==mx) count++;
    }
    return count;
}
