#!/usr/bin/python3
# This script takes a URL, sends a request and prints the X-Request-Id header
import sys
from urllib import request

if __name__ == "__main__":
    url = sys.argv[1]
    with request.urlopen(url) as response:
        print(response.headers.get('X-Request-Id'))
