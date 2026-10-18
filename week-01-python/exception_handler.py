
# SENTINEL SECURITY MONITOR
# Learning exception handling with Python

try:
    attempts = int(input("Enter failed login attempts: "))

    if attempts < 0:
        print("ERROR: Attempts cannot be negative.")
    elif attempts >= 5:
        print("ALERT: Multiple failed login attempts detected.")
    elif attempts > 0:
        print("NOTICE: Failed login recorded.")
    else:
        print("STATUS: No failed login attempts recorded.")

    print("Security check completed.")

except ValueError:
    print("ERROR: Enter a valid whole number.")
