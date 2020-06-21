#!/usr/bin/env python
# coding: utf-8

# In[72]:


#actualInput = "8 4 7 7 8 1 -7 3 2 0 2 1 0 -2 2 -3 -3 1 0 6 2 5 3 1"
actualInput = "10 8 4 0 0 9 0 0 10 1 0 1 1 0 2" # input from user as a string

temporaryList = list(actualInput.split(" "))
inputString = []

for num in temporaryList:
    inputString.append(int(num))    # convert string into a list of integer numbers
    
count = 0
R = inputString[0]
D =  inputString[1]

for i in range(3,len(inputString)-2,3):  # cycles through the coordinates and radii of each sausage
    x = inputString[i]        # local variables for each sausage coordinate
    y = inputString[i+1]
    r = inputString[i+2]
    
    dist = distance(x,y)      # calculate distance between each sausage and center of pizza
    
    if ( ((dist-r) > (R-D) ) and ((dist-r) < R) ): # check if sausage is COMPLETELY on crust AND still on the pizza
        count += 1  # counter increments 
print(count)  # prints/returns the number of sausages on the crust


# In[60]:


from math import sqrt

def distance (x,y):
    return sqrt((x*x)+(y*y))   # calculates distance between a point and origin (0,0)


# In[ ]:




