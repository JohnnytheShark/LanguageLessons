# Comments either start with a hashtag or multiline: 
<# Everything in powershell is considered an object 
Keep this in mind
 #>

 #Variable Example: 
 $MaximumHistoryCount = 200
 #This is a special variable that counts the number of commands that powershell records. The default is 4096 commands
 #Calling the function all you have to do is: 
 $MaximumHistoryCount
 #Variables come in two different formats user-defined variables or automatic variables like the one above 

 #If your console does not have an output you can switch to strict mode using: 
 Set-StrictMode -Version Latest
 #This will enforce good coding practices 

 #To look at all variables in memory currenty use: 
 Get-Variable
 
#Null values: 
$null

#The last exit code is always the exit code of the last application that was executed
$LASTEXITCODE

#Booleans: 
$true
$false


#To get a variable type you can use: 
#Variable Name here.GetType().name 
#You can cast variables by using the following syntax
#[type]variablename

#Variable Interpolation: Ensure to use double quotation marks 
#Powershell interprets single quotes as exactly what you are typing
$Name = "Jonathan"
$Sentence = "Hello World, My name is $Name."
$Sentence 


#To look at an object's properties you can use the following command 
$Color = "Blue"
Select-Object -InputObject $Color -Property * 
#You can then select properties using: 
$Color.Length

#To look at all the different methods (functions available on an object):
Get-Member -InputObject $Color 
# 0 Based Index like other programming lanaguages 

#Declaring an array: 
$Colors = @('Blue','Red','Green','Orange')
$Colors[0]

#To Access Between characters: 
$Colors[0..3]
#It will select everything between 0 and 3 

