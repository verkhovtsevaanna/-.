import pandas as pd
from matplotlib import pyplot as plt
from scipy import stats

data = pd.read_excel("transistors_stats\data.xlsx")
#print(data.describe())
result = stats.kstest(data, 'norm', (data.mean(), data.std()), N=146)
print(result)
print('Так как К-С статистика велика, а p-значение мало, можно заключить, что данные не нормально распределены')
plt.hist(data, bins = 30)
plt.ylabel('Количество транзисторов')
plt.xlabel('Сопротивление, Ом')
plt.title(result)
plt.show()




