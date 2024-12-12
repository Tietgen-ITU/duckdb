#!/bin/bash

output=$(cat ssb-benchmark.log | sed -z 's/}\s*{/},\n{/g')

output="[\n${output}\n]"

echo $output > clean-ssb-benchmark-log.json
