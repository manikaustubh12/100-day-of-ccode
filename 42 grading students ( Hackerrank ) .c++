vector<int> gradingStudents(vector<int> grades) {
    int n=grades.size();
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>grades[i];
    }
    int z,x;
    for(int i=0;i<n;i++){
        z=grades[i]%5;
        x=5-z;
        if(grades[i]<38||x>=3){ v.push_back(grades[i]);}
        else{
            if(x<3) v.push_back(grades[i]+x);
        } 
    }
    return v;
}
