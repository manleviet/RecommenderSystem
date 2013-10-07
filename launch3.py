#!/usr/bin/python
import clusters

blognames, words,data=clusters.readfile('blogdata.txt')
kclust=clusters.kcluster(data,k=xxx)

for r in kclust[xxx]:
    print blognames[r]

