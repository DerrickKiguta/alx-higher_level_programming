#!/bin/bash
# sends a request to url passed as an argument & displays only status code of  response
curl -so /dev/null --write-out "%{http_code}" "$1"
