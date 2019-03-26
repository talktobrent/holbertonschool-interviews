#!/usr/bin/python3
""" dumps list of dicts """

import json
import requests

if __name__ == "__main__":

    allTasks = {}

    for x in requests.get('https://jsonplaceholder.typicode.com/users').json():
        allTasks[str(x.get("id"))] = [{"username": x.get("username"),
                                       "task": y.get("title"),
                                       "completed": y.get("completed")}
                                      for y in requests.get(
                                       'https://jsonplaceholder.typicode.com/'
                                       'todos?userId=' + str(x.get("id"))
                                       ).json()]

    with open('todo_all_employees.json', 'w') as outfile:
        json.dump(allTasks, outfile)
