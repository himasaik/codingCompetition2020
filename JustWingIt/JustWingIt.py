#!/usr/bin/env python
# coding: utf-8

# In[ ]:


print ("Please enter number of orders:") # takes order input

orders = int(input())

# tests base cases 
if (orders == 7 or orders == 11):        # base case 1: if order is 7 or 11
    print ("Yes")

elif (orders < 7):                       # base case 2: if order is less than minimum value, i.e., 7
    print ("No")

elif (orders%7 == 0 or orders%11 == 0):  # base case 3: orders are directly delivered in 7s or 11s
    print ("Yes")
    
else:    
    while (orders%7 != 0):               # loops into finding combinations of boxes of 7s and 11s
        orders = orders - 11
        if (orders < 7):
            print ("No")                 
            break
    if (orders%7 == 0):                  # final check so "Yes" doesn't print for the "No" cases
        print("Yes")


# In[ ]:




