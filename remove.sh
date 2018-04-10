#!/bin/bash

cd $1
git rm *~
git rm *main*
git commit -m "remove ~ files"
git push
