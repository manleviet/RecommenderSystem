#!/usr/bin/python
import recommendations
list=[]
prefs=recommendations.loadMovieLens()
itemsim=recommendations.calculateSimilarItems(prefs,n=xxx)
list=recommendations.getRecommendedItems(prefs,itemsim,"1xxx")

for i in range(xxx):
	print list[i]

