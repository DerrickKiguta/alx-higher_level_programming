#!/bin/bash
#takes in URL, sends a request to url and display size of response
curl -sI "$1" | grep Content-Length | cut -d " " -f 2
