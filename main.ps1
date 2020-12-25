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

#Redifining objects in an array all your have to do is the following 
$Colors[0] = 'Green'

#To add an element to the end of an array you can use:
$Colors += 'Tan'
#To add arrays to arrays: 
$Colors += @('Yellow','Aqua')

#If you are working with a large data set you are going to need to use an ArrayList which does not have a set size like normal powershell arrays
#To Do this ensure you cast it: 
$Colors = [System.Collections.ArrayList]@('Blue','Green','Red','Orange')

#Array list has Add() which adds an element to the end of it, or you can use Remove() which removes an element from an array 
$Colors.Add('Grey')
#Removing items use Remove('Gray') This will remove the first instance of the element 


#Hashtables (or Dictionaries):
$users = @{
    bubble = 'Kim Bubble'
    Candy = 'Cindy Candy'
    Lolli = 'Jacob Lolli' 
}

#Each key in a hashtable has to be unique and each key can be a string, array, or even another hashtable 
#Indexing: 
$users['bubble']

#To look at all the available keys: 
$users.Keys
#To look at all the available values: 
$users.Values

#To look at everything in a hashtable: 
Select-Object -InputObject $yourobject -Property * 

#To add an element to a hashtable you can use the following options: 
$users.Add('Choco','Chris Chocolate') #or
$users['Mint'] = 'Philip Mint'

#When changing an element it is always good to check if the element exists: 
$users.ContainsKey('Ice')
#once you check you can then use a simple = sign: 
$users['Mint'] = 'Nick Mint'

#To remove an element you can use the following: 
$users.Remove('Mint')

#You can create your own custom objects as well: 
$myFirstCustomObject = New-Object -TypeName PSCustomObject
#or you can do it with the following: 
$myFirstCustomObject = [PSCustomObject]@{OSBuild = 'x'; OSVersion = 'y'}


#To Query Services available run: 
Get-Service

#To start a service use: ]
$serviceName = 'wuauserv' #windows update
Start-Service -Name $serviceName

#When working with a ton of services you can use a pipeline where the output of one command gets piped into another command 
# command1 | command2 
Get-Service -Name 'wuauserv' | Start-Service

# or without specifying the parameter: 
'wuauserv' | Get-Service | Start-Service


#You could always put the services in a text file then use: 
Get-Content -Path FilePath.txt | Get-Service
#Make sure the services are on separate lines, Also you can add in |Start-Service to start up the services

#To see if a command supports pipeline: 
Get-Help -Name Get-Service -Full

#Scripts in powershell have four different execution policies: 
<#
1. Restricted - Default doesn't allow to run scripts
2. AllSigned - This configuration allows you to run only scripts that been crpytographically signed by a trusted party
3. RemoteSigned - This configuration allows you to run any script you write, and any script you download as long as it's been cryptographically signed by a trusted party 
4. Unrestricted - This configuration allows you to run any scripts
#>

#Reading a file: 
Get-Content -Path "\\servername\c$\App_configuration.txt"

#Conditional Statements: 
-eq #Compares two values and returns True if they are equal
-ne #Compares two values and returns True if they are not equal 
-gt #Compares two values and returns True if the first is greater than the second
-ge #Compares two values and returns True if the first is greater than or equal to the second 
-lt #Compares two values and returns True if the first is less than the second 
-le #Compares two values and returns True if the first is less than or equal to the second 
-contains #Returns True if the second value is "in" the second. You can use this to determine whether a value is inside an array. 
-like #string matches wildcard pattern
-notlike #string does not match wildcard pattern
-match #string matches regex pattern 
-notmatch #string does not match regex pattern 
-replace #replaces strings matching a regex pattern 
-notcontains #collection does not contain a value 
-in #values is in a collection
-notin #value is not in a collection
-is #both objects are the same type
-isnot #the objects are not the same type 

<# Conditional Expressions:
if (condition){
    #code to run if the condition evaluates to True
}elseif(condition){
    #Code that runs if the if statement doesn't return true, checks it against a different condition before the else statement
}
else {
    #code that runs as alternative to something not being true
}

#Switch Statements are Allowed: 
switch (expression){
    expressionvalue {
        #Do something with code here.
    }
    expressionvalue{
        break #use this keyword when you don't want to run it against any other condition checks
    }
    default{
        #stuff to do if no matches were found
    }
}
#>
#In powershell folders can be considered three different types when checking if a folder/file exists:
#Any
#Container (Folder/Directory)
#Leaf (File)