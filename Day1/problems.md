
# 1. Two Sum — LeetCode #1

## 1. Problem Name & Number
- **Problem:** Two Sum
- **LeetCode Number:** #1
- **Difficulty:** Easy

## 2. Problem Statement
Given an integer array `nums` and an integer `target`, return the indices of two different elements whose sum equals the target.

- Exactly one valid solution is guaranteed.
- The same element cannot be used twice.
- The answer can be returned in any order.

## 3. Approach

### Approach 1: Brute Force
- Used two nested loops to check every possible pair.
- Inner loop starts from `j = i + 1` to avoid using the same element twice.
- If `nums[i] + nums[j] == target`, return `{i, j}`.

### Approach 2: Optimal (Hash Map)
- Traverse the array using a single loop.
- Calculate `required = target - current`.
- Search for the required number in the Hash Map.
- If found, return its stored index and the current index.
- Otherwise, store the current number and its index.

## 4. Data Structures Used
- **Array (`vector<int>`):** Stores input elements.
- **Hash Map (`unordered_map<int, int>`):** Stores numbers as keys and their indices as values.

## 5. Algorithm Used
- Brute Force: Nested Loop.
- Optimal: Hashing using `unordered_map`.
- Search before insertion to avoid using the same element twice.

## 6. Time Complexity
- Brute Force: `O(n²)`
- Optimal: `O(n)` average case.

## 7. Space Complexity
- Brute Force: `O(1)` auxiliary space.
- Optimal: `O(n)` auxiliary space.

## 8. What I Learned
- How to solve Two Sum using nested loops.
- How to use `unordered_map` in C++.
- How to store key-value pairs.
- How to search using `.find()`.
- How to calculate the required number using `target - current`.
- Why searching before insertion is important.
- How Hash Map improves average time complexity from `O(n²)` to `O(n)`.
- How to handle duplicate numbers such as `{5, 5}`.


---------------------------------------------------------------------------------------------------------------------------------------


# 2. Contains Duplicate — LeetCode #217

## 1. Problem Name & Number
- **Problem:** Contains Duplicate
- **LeetCode Number:** #217
- **Difficulty:** Easy

## 2. Problem Statement
Given an integer array `nums`, return `true` if any value appears at least twice. Return `false` if every element is distinct.

Example:
- Input: `nums = [1, 2, 3, 1]`
- Output: `true`
- Explanation: Element `1` appears twice.

## 3. Approach

### Approach 1: Brute Force (Concept)
- Use two nested loops.
- Compare every pair of different elements.
- If `nums[i] == nums[j]`, return `true`.
- If no duplicate is found, return `false`.

### Approach 2: Optimal (Hash Map)
- Traverse the array using a single loop.
- Check whether the current number already exists in the Hash Map.
- If found, return `true`.
- Otherwise, store the current number and its index.
- If traversal finishes without finding a duplicate, return `false`.

## 4. Data Structures Used
- **Array (`vector<int>`):** Stores input elements.
- **Hash Map (`unordered_map<int, int>`):** Stores numbers as keys and their indices as values.
- **Hash Set (`unordered_set<int>`):** A more suitable alternative because only duplicate existence needs to be checked. Implementation pending.

## 5. Algorithm Used
- Brute Force: Nested Loop (concept).
- Optimal: Hashing using `unordered_map`.
- Check before insertion to detect previously encountered elements.

## 6. Time Complexity
- Brute Force: `O(n²)`
- Optimal: `O(n)` average case.

## 7. Space Complexity
- Brute Force: `O(1)` auxiliary space.
- Optimal: `O(n)` auxiliary space.

## 8. What I Learned
- How to identify duplicate elements in an array.
- How to use `unordered_map` in C++.
- How to search using `.find()`.
- How to check whether a key exists before inserting it.
- How to return `true` immediately when a duplicate is found.
- How to return `false` when no duplicate exists.
- Why `unordered_set` is more suitable when only checking existence.
- How Hash Map improves average time complexity from `O(n²)` to `O(n)`.
