# Case Study: Social Media Engagement Analyzer

## Problem Statement:
You're tasked with calculating the **average engagement** (likes, comments, shares) for social media posts over **7-day periods**. Given an array of daily engagement values, your goal is to compute the average engagement for every sliding window of 7 days.

**Input**:  
An array of daily engagement values:  
`engagement = {10, 12, 8, 15, 20, 18, 25, 22, 27, 30, 32, 28, 29, 30, 35, 40, 45, 50, 38, 36, 42, 47, 52, 53, 55, 60, 58, 61, 62, 64}`

**Window Size (k)**: 7

**Output**:  
The average engagement for each sliding window of size 7.

---

## My Journey:

Today, I focused on calculating the **average engagement** over **7-day periods** using the **sliding window technique**. The challenge was to avoid recalculating the sum of engagement values from scratch for each window. Instead, I reused the sum from the previous window by adjusting it as the window slides.

**What I Did**:
- Applied the **sliding window** technique to maintain an efficient calculation of weekly averages.
- Reduced the time complexity to **O(n)** by avoiding redundant calculations.
- Stored and printed the average engagement for each sliding window.

**Key Takeaways**:
- **Sliding Window** helps optimize problems with overlapping subproblems.
- This approach is applicable in **real-time data processing** for platforms needing efficient trend analysis (e.g., social media engagement tracking).

---
