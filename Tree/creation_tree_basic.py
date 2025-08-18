class Tree:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    
    
def create_tree():
        data = int(input("Enter the input:"))
        if data == -1:
            return None
        root = Tree(data)
        print("Enter the left child")
        root.left = create_tree()
        print("enter the right child ")
        root.right = create_tree()
        
        return root
        
print("create tree: ")    
firstNode = create_tree()

# secondNode = Tree(3)
# thirdNode = Tree(4)
# forthNode = Tree(5)
# fifthNode = Tree(6)

# firstNode.left = secondNode
# firstNode.right = thirdNode
# # secondNode.left = forthNode
# # secondNode.right = fifthNode

# print(firstNode.data)
# print(firstNode.left.left)
# print(firstNode.right.data)
# print(firstNode.left.left.data)
        