//container which stores in terms of keys
//sorted order unique just like set                                                    
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

    auto it=map.find(3);
    cout<<*(it).second;
    auto it=map.find(5);
    
    //this is the syntax
    auto it=map.lower_bound(2);
    auto it=map.upper_bound(3);
    //erase,swap,size,empty are same as above

}

void explainMultimap(){
    //everything same as map,only it can store multiple keys
    //only map[key] cannot be used here

}

void explainUnorderedMap(){
    //same as set and unordered_set differene

}

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    }
    else if(p1.second==p2.second){
        if(p1.first>p2.second)
        return true;
    }
    return false;
}

void explainExtra(){
    sort(a+2,a+4);
    sort(a,a+n,greater<int>);
}


























