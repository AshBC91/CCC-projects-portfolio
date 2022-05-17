Write-Host "`n You arrive to Port Authority bus terminal in New York City.
 You were really looking forward to visiting the following locations:
`n 			1. World Trade Center.
`n 			2. Museum of Natural History.
`n 			3. Grand Central Terminal.
`n 			4. Queensboro Plaza.
`n In order to reach your destination you must travel by using the metro.
 Depending on which destination you choose, you must take a specific route. Which I will be able to assist you with."
 
[float]$destination = Read-Host -Prompt "`n Please indicate your destination. (1 - 4) `n"

:destinationAnsCheck while ( $destination -lt 1 -or $destination -gt 4 ) {
	if (( $destination -eq 1) -or ( $destination -eq 2 ) -or ( $destination -eq 3 ) -or ( $destination -eq 4 )) {
			break destinationAnsCheck
		}
	write-host " That was an invalid input!"
	
	[float]$destination = Read-Host -Prompt "`n Input must be any number between 1 - 4 `n"
}

switch ($destination) 
{
	{ $destination -eq 1 } { 
		write-host "`n You chose" $destination "."
		write-host "`n To reach the World Trade Center, you must take the blue Line E, heading towards the WTC terminal and depart at the terminal. `n"
	}
	{ $destination -eq 2 } { 
		write-host "`n You chose" $destination "."
		write-host "`n To reach the Museum of Natural History, you can either take blue Line A or blue Line C, heading towards the Inwood 207 St terminal (A) or the Washington Heights 168 St terminal (C) and depart at the 81 St-Museum of Natural History station. `n"
	}
	{ $destination -eq 3 } { 
		write-host "`n You chose" $destination "."
		write-host "`n To reach the Crand Central Terminal, you must take the purple Line 7, heading towards the Flushing Main St terminal and depart at the 42 St-Crand Central station. `n"
	}
	{ $destination -eq 4 } { 
		write-host "`n You chose" $destination "."
		write-host "`n To reach the Queensboro Plaza, you must take the purple Line 7, heading towards the Flushing Main St terminal and depart at the Queensboro Plaza station. `n"
	}
	default {write-host "`n You must choose a destination, in order for me to help you."}
}

write-host " Hope this information was of great use to you.
 Good bye.
`n End of line... `n"