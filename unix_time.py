#!/usr/bin/python3
from time import time
from resource import getrusage as resource_usage, RUSAGE_SELF

def unix_time(function):
    start_time = time()
    start_resources = resource_usage(RUSAGE_SELF)
    function()
    end_time = time()
    end_resources = resource_usage(RUSAGE_SELF)

    print("\nreal: {}\nuser: {}\nsys: {}".format(
            end_time - start_time,
            end_resources.ru_utime - start_resources.ru_utime,
            end_resources.ru_stime - start_resources.ru_stime))
