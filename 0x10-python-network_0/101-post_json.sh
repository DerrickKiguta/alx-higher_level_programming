#!/bin/bash
#sends json req to a url & displays body of response
curl -sX POST -H "Content-Type: application/json" -d @"$2" "$1"
