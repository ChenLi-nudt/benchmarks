import os

kernel = {}
layer = {}
files = os.listdir('src')
for f in files:
    with open('src/'+f,'r') as fn:
        for line in fn:
            xx = line.strip().split()
            for x in xx:
                if x.startswith("__glob"):
                    kernel[xx[2]] = 1
                if x.startswith("make_"):
                    layer[x.split('_')[1].split('(')[0]] = 1

    print f, len(kernel), len(layer)

print ','.join(kernel)
a = [' %s'%i for i in sorted(layer)]
print ','.join(a)
print "kernels %d layers %d"%(len(kernel), len(layer))

