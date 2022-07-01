print("щас я буду делать пакеты")
beg,end,div = 0,40,50000
import time

t1 = time.time()
from packet.darbu import sum as z
z(beg,end,div)
print(time.time()-t1)

t1 = time.time()
from packet.darbu_compiled import sum as s
s(beg,end,div)
print(time.time()-t1)


