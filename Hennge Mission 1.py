def calculateSumOfSquaresRecursive(num_test_cases):
    if num_test_cases > 0:
        # takes input number of integers

       
        
        x = int(input())

        # takes space sapareted integers
        y_values = map(int, input().split())

        # function excludes negative and sums up square
        result = sumRecursive(y_values, x, 0)

        

        # recurrsive function call for the next test case
        calculateSumOfSquaresRecursive(num_test_cases - 1)
        
        # Print the result for the current test case
        print(result)
        
        


def sumRecursive(y_values, remainingValues, partialSum):
    # Base case: no more values to process
    if remainingValues == 0:
        return partialSum

    # Get the next value
    currentValue = int(next(y_values))

    # Calculate sum of squares excluding negatives
    if currentValue > 0:
        return sumRecursive(y_values, remainingValues - 1, partialSum + currentValue ** 2)
    else:
        return sumRecursive(y_values, remainingValues - 1, partialSum) 


def main():
    # Input number of test cases
    numTestCases = int(input())

    # Start the recursive calculation
    calculateSumOfSquaresRecursive(numTestCases)


if __name__ == "__main__":
    main()
