#!/usr/bin/python
import recommendations
list=[]
prefs=recommendations.loadMovieLens()

list=recommendations.getRecommendations(prefs,"xxx")

for i in range(xxx):
	print list[i]
