NOTE: Since the cpp files each have their own main function.

Question1) Done in Fig01_25.cpp

Question 3: A, C, and D

Question 4a) Inside the comments in Fig01_25.cpp file
b)
c) N

Question 5a)
b) 5 or N
c) I used recursive so the runtime will be invalid.

6) push_back, pop_back, insert, or erase invalidates all iterators because when we use those functions, the vector grows and allocates to a new bigger
array if the current vector runs out of space, and deletes the old vector.

7) Pros: No shifting in data, able to insert on top of the "deleted" item (cause lazy deletion is not actually deleting, just marking it as one), much faster.
Cons: Waste of space as the "deleted" item is just sitting there, data searches take longer since the "deleted" items are searched as well, accumulated
lazy deleted items will cramp up the data structure.



Question 8) Done in PostFixEvaluation.cpp

Question 9) Not completed. Redoing question 1 and 8 took too long :(.


