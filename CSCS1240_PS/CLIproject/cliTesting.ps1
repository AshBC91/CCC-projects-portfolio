function welcomeMsg {
    Write-Host "`n 
    ################################################################################

                    Hello! I am a temperature converter program. 
        I can help you convert degrees from Celsius to Fahrenheit, and vice versa.

    ################################################################################
    `n"
    Write-Host "`n I function similar to a CLI. If you are wondering what my available commands are please type 'help'. "
}

function cmdexit {
    return $false    
}
function cmdhelp {  #Help Command
}
function ansChecker {
	param ( $YNans )
	
	:AnsCheck while (( $YNans -notmatch "Y" ) -or ( $YNans -notmatch "N" )) {
		if (( $YNans -eq "Y") -or ( $YNans -eq "N" )) {
			break AnsCheck
		}
		write-host " " $YNans "is an invalid input!"
		[string]$YNans = Read-Host -Prompt "`n Please answer the question by typing Y for yes or N for no `n"
	}
	return $YNans
}	

class randomGen {
	[int]$coefficient = 75
	[int]$constant = 77
	[int]$modulus
	[int]$current = [int](Get-Date -Format ss) + [int](Get-Date -Format fff)

	[int] next() {
		$this.current = ( $this.coefficient * $this.current + $this.constant ) % $this.modulus
		return $this.current
	}
}

function covertToFah {
    param ( $degreesCel )
    [float]$degreesFah = ( ( ( 9/5 ) * $degreesCel ) + 32 )        
    return $degreesFah    
}

function covertToCel {
    param ( $degreesFah )
    [float]$degreesCel = ( ( $degreesFah - 32 ) * ( 5/9 ) )        
    return $degreesCel    
}

$commandList = "exit","help", "welcome"

welcomeMsg

[bool]$proceed = $true
do {
    $userInput = Read-Host -Prompt "`n "
    
    if ( $commandList -contains $userInput ) {
        $cmdIndex = [array]::indexof($commandList,$userInput)
        $commandFunction = "cmd" + $commandList[$cmdIndex]
        $commandFunction
    }
    else {
        write-host "`n Command not recognized. Please type 'help' for me to show you my available commands. "
    }
        
} while ( $proceed -eq $true )

write-host "`n end of line... `n"