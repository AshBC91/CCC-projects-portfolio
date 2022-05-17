function cmdHelp {  #Help Command
    write-host "`n 'Help' Command is currently under construction. :) "
    write-host "`n My only available commands at the moment are: " 
    $Script:commandList
}

class randomGen {
    [int]$coefficient = 75
	[int]$constant = 77
	[int]$modulus = 140
	[int]$current = [int]( Get-Date -Format ss ) + [int]( Get-Date -Format fff )
    
	[int] nextnum($previous) {
        $next = ( ( $this.coefficient * $previous + $this.constant ) % $this.modulus ) - 20
		return $next
	}
}

$randomNo_Gen = [randomGen]::new()
$randomNo = $randomNo_Gen.nextnum( $randomNo_Gen.current )

#class cmdTempConvert {}
function convertC2F {
    param ( $degreesCel )
    [float]$degreesFah = ( ( ( 9/5 ) * $degreesCel ) + 32 )
    write-host "`n" $degreesCel "degrees Celsius convert to" $degreesFah "degrees Fahrenheit."
    return $degreesFah
}
    
function convertF2C {
    param ( $degreesFah )
    [float]$degreesCel = ( ( $degreesFah - 32 ) * ( 5/9 ) )        
    write-host "`n" $degreesFah "degrees Fahrenheit convert to" $degreesCel "degrees Celsius."
    return $degreesCel    
} 

function welcomeMsg {
    Write-Host "`n 
    ####################################################################################

            Hello! My name is CLIP. I am a temperature converter program. 
    
        I can help you convert temperature units from degrees Celsius to Fahrenheit,
        and vice versa.

    ####################################################################################
    `n"
    Write-Host "`n I function similar to a CLI. If you are wondering what my available commands are, please type 'help'. "
}

function numInputUorR {
    write-host "`n You can either provide a value for me to work with, or either I can choose a random one myself. "
    write-host "`n Please type 'my number' or 'random number': "
    [bool]$proceed = $true

    do { 
        $userInput = Read-Host -Prompt "`n CLIP"
        switch ( $userInput ) {
            { ( $userInput -eq "my number" ) -or ( $userInput -eq "my" ) } {
                $userInput = Read-Host -Prompt "`n Please type your value: `n CLIP"

                $proceed = $false
                break
            }
            { ( $userInput -eq "random number" ) -or ( $userInput -eq "random" ) } {
                $userInput = $randomNo
                $userInput = $randomNo_Gen.nextnum($userInput)
                $proceed = $false
                break
            }
            { ( $userInput -eq "help" ) } {
                write-host "`n Please type 'my number' or 'random number': "
            }
            Default {
                write-host " Command not recognized. Please type 'help' for me to show you my available commands. "
            }
        }
    } while (  $proceed -eq $true )

    return $userInput
}

function ansChecker {
    param ( $YNans )
    
    :AnsCheck while ( ( $YNans -notmatch "Y" ) -or ( $YNans -notmatch "N" ) ) {
        if ( ( $YNans -eq "Y") -or ( $YNans -eq "N" ) ) {
            break AnsCheck
        }
        write-host " " $YNans "is an invalid input!"
        [string]$YNans = Read-Host -Prompt "`n Please answer the question by typing Y for yes or N for no `n CLIP"
    }
    return $YNans
}	

$commandList = "exit","help","convert temperature"
#$commandIndex = [array]::indexof($commandList,$userInput)

welcomeMsg

[bool]$proceed = $true
do {
    $userInput = Read-Host -Prompt "`n CLIP"
    
    switch ( $userInput ) {
        { [string]$userInput -eq "exit" } {
            $proceed = $false
            break
        }
        { [string]$userInput -eq "help" } {
            cmdHelp
        }
        { ( [string]$userInput -eq "convert t" ) -or ( [string]$userInput -eq "convert temperature" ) } {
            write-host "`n Which unit convertion would you like me to perform? (Please type the corresponding number):"
                write-host "`n`[1]: Fahrenheit to Celsius"
                write-host "`[2]: Celsius to Fahrenheit"
            do {
                
                $userInput = Read-Host -Prompt "`n CLIP"
        
                switch ( $userInput ) {
                    { ( [string]$userInput -eq "1" ) -or ( [string]$userInput -eq "fahrenheit to celsius" ) } { #Fahrenheit to Celsius
                        write-host "`n Converting Fahrenheit degrees to Celsius"
                        $degreesFah = numInputUorR
                        $degreesCel = convertF2C $degreesFah
                        
                        $proceed = $false
                        break
                    }
                    { ( [string]$userInput -eq "2" ) -or ( [string]$userInput -eq "celsius to fahrenheit" ) } { #Celsius to Fahrenheit
                        write-host "`n Converting Celsius degrees to Fahrenheit"
                        $degreesCel = numInputUorR
                        $degreesFah = convertC2F $degreesCel
                        
                        $proceed = $false
                        break
                    }
                    { [string]$userInput -eq "help" } {
                        write-host "`n Please type the corresponding number:"
                        write-host "`n`[1]: Fahrenheit to Celsius"
                        write-host "`[2]: Celsius to Fahrenheit"
                    }
                    Default { write-host "`n" $userInput "Is an nvalid input! Please try again." }
                }              
            } while ( $proceed -eq $true )

        $proceed = $true
        }
        Default {
            write-host "`n" $userInput "is not a recognized Command. `n Please type 'help' for me to show you my available commands. "
        }
    }
} while ( $proceed -eq $true )

write-host "`n end of line... `n"