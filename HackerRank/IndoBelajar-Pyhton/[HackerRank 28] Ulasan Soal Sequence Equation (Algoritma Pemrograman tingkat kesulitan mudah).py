#!/usr/bin/env python
# coding: utf-8

# In[5]:


map =  [v: i+1 for i, v in enumerate(p)]
return [map[map[i+1]] for i in range(1, len(p)+1)]


# In[ ]:




