import yfinance as yf
import pandas as pd
import numpy as np
import seaborn as sns
import plotly.graph_objects as go
import matplotlib.pyplot as plt
import mplfinance as mpf
from pptx import Presentation
from pptx.util import Inches, Pt

#Reading tickers from text file, scraping data for each ticker in list
filename = "tickerTest.txt"
with open("{}".format(filename)) as file:
    for item in file:
        print(item)
        currentTicker = yf.Ticker("{}".format(item))
        ctInfo = currentTicker.info
        print(ctInfo)
        
