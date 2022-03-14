//不合法
//访问空vector导致未定义的行为
vector<int> ivec;
ivec[0] = 42;

//修改如下：
ivec.push_back(42);
