class Tests:
    """
    A class/file wich is used to check some of the concepts and see what output should occour if
    this is runned in JFFL.
    """
    def value_stack(self):
        """
        a test which is used to check that the value stack manipulator works correctly
        """
        def echo(n):
            print(n)
            return n

        print(echo(echo(1) + echo(2)) + echo(echo(4) + echo(5)))

if __name__ == "__main__":
    tests = Tests()
    tests.value_stack()