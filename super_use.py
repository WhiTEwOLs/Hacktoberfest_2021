class MyClass:
    p = 1
    def __init__(self, f, l):
        self.u = l
        self.f = f
    def print1(self):
        print(self.f, self.u)
        
class MyClass1(MyClass):
    def __init__(self, f, l):
        MyClass.__init__(self, f, l)
        
p1 = MyClass1("a", "d")
p1.print1()
print(p1.f, p1.u, p1.p)

#%%
class MyClass:
    def __init__(self, f, l):
        self.l = l
        self.f = f
    def print1(self):
        print(self.f, self.l)
        
class MyClass1(MyClass):
    def __init__(self, f, l):
        super().__init__(f, l)  
        """no need to pass self as a argument as super returns
        a object that represent aparent class""" 
        
p1 = MyClass1("a", "d")
p1.print1()
print(p1.f)


#%%
import numpy as np
a = np.array([[1,2,3], [4,5,6]])
t = a[[0,1], [1,2]]
print(t)

c = a>=3
p = a[c]
print(p)

#%%
import pandas as pd
# Program to Create Dictionary series 
dictionary ={'a':1, 'b':2, 'c':3, 'd':4, 'e':5} 

# Creating series of Dictionary type 
sd = pd.Series(dictionary) 
print(sd)
#%%
import math
a = int(input())
if math.sqrt(a) == int(math.sqrt(a)):
    print("Perfect")
else:
    print("Not Prefect")
    
#%%
def fun(**kwargs):
    for key,value in kwargs.items():
        print(key, value)
fun(a = 1, b = 2)

#%%
import pandas as pd
# Program to Create Data Frame with two dictionaries 
dict1 ={'a':1, 'b':2, 'c':3, 'd':4}	 # Define Dictionary 1 
dict2 ={'a':5, 'b':6, 'c':7, 'd':8, 'e':9} # Define Dictionary 2 
Data = (dict1, dict2) # Define Data with dict1 and dict2 
df = pd.DataFrame(Data) # Create DataFrame 

#%%
import pandas as pd
# Program to Create Data Frame with two dictionaries 
dict1 ={'a':1, 'b':2, 'c':3, 'd':4}	 # Define Dictionary 1 
dict2 ={'a':5, 'b':6, 'c':7, 'd':8, 'e':9} # Define Dictionary 2 
Data = {'first':dict1, 'second':dict2} # Define Data with dict1 and dict2 
df = pd.DataFrame(Data) # Create DataFrame 
#%%
# Python program to handle simple runtime error 

a = [1, 2, 3] 
try: 
	print("Second element = ", a[1]) 

	# Throws error since there are only 3 elements in array 
	print("Fourth element = ", a[3]) 

except: 
	print("An error occurred")

