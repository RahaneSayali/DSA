void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;   //vector used for pair

    v.push_back({1,2});  //only difference of bracket in pushback and emplaceback
    v.emplace_back(1,2);

    vector<int> v(5,100); //container of 5 instances 100 i.e{100,100,100,100,100}

    vector<int>v(5);  //define size of vector only

    vector<int>v1(5,20); 
    vector<int>v2(v1);   //v2 will be copy of v1


}