vector<int>::iterator it=v.begin();  //it is just name it can be anything
it++;
cout<<*[it]<<" ";

it=it+2;
cout<<*[it]<<" ";

vector<int>::iterator it=v.end();

vector<int>::iterator it=v.rend();  //reverseend

vector<int>::iterator it=v.rbegin();  //reversebegin

cout<<v[0]<<" "<<v.at(0);  //auto
cout<<v.back()<<" ";

for (vector<int>::iterator it=v.begin();it !=v.end();it++){
    cout<<*(it)<<" ";
}

for (auto it=v.begin(); it!=v.end();it++){
    cout<<*(it)<<" ";
}

for (auto it:v){
    cout<<it<<" ";
}


