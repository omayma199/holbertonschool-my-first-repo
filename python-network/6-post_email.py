#!/usr/bin/python3
"""Sends a POST request to the given URL with an email parameter and displays the response body"""

import sys
import requests

url = sys.argv[1]
email = sys.argv[2]
payload = {'email': email}

response = requests.post(url, data=payload)
print(response.text)
