# MyLeetcode
Leetcode solution

## Array
[704. Binary Search](https://github.com/stevennn30/MyLeetcode/blob/aceb5a88817d25d65800d1316a727252c2d6b273/solution/704.%20Binary%20Search)  
[027. Remove Element](https://github.com/stevennn30/MyLeetcode/blob/aceb5a88817d25d65800d1316a727252c2d6b273/solution/27.%20Remove%20Element)  
[977. Squares of a Sorted Array](https://github.com/stevennn30/MyLeetcode/blob/aceb5a88817d25d65800d1316a727252c2d6b273/solution/977.%20Squares%20of%20a%20Sorted%20Array)  
[209. Minimum Size Subarray Sum]()  
[059. Spiral Matrix ll](https://github.com/stevennn30/MyLeetcode/blob/4ff9b29b734974ebbf53b01b08da4b0abf1e703e/solution/059.%20Spiral%20Matrix%20ll)  

#### Sliding Window
The idea behind this is shifting the window until requirement are satisfied, then do corresponding response.

Template would be something like below：
while (usable indices) {
    while (window is valid) {
        corresponding reponse
        shift to next window
    }
}

[1358. Number of Substrings Containing All Three Characters]()  
[]()
[]()  
[]()  

## Linked List
[203. Remove Linked List Elements](https://github.com/stevennn30/MyLeetcode/blob/3dd964a3628ba149f3a59e42133fd50eaf634dc9/solution/203.%20Remove%20Linked%20List%20Elements)  
[160. Intersection of Two Linked Lists](https://github.com/stevennn30/MyLeetcode/blob/bc0343e490d4782ae9ef22b1149d57b277ce86bc/solution/160.%20Intersection%20of%20Two%20Linked%20Lists)  
[024. Swap Nodes in Pairs](https://github.com/stevennn30/MyLeetcode/blob/c0759e8103d220e8740ec62cecff5a9dfee67f9a/solution/024.%20Swap%20Nodes%20in%20Pairs)  
[019. Remove Nth Node From End of List](https://github.com/stevennn30/MyLeetcode/blob/7b72194a1241c22c2db83f4b284213bc9e8c06e8/solution/019.%20Remove%20Nth%20Node%20From%20End%20of%20List)    
[142. Linked List Cycle II](https://github.com/stevennn30/MyLeetcode/blob/d6d2b899b42ae53819567e9c2a117b6bc4a18aa2/solution/142.%20Linked%20List%20Cycle%20II)    

## Hash Table
#### 學到的東西
1. 建立umap   unordered_map<key, value> umap {}
2. 尋找某key是否存在   umap.count(key) return true if key is in umap, return false otherwise
3. 加入元素    umap[key] = value
4. 取map值   auto i : umap ---> i.first / i.second (用法和struct很像)
5. c++ 可以直接return {}
6. .push_back()可以直接把東西放進vector
7. string(1, 1+'a') 把char 變成string

#### 題目
[242. Valid Anagram](https://github.com/stevennn30/MyLeetcode/blob/6daf557284c4bf1abdba5303efc30769ef0125f5/solution/242.%20Valid%20Anagram)  
[1002. Find Common Characters](https://github.com/stevennn30/MyLeetcode/blob/f7871f5f525768150cacf4c38df50d70a2eb3b71/solution/1002.%20Find%20Common%20Characters)  
[349. Intersection of Two Arrays]()  
[202. Happy Number](https://github.com/stevennn30/MyLeetcode/blob/0d76f71bf5af7c78efa41ed29283c92cf5360dcb/solution/202.%20Happy%20Number)  
[001. Two Sum](https://github.com/stevennn30/MyLeetcode/blob/6e366c3e4f960499644dd65e50b0814f84eb67fb/solution/001.%20Two%20Sum)  
[]()  
[]()  

## String
[344. Reverse String](https://github.com/stevennn30/MyLeetcode/blob/a46bd03379102831964ae4e4838d336b173f92ea/solution/344.%20Reverse%20String)  
[541. Reverse String II](https://github.com/stevennn30/MyLeetcode/blob/bb78f61d86b2a52640454edb612971df4abec541/solution/541.%20Reverse%20String%20II)  
[]()  
[]()  
[]()  
[]()  
