def min_operations(shuffled, original):
    n = len(shuffled)
    
    # Try all possible configurations with 0, 1, or 2 operations
    # Check if already sorted (0 operations)
    if shuffled == original:
        return 0
    
    # Try 1 operation - cut a segment and insert elsewhere
    for cut_start in range(n):
        for cut_end in range(cut_start, n):
            # Extract the segment
            segment = shuffled[cut_start:cut_end + 1]
            remaining = shuffled[:cut_start] + shuffled[cut_end + 1:]
            
            # Try inserting at each position
            for insert_pos in range(len(remaining) + 1):
                new_list = remaining[:insert_pos] + segment + remaining[insert_pos:]
                if new_list == original:
                    return 1
    
    # If not possible with 1 operation, return 2
    return 2

n = int(input())
input()  # Read "shuffled"

shuffled = []
for i in range(n):
    shuffled.append(input())

input()  # Read "original"

original = []
for i in range(n):
    original.append(input())

result = min_operations(shuffled, original)
print(result)