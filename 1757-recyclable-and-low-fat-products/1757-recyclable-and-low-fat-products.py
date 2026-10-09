import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    prod=(products["low_fats"]=='Y') & (products["recyclable"]=='Y')

    return products.loc[prod,["product_id"]]