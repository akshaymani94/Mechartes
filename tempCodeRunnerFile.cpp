    vector<int>v;
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;

    v[1]=5;

    vector<int>v1(5,1);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;   // when we initialize a vecotr then its capacity will be same as that of its size.

    v1.push_back(8);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;

    vector<int>v2 = {1,2,3,4,5};
    cout<<"Size of v2: "<<v2.size()<<endl;
    cout<<"Capacity of v2: "<<v2.capacity()<<endl;