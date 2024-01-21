void explainDeque(){
    deque<int>dq;
    dp.push_back(1); //{1}
    dp.emplace_back(2); //{1,2}
    dp.push_front(4); //{4,1,2}
    dp.emplace_front(3); //{3,4,1,2}

    dp.pop_back(); //{3,4,1}
    dp.pop_front(); //{4,1}

    dp.back();
    dp.front();

    //rest finctions same as vector
    //begin,end,rbegin,clear,insert,size,swap
}