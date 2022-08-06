def Main():
	Find_And_New = input("Enter [Find - New]: ")
	if Find_And_New == "New":
		def Write():	
			Name = input("Enter name: ")
			Principal = int(input("Enter prncipal: "))
			Time = int(input("Enter time: "))
			Rate = int(input("Enter rate: ")) # needs float
			Interest = int((Principal * Time * Rate)/100)
			with open("File.txt", "a") as f:
				f.write(Name  + '\t' + str(Principal)  + '\t' + str(Time)  + '\t' + str(Rate) + '\t' + str(Interest) +'\n')
			Find_And_Exit = input("Enter [Find - Exit]: ")
			if Find_And_Exit == "Find":
				f = open("File.txt", "r")
				print(f.read())
			elif Find_And_Exit == "Exit":
				f.close()
		Write()
	elif Find_And_New == "Find":
		def Read():
			f = open("File.txt", "r")
			return f.read()
		print(Read())
print(Main())
