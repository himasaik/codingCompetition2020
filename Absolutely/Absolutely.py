#!/usr/bin/env python
# coding: utf-8

# In[6]:


array = [-9,-2,-3,-4,0] # take an array as an input
sum = 0                # declare sum to be added onto in the loop

for num in array:      # loop through the array (of any size the user puts in line 1) 
    if (num < 0):      
        num = num*(-1) # convert any negative integer to positive
    sum += num         # sum the positive numbers 

print(sum)             # print/return the sum of the array


# In[ ]:




