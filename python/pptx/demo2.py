#Implementation of Selenium WebDriver with Python using PyTest
 
import pytest
from selenium import webdriver
import sys
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.keys import Keys
from time import sleep
from selenium.webdriver.common.by import By
 

# create webdriver object
# driver = webdriver.Firefox()
driver = webdriver.Chrome()

# enter keyword to search
keyword = "geeksforgeeks"

# get geeksforgeeks.org
driver.get('https://lambdatest.github.io/sample-todo-app/')

# get element
element = driver.find_element(By.NAME, "li1")

# print complete element
print(element)

driver.close()

    
    
    