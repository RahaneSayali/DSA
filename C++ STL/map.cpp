//container which stores in terms of                                                     
void explainMap(){
    map<int,int>map;
    map<int,pair<int,int>>map;
    map<pair<int,int>,int>map;

    map[1]=2;
    map.emplace({3,1});
    map.insert({2,4});
    map({2,3})=10;
    {
        {1,2}
        {2,4}
        {3,1}
    }

    for(auto it:map){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<map[1];
    cout<<map[5];
}