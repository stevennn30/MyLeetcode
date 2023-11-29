## Leetcode solutions

# Array
[704. Binary Search](https://github.com/stevennn30/MyLeetcode/blob/aceb5a88817d25d65800d1316a727252c2d6b273/solution/704.%20Binary%20Search)  
[027. Remove Element](https://github.com/stevennn30/MyLeetcode/blob/aceb5a88817d25d65800d1316a727252c2d6b273/solution/27.%20Remove%20Element)  
[977. Squares of a Sorted Array](https://github.com/stevennn30/MyLeetcode/blob/aceb5a88817d25d65800d1316a727252c2d6b273/solution/977.%20Squares%20of%20a%20Sorted%20Array)  
[209. Minimum Size Subarray Sum]()  
[059. Spiral Matrix ll](https://github.com/stevennn30/MyLeetcode/blob/4ff9b29b734974ebbf53b01b08da4b0abf1e703e/solution/059.%20Spiral%20Matrix%20ll)  

### Sliding Window
The idea behind it is shifting the window until requirement are satisfied, then do corresponding response.

Template would be something like below：  
<pre>
while (usable indices) {  
    if (window is valid) {  
        corresponding reponse  
        shift to next window  
    }  
}  
</pre>

[1358. Number of Substrings Containing All Three Characters]()  
[003. Longest Substring Without Repeating Characters]()
[209. Minimum Size Subarray Sum]()  
[643. Maximum Average Subarray I]()  
[1248. Count Number of Nice Subarrays]()  
[219. Contains Duplicate II](https://github.com/stevennn30/MyLeetcode/blob/81797cc18fe71af0ae4397d6612460df2cd2119e/solution/219.%20Contains%20Duplicate%20II.md)  

# Linked List
[203. Remove Linked List Elements](https://github.com/stevennn30/MyLeetcode/blob/3dd964a3628ba149f3a59e42133fd50eaf634dc9/solution/203.%20Remove%20Linked%20List%20Elements)  
[160. Intersection of Two Linked Lists](https://github.com/stevennn30/MyLeetcode/blob/bc0343e490d4782ae9ef22b1149d57b277ce86bc/solution/160.%20Intersection%20of%20Two%20Linked%20Lists)  
[024. Swap Nodes in Pairs](https://github.com/stevennn30/MyLeetcode/blob/c0759e8103d220e8740ec62cecff5a9dfee67f9a/solution/024.%20Swap%20Nodes%20in%20Pairs)  
[019. Remove Nth Node From End of List](https://github.com/stevennn30/MyLeetcode/blob/7b72194a1241c22c2db83f4b284213bc9e8c06e8/solution/019.%20Remove%20Nth%20Node%20From%20End%20of%20List)    
[142. Linked List Cycle II](https://github.com/stevennn30/MyLeetcode/blob/d6d2b899b42ae53819567e9c2a117b6bc4a18aa2/solution/142.%20Linked%20List%20Cycle%20II)    

# Hash Table
### Concepts
<pre>
1. 建立umap           unordered_map<key, value> umap {}
2. 尋找某key是否存在   umap.count(key) return true if key is in umap, return false otherwise
3. 加入元素            umap[key] = value
4. 取map值             auto i : umap ---> i.first / i.second (用法和struct很像)
5. c++ 可以直接return {}
6. .push_back()可以直接把東西放進vector
7. string(1, 1+'a') 把char 變成string
    </pre>

### 題目
[242. Valid Anagram](https://github.com/stevennn30/MyLeetcode/blob/6daf557284c4bf1abdba5303efc30769ef0125f5/solution/242.%20Valid%20Anagram)  
[1002. Find Common Characters](https://github.com/stevennn30/MyLeetcode/blob/f7871f5f525768150cacf4c38df50d70a2eb3b71/solution/1002.%20Find%20Common%20Characters)  
[349. Intersection of Two Arrays]()  
[202. Happy Number](https://github.com/stevennn30/MyLeetcode/blob/0d76f71bf5af7c78efa41ed29283c92cf5360dcb/solution/202.%20Happy%20Number)  
[001. Two Sum](https://github.com/stevennn30/MyLeetcode/blob/6e366c3e4f960499644dd65e50b0814f84eb67fb/solution/001.%20Two%20Sum)  
[454. 4Sum II](https://github.com/stevennn30/MyLeetcode/blob/227319e186d3304c16729589edfed7f54011c808/solution/454.%204Sum%20II.md)  
[]()  
[015. 3Sum](https://github.com/stevennn30/MyLeetcode/blob/d32d5291c05674246d2b96d7122d8839b95c7a53/solution/015.%203Sum.md)  
[]()  

# String
[344. Reverse String](https://github.com/stevennn30/MyLeetcode/blob/a46bd03379102831964ae4e4838d336b173f92ea/solution/344.%20Reverse%20String)  
[541. Reverse String II](https://github.com/stevennn30/MyLeetcode/blob/bb78f61d86b2a52640454edb612971df4abec541/solution/541.%20Reverse%20String%20II)  
[]()  
[]()  
[]()  
[]()  

# Stack & Queue
[232. Implement Queue using Stacks](https://github.com/stevennn30/MyLeetcode/blob/574c7ac1c27be4a7ac509109f8a3f232d94cc721/solution/232.%20Implement%20Queue%20using%20Stacks.md)  
[225. Implement Stack using Queues](https://github.com/stevennn30/MyLeetcode/blob/3238318527b095d16948d3c697a8ecbadfc99fa3/solution/225.%20Implement%20Stack%20using%20Queues.md)  
[020. Valid Parentheses.md](https://github.com/stevennn30/MyLeetcode/blob/714dd5e7f1e83de0e0b55bbc95ae783547df41cb/solution/020.%20Valid%20Parentheses.md)  
[1047. Remove All Adjacent Duplicates In String](https://github.com/stevennn30/MyLeetcode/blob/c4e1ebf2328ffb3e59d1be5471b53005f03015fb/solution/1047.%20Remove%20All%20Adjacent%20Duplicates%20In%20String.md)  
[239. Sliding Window Maximum](https://github.com/stevennn30/MyLeetcode/blob/c2f86b15e4ce140228ac624467d99306b23699c5/solution/239.%20Sliding%20Window%20Maximum.md)  
[234. Palindrome Linked List]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  

# Binary Tree
1. swap() to interchange to variable
2. reverse() to reverse vector
3. BFS template
4. DFS template
5. 
[Concept](https://github.com/stevennn30/MyLeetcode/blob/5df1ee93193f33bd74dad6ad8085a8252a290bab/Topics/Binary%20Tree.md)
### Binary tree triversal
[144. Binary Tree Preorder Traversal](https://github.com/stevennn30/MyLeetcode/blob/24b83e12b5edbb5f460dbf29c3dda7362ced8219/solution/144.%20Binary%20Tree%20Preorder%20Traversal.md)  
[145. Binary Tree Postorder Traversal](https://github.com/stevennn30/MyLeetcode/blob/24b83e12b5edbb5f460dbf29c3dda7362ced8219/solution/145.%20Binary%20Tree%20Postorder%20Traversal.md)  
[94. Binary Tree Inorder Traversal](https://github.com/stevennn30/MyLeetcode/blob/d7a22edd76673be191bfa82c3202343004b19ee0/solution/094.%20Binary%20Tree%20Inorder%20Traversal.md)  
[102. Binary Tree Level Order Traversal](https://github.com/stevennn30/MyLeetcode/blob/60c7d78766c20022bf945053b3de6a693d47d68b/solution/102.%20Binary%20Tree%20Level%20Order%20Traversal.md)  
###### BFS traversal 
[102. Binary Tree Level Order Traversal]()  
[107. Binary Tree Level Order Traversal II]()  
[199. Binary Tree Right Side View]()  
[637. Average of Levels in Binary Tree]()  
[not 429. N-ary Tree Level Order Traversal]()  
[515. Find Largest Value in Each Tree Row](https://github.com/stevennn30/MyLeetcode/blob/ad1803cc4c8b93a982bed21ee33977ece6b33b0e/solution/515.%20Find%20Largest%20Value%20in%20Each%20Tree%20Row.md)  
[not 116. Populating Next Right Pointers in Each Node](https://github.com/stevennn30/MyLeetcode/blob/b5f6e4c75438509e80101fa8eefd971f414d2786/solution/116.%20Populating%20Next%20Right%20Pointers%20in%20Each%20Node.md)  
[not 117. Populating Next Right Pointers in Each Node II](https://github.com/stevennn30/MyLeetcode/blob/a0cab34692f90301e4fb5125cf4f319d9b25b543/solution/117.%20Populating%20Next%20Right%20Pointers%20in%20Each%20Node%20II.md)  
### Properties of tree
[101. Symmetric Tree](https://github.com/stevennn30/MyLeetcode/blob/7a1ef0058d76e69e7cc3ec5bab7a01892abeb0a8/solution/101.%20Symmetric%20Tree.md)  
[100. Same Tree](https://github.com/stevennn30/MyLeetcode/blob/7a1ef0058d76e69e7cc3ec5bab7a01892abeb0a8/solution/100.%20Same%20Tree.md)  
[not 572. Subtree of Another Tree]()  
  
[104. Maximum Depth of Binary Tree](https://github.com/stevennn30/MyLeetcode/blob/016909edd954c1316f3c524fd46372edd2fb429b/solution/104.%20Maximum%20Depth%20of%20Binary%20Tree.md)  
[not 559. Maximum Depth of N-ary Tree]()  
[111. Minimum Depth of Binary Tree](https://github.com/stevennn30/MyLeetcode/blob/a9853cf2fc3227c0c9cbad7db952d77bef96da7f/solution/111.%20Minimum%20Depth%20of%20Binary%20Tree.md)  
[222. Count Complete Tree Nodes](https://github.com/stevennn30/MyLeetcode/blob/a9853cf2fc3227c0c9cbad7db952d77bef96da7f/solution/222.%20Count%20Complete%20Tree%20Nodes.md)  
[110. Balanced Binary Tree](https://github.com/stevennn30/MyLeetcode/blob/a9853cf2fc3227c0c9cbad7db952d77bef96da7f/solution/110.%20Balanced%20Binary%20Tree.md)  
[]()  
### Revise / Construct tree
``` 
construct a tree by inorder & postorder:
停止條件會是什麼??
1. 找到inorder切割點
2. 切割inorder
3. 切割postorder
利用index去切割vector會比創造新vector省時間
```
[226. Invert Binary Tree]()  
[]()  
[654. Maximum Binary Tree]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  

# BACKTRACKING
### template
<pre>
    void backTracking(string digits, int curIndex) {
        if (satisfy condition) {
            process answer
            return;
        }
        
        for (int i = 0; i < key[digits[curIndex]].size(); i++) {
            path.push_back(i);
            backTracking(digits, curIndex + 1);
            path.pop_back();
        }
    }
</pre>
[77. Combinations](https://github.com/stevennn30/MyLeetcode/blob/854896b9b03080d41559d5619e0127182cf30982/solution/077.%20Combinations.md)  
[216. Combination Sum III]()  
[17. Letter Combinations of a Phone Number](https://github.com/stevennn30/MyLeetcode/blob/a3ac381a8d4de8b4f1b510835dc8cae9234ec998/solution/017.%20Letter%20Combinations%20of%20a%20Phone%20Number.md)  
[39. Combination Sum](https://github.com/stevennn30/MyLeetcode/blob/239bb3d0fa2e86e14e59822e8400d2794d1b6114/solution/039.%20Combination%20Sum.md)  
[40. Combination Sum II](https://github.com/stevennn30/MyLeetcode/blob/e1fe20833d7a1f8a1eb11f69da6522331c0ca8ad/solution/040.%20Combination%20Sum%20II.md)  
[131. Palindrome Partitioning](https://github.com/stevennn30/MyLeetcode/blob/84accfedf9077540e8c212a821e02ff64942ff71/solution/131.%20Palindrome%20Partitioning.md)  
[93. Restore IP Addresses]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  


# GREEDY
[134. Gas Station]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
[]()  
