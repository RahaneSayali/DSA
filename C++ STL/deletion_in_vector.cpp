//{10,20,12,23}
v.erase[v.begin()+];

//{10,28,12,23,35}
v.erase[v.begin()+2,v.begin()+4]; //{10,28,35}[start,end]

//Insert Function
vector<int>v{2,100}; //{100,100}
v.insert(v.begin(),300); //{300,100,100};
v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

vector<int>copy(2,50); //{50,50}
v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

//{10,20}
cout<<v.size(); //2

//{10,20}
v.pop_back(); //{18}

//v1->{10,20}
//v2->{30,40}
v1.swap(v2); //v1->{30,40},v->{10,20}
v.clear(); //erases entire vector

cout<<v.empty();


