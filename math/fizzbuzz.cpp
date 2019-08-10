vector<string> Solution::fizzBuzz(int A) {
    vector<string> res;
    for(int i = 1; i <= A; ++i){
        if(i%15 == 0) {
            res.push_back("FizzBuzz"); continue;
        }
        if(i%3 == 0) { 
            res.push_back("Fizz"); continue;
        }
        if(i%5 == 0) {
            res.push_back("Buzz"); continue;
        }
        res.push_back(to_string(i));
    }
    return res;
}
