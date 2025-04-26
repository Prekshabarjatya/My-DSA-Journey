📄 Case Study: Personal Budget Tracker using Subarray Sum Equals K

---------------------------------------------------
🎯 Problem Statement:
Given a list of daily expenses, find the number of continuous periods (subarrays) where the total expenses match exactly the user's target budget.

---------------------------------------------------
🛠 Real-World Context:
- Users log their daily spending into an app.
- The system needs to identify periods where the total spending equals the set budget goal.
- Important for generating financial insights and alerts.

---------------------------------------------------
🔍 DSA Mapping:
| Real-World            | DSA Concept            |
|------------------------|-------------------------|
| Daily expenses         | Input array             |
| Target budget          | Key to match            |
| Total spending so far  | Prefix sum              |
| Past spending memory   | Hashmap (prefix sums)   |

---------------------------------------------------
🧠 Approach:
- Maintain a running prefix sum of expenses.
- For each day's prefix sum:
    - Check if (prefix_sum - budget) exists in the map.
    - If yes, it means a valid subarray exists ending at current day.
    - Update hashmap with current prefix sum frequency.

- Always initialize the hashmap with (0, 1) to handle the full subarray from day 0.

---------------------------------------------------
💻 Code Overview:
- Build a simple hashmap structure in C (with chaining to handle collisions).
- Simulate daily expenses input.
- Calculate prefix sums in O(N) time.
- Count how many times total spending matches the target budget.

---------------------------------------------------
🧪 Example:
Expenses = [10, 2, 8, 5, 5]
Target Budget = 10

Valid periods:
- [10] → sum = 10
- [2, 8] → sum = 10
- [5, 5] → sum = 10

✅ Output: 3 periods

---------------------------------------------------
🚀 Final Insights:
- Subarray Sum Equals K is not just a coding exercise — it models real financial tracking systems.
- Optimized prefix sum + hashmap allows real-time analysis of expenses even on large datasets.

---------------------------------------------------
🏆 Mastery Level Achieved:
- Brute force understanding ✅
- Optimized O(N) solution ✅
- Real-world mapping ✅
- Efficient C language implementation ✅

