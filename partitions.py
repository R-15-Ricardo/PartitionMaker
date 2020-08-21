#No recuerdo de donde saqué esta madre

def partition(collection):
    if len(collection) == 1:
        yield [ collection ]
        return

    first = collection[0]
    for smaller in partition(collection[1:]):
        for n, subset in enumerate(smaller):
            yield smaller[:n] + [[ first ] + subset]  + smaller[n+1:]
        yield [ [ first ] ] + smaller

var = int(input())+1
something = list(range(1,var))

for n, p in enumerate(partition(something), 1):
    print (n, sorted(p))
