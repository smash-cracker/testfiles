from pymongo import MongoClient
client = MongoClient('localhost', 27017)
mydatabase = client.exam
collection = mydatabase.student

# collection.insert_one({"_id":1,"name":"Anjali","place":"kollam","phone":8582639562,"vaccination_status":"both vaccinated","RTPCR":"negative","Lab_mark":{"internal":30,"external":45},"Department":"MCA"})


data =[
    {"_id":2,"name":"Anuradha","place":"varkala","phone":9992639562,"vaccination_status":"both vaccinated","RTPCR":"negative","Lab_mark":{"internal":40,"external":48},"Department":"civil"},
    {"_id":3,"name":"Bismaya","place":"kollam","phone":9446639562,"vaccination_status":"not vaccinated","RTPCR":"positive","Lab_mark":{"internal":50,"external":39},"Department":"MCA"},
    {"_id":4,"name":"Vimal","place":"ernakulam","phone":8582639568,"vaccination_status":"first dose only","RTPCR":"positive","Lab_mark":{"internal":40,"external":42},"Department":"civil"},
    {"_id":5,"name":"Vivek","place":"kollam","phone":8582639777,"vaccination_status":"both vaccinated","RTPCR":"negative","Lab_mark":{"internal":50,"external":50},"Department":"MCA"}
]
collection.insert_many(data)
