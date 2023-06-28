from selenium import webdriver
from selenium.webdriver.common.keys import Keys

class UsernameLogin():
    def locateUsername(self):
        driver = webdriver.Chrome("C:\\browserdrivers\\chromedriver.exe")
        driver.get("https://www.google.com/")
       # driver.find_element_by_xpath("//input[@role='textbox']").send_keys('agreff23@williamblair.com')
      #  time.sleep(4)
      
      
      
def main1():
    test1 = UsernameLogin()
    test1.locateUsername()

def main():
    driver = webdriver.Chrome(".\\chromedriver.exe")

if __name__ == "__main__":
    main()

