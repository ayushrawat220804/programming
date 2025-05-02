from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import random
import string
import names
import time
from faker import Faker

class AutoSignup:
    def __init__(self):
        self.driver = webdriver.Chrome()  # You'll need ChromeDriver installed
        self.fake = Faker()
        self.wait = WebDriverWait(self.driver, 10)

    def generate_random_email(self):
        """Generate a random email address"""
        username = ''.join(random.choices(string.ascii_lowercase + string.digits, k=10))
        domains = ['gmail.com', 'yahoo.com', 'outlook.com']
        return f"{username}@{random.choice(domains)}"

    def generate_random_password(self):
        """Generate a strong random password"""
        chars = string.ascii_letters + string.digits + "!@#$%^&*()"
        return ''.join(random.choices(chars, k=12))

    def generate_random_name(self):
        """Generate random first and last name"""
        return self.fake.name()

    def wait_and_fill(self, selector, value, selector_type=By.CSS_SELECTOR):
        """Wait for element and fill it with value"""
        element = self.wait.until(EC.presence_of_element_located((selector_type, selector)))
        element.clear()
        element.send_keys(value)
        time.sleep(random.uniform(0.5, 1.5))  # Random delay to seem more human-like

    def signup(self, url):
        """Perform the signup process"""
        try:
            # Generate random user data
            email = self.generate_random_email()
            password = self.generate_random_password()
            full_name = self.generate_random_name()

            # Navigate to signup page
            self.driver.get(url)
            
            # Example selectors - modify these according to the target website
            selectors = {
                'name': '#name-input',
                'email': '#email-input',
                'password': '#password-input',
                'submit': '#signup-button'
            }

            # Fill in the form
            self.wait_and_fill(selectors['name'], full_name)
            self.wait_and_fill(selectors['email'], email)
            self.wait_and_fill(selectors['password'], password)

            # Click submit button
            submit_button = self.wait.until(
                EC.element_to_be_clickable((By.CSS_SELECTOR, selectors['submit']))
            )
            submit_button.click()

            # Handle OTP verification if needed
            self.handle_otp_verification()

            # Save credentials
            self.save_credentials(email, password, full_name)

            return True

        except Exception as e:
            print(f"Error during signup: {str(e)}")
            return False

        finally:
            time.sleep(2)  # Wait before closing
            self.driver.quit()

    def handle_otp_verification(self):
        """
        Handle OTP verification if required
        You'll need to implement specific logic based on the website
        """
        # This is a placeholder - implement according to the target website's requirements
        pass

    def save_credentials(self, email, password, name):
        """Save the generated credentials"""
        with open('credentials.txt', 'a') as f:
            f.write(f"Name: {name}\nEmail: {email}\nPassword: {password}\n{'='*50}\n")

# Usage example
if __name__ == "__main__":
    signup_bot = AutoSignup()
    signup_bot.signup("https://www.instagram.com/accounts/signup/")  # Replace with target websites