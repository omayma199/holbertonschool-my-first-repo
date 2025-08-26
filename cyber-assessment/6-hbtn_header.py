#!/usr/bin/python3
import sys
import urllib.request

url = sys.argv[1]

with urllib.request.urlopen(url) as response:
    x_request_id = response.getheader('X-Request-Id')
    if x_request_id:
        print(x_request_id)
