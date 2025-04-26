📓 Day-1 Recall & Rebuild Notes — My Own Understanding

---------------------------------------------------
🧠 What I Learned:
- Prefix Sum = Running total of the array as I move forward.
- HashMap = Memory tool to remember all prefix sums I’ve seen so far.
- Key trick: 
    - If (current prefix sum - target key) already appeared before, 
    - it means there’s a subarray that sums to exactly the key.

- I **must** insert (0,1) into hashmap at the start. 
  - Reason: To handle subarrays that begin right from index 0.

- The Budget Tracker case study made it super real for me:
    - Each expense = an element in array.
    - Finding periods where total expenses exactly match a budget.

---------------------------------------------------
✍️ How I Will Rebuild It:
- I will first set up a simple hashmap with chaining (linked lists).
- Initialize it with (0,1).
- For each day's expense:
    - Add it to prefix sum.
    - Check if (prefix_sum - budget) exists → if yes, add to count.
    - Then insert/update the current prefix_sum into the hashmap.
- Return the final count.

**Golden Rule:**  
👉 I cannot look at my old code — only rebuild from memory and understanding.

---------------------------------------------------
🎯 What Success Looks Like:
- I can rebuild the full working C code in 20-30 minutes.
- I can explain the entire idea in plain English without confusion.
- I can map it easily to any real-world financial tracking app.

---------------------------------------------------
💬 My Inner Reminder:
"I don't memorize code.  
I understand flows.  
I can rebuild anything from scratch because I see the system, not just the syntax."

---------------------------------------------------
🏆 Day-1 Mission Complete:
- Full code rebuilt ✅
- Real-world mapping clear ✅
- Feeling of control over problem ✅
