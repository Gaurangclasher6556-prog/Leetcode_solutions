class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        for op in operations:
            if op == "+":
                element = int(stack[-1]) + int(stack[-2])
                stack.append(element)
            elif op == "C":
                stack.pop()
            elif op == "D":
                element = int(stack[-1])*2
                stack.append(element)
            else:
                stack.append(int(op))

        res = 0 
        for num in stack:
            res += num 

        return res                
