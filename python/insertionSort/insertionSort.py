def swap(swapList, a, b):
    tmp = swapList[a]
    swapList[a] = swapList[b]
    swapList[b] = tmp
    return swapList

def insertionSort(listToSort):
    i = 1
    while i < len(listToSort):
        j = i 
        while j > 0 and listToSort[j-1] > listToSort[j]:
            swap(listToSort, j, j-1)
            j = j - 1
        i = i + 1
    return listToSort

