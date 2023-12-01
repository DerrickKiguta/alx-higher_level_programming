#!/bin/bash
# takes url sends POST request to passed url & display body of the response
curl -sX POST -d email=test@gmail.com -d subject="I will always be here for PLD" "$1"
