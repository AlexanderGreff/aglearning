#Implementation of Selenium WebDriver with Python using PyTest
 
import pytest
from selenium import webdriver
import sys
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.keys import Keys
from time import sleep
from selenium.webdriver.common.by import By
from selenium.webdriver.support import expected_conditions as EC
 

# create webdriver object
# driver = webdriver.Firefox()
driver = webdriver.Chrome()

# enter keyword to search
keyword = "geeksforgeeks"

# get geeksforgeeks.org
driver.get('https://advisor.williamblair.com/Membership/Apps/BB9cLogin_WF_App.aspx')

# get element
sleep(5)
s = input("type enter")
element = driver.find_element(By.XPATH, "//span[normalize-space()='Azure AD Sign In']")
# print complete element
print(element)
element.click()


s = input("sign in")
element = driver.find_element(By.XPATH, "//input[@id='idSIButton9']")
print(element)
element.click()

s = input("2FA")
#next button after 2FA
sleep(1)
element = driver.find_element(By.XPATH, "//input[@id='idSIButton9']")
print(element)
element.click()
s = input("portal")

print("Blair Portal, finding advisor")
element = driver.find_element(By.XPATH, "//div[@id='CLWBSubAppCenterListApp_WBAppCenterTemplateApp_1']//img")
print(element)
element.click()
s = input("advisorview")

# print("advisor, finding client")
# element = driver.find_element(By.XPATH, "//div[@class='fdf-display-text'][normalize-space()='KRISTIN LYNN JABUREK ALL ACCOUNTS COMBINED']")
# print(element)
# element.click()
# s = input("client found")


print("Tamarac, finding report button")
wait = WebDriverWait(driver,30)
element = wait.until(EC.element_to_be_clickable((By.XPATH, "//li[@id='content844336']//button[@title='Go to detailed report']")))
element = driver.find_element(By.XPATH, "//li[@id='content844336']//button[@title='Go to detailed report']")
print(element)
element.click()
s = input("Tam1")
 
print("Tamarac, finding export data button")
element = driver.find_element(By.XPATH, "//button[@id='lnkExportData']//i[@class='far fa-file-export']")
print(element)
element.click()
s = input("Tam2")



sleep(5000)
driver.close()

