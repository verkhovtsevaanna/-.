import pandas as pd
from matplotlib import pyplot as plt
from scipy import stats
from os import path

data = pd.read_excel(path.join("data.xlsx"),header=None, usecols=[0])  #меняем путь к файлу, отказываемся от использования заголовка, вместо этого вводим индекс для обращения к столбцу
result = stats.kstest(data[0], 'norm', (data[0].mean(), data[0].std()), N=146)
print(result)
print('Так как К-С статистика велика, а p-значение мало, можно заключить, что данные не нормально распределены')
plt.hist(data, bins = 30)
plt.ylabel('Количество транзисторов')
plt.xlabel('Сопротивление, Ом')
plt.title(result)
plt.show()




