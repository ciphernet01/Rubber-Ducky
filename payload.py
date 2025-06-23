import os
import time
import subprocess

# Payload example: open Notepad and write something
def execute_payload():
    try:
        # Open Notepad (Windows only)
        subprocess.Popen(['notepad.exe'])
        time.sleep(2)

        # Simulate typing using pyautogui
        import pyautogui
        pyautogui.write('This is a simulated Rubber Ducky payload!', interval=0.1)
        pyautogui.press('enter')
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    execute_payload()
