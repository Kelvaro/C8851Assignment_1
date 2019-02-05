Question1) Done in Fig01_25.cpp

Question 3: A, C, and D

Question 4a) in IMAGEq4
b)
c)

Question 5a)
b) 5

6) push_back, pop_back, insert, or erase invalidates all iterators because when we use those functions, the vector grows and allocates to a new bigger
array if the current vector runs out of space, and deletes the old vector.

7) Pros: No shifting in data, able to insert on top of the "deleted" item (cause lazy deletion is not actually deleting, just marking it as one), much faster.
Cons: Waste of space as the "deleted" item is just sitting there, data searches take longer since the "deleted" items are searched as well, accumulated
lazy deleted items will cramp up the data structure.

Question 8 & 9) Done in Fig01_25.cpp


