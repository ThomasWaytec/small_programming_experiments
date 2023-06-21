"""
Check if the input function deletes the content's of the input buffer before reading.
"""



from time import sleep
SECONDS_TO_SLEEP = 10


input("Press Enter when you're ready to start.")
print(f"Type something now, make sure to end it with an enter. You have {SECONDS_TO_SLEEP} seconds from now on.")
sleep(SECONDS_TO_SLEEP)


user_input = input()
print(f"Is this what you typed: \"{user_input}\"?")


"""
It turns out the input function does not delete the input buffer before reading.
Which means you could answer the questions of a program even before it asks them.
"""