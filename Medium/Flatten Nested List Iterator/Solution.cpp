class NestedIterator {
private:
    stack<int> result;
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        int index = nestedList.size() - 1;
        while(index>=0) {
            if (nestedList[index].isInteger()) {
                result.push(nestedList[index].getInteger());
                nestedList.pop_back();
            } else {
                vector<NestedInteger> lists = nestedList[index].getList();
                nestedList.pop_back();
                for (int j = 0; j <lists.size(); j++) {
                    nestedList.push_back(lists[j]);
                    index++;
                }
            }
            index--;
        }
    }

    int next() {
        int res = result.top();
        result.pop();
        return res;
    }

    bool hasNext() {
        return !result.empty();
    }
};
