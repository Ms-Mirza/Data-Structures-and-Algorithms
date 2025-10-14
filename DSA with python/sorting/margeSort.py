def marge(li, first, mid, last):
    i = first
    j = mid + 1
    temp = first
    aux = [0] * len(li)  # auxiliary array of same size

    while(i<=mid and j<=last):
        if(li[i]<li[j]):
            aux[temp] = li[i]
            i+=1
        else:
            aux[temp] = li[j]
            j+=1
        temp += 1

    # Copy remaining from right half
    while i <= mid:
        aux[temp] = li[i]
        i += 1
        temp += 1

    # Copy remaining from right half
    while j <= last:
        aux[temp] = li[j]
        j += 1
        temp += 1

    li[first : last +1] = aux[first : last +1]  # Copy merged subarray back into li


def margesort(li, first, last):
    mid = first + (last-first)//2
    if(first<last):
        margesort(li, first, mid)
        margesort(li, mid+1, last)
        marge(li, first, mid, last)

li = [1, 5, 6, 10, 11, 4, 3, 2, 8, 7]
li_length = len(li)
 
first = 0
last = li_length - 1

margesort(li, first, last)

print(li)
