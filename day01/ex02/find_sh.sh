#!/bin/sh
find .  -name "*.sh" -exec basename {} \; | sed -E 's/.{3}$//'
