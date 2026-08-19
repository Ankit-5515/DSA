import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:

    unique_sal = employee['salary'].drop_duplicates().sort_values(ascending=False)

    if len(unique_sal) < 2:
        return pd.DataFrame({'SecondHighestSalary':[None]})

    else:
        second_salary = unique_sal.iloc[1]
        return pd.DataFrame({'SecondHighestSalary':[second_salary]})  



    