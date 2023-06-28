#Implementation of Selenium WebDriver with Python using PyTest
 
import pytest
from selenium import webdriver
import sys
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.keys import Keys
from time import sleep
from selenium.webdriver.common.by import By
 
def test_lambdatest_todo_app():
    chrome_driver = webdriver.Chrome()
    chrome_driver.get('https://lambdatest.github.io/sample-todo-app/')
    chrome_driver.maximize_window()
 
    chrome_driver.find_element(By.ID)
    # chrome_driver.find_element_by_name("li1").click()
    # chrome_driver.find_element_by_name("li2").click()
 
    # title = "Sample page - lambdatest.com"
    # assert title == chrome_driver.title
 
    # sample_text = "Happy Testing at LambdaTest"
    # email_text_field = chrome_driver.find_element_by_id("sampletodotext")
    # email_text_field.send_keys(sample_text)
    # sleep(5)
 
    # chrome_driver.find_element_by_id("addbutton").click()
    # sleep(5)
 
    # output_str = chrome_driver.find_element_by_name("li6").text
    # sys.stderr.write(output_str)
    
    # sleep(2)
    # chrome_driver.close()
    

def test_lambdatest_todo_app2(): 
    # create webdriver object
    driver = webdriver.Firefox()
    
    # enter keyword to search
    keyword = "geeksforgeeks"
    
    # get geeksforgeeks.org
    driver.get('https://lambdatest.github.io/sample-todo-app/')
    
    # get element
    element = driver.find_element(By.NAME, "li1")
    
    # print complete element
    print(element)
    
    
    
    