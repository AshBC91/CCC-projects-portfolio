
[string]$carUsage = Read-Host -Prompt "`n Did you use your car today? ( Y or N ) `n"

:carUsageAnsCheck while (( $carUsage -notmatch "Y" ) -or ( $carUsage -notmatch "N" )) {
	if (( $carUsage -eq "Y") -or ( $carUsage -eq "N" )) {
		break carUsageAnsCheck
	}
	write-host " " $carUsage "is an invalid input!"
	[string]$carUsage = Read-Host -Prompt "`n Did you use your car today? ( Y or N ) `n"
}

if ( $carUsage -eq "Y" ) {
	$rustDamage = 50.5337

	[string]$itSnowed = Read-Host -Prompt "`n Did it snow in the past 24 hours? ( Y or N) `n"

	:itSnowedAnsCheck while (( $itSnowed -notmatch "Y" ) -or ( $itSnowed -notmatch "N" )) {
		if (( $itSnowed -eq "Y") -or ( $itSnowed -eq "N" )) {
			break itSnowedAnsCheck
		}
		write-host " " $itSnowed "is an invalid input!"
		[string]$itSnowed = Read-Host -Prompt "`n Did it snow in the past 24 hours? ( Y or N) `n"
	}

	if ( $itSnowed -eq "Y" ) {

		[float]$heightSnow = Read-Host -Prompt "`n Please specify the height in inches of today's snowfall. (Input only the numeric value) `n"

		:heightSnowAnsCheck while ( $heightSnow -isNot [float] ) {
			write-host " That was an invalid input!"
			[float]$heightSnow = Read-Host -Prompt "`n Please specify the height in inches of today's snowfall. (Input only the numeric value) `n"
	}

		if ( $heightSnow -gt 100 ) {
			write-host " According to you, today we had" $heightSnow "inches of snow."
			write-host "`n I dont believe you, but ...ok"
		}
		else {
			write-host " Today we had" $heightSnow "inches of snow."
		}

		$saltRoadQty = ( 1 * ([math]::Pow($heightSnow,2)) + 2.1852 * $heightSnow + 385.324)
	}
	else {

		$saltRoadQty = 385.324
	}

	write-host "`n The approximate amount of salt used to clear out the roads was" $saltRoadQty "grams per yard."

	
	[float]$disTravelled = Read-Host -Prompt "`n Please indicate the distance in miles you drove your car for? `n"

	:disTravelledAnsCheck while ( $disTravelled -isNot [float] ) {
		write-host " That was an invalid input!"
		[float]$disTravelled = Read-Host -Prompt "`n Please indicate the distance in miles you drove your car for? `n"
	}

	write-host " You drove your car for" $disTravelled "miles."

	$carSaltExpsr = ( $disTravelled * ([math]::Pow(1.02324,$saltRoadQty) - 1))
	$rustDamage = $carSaltExpsr / 200000

	write-host "`n Your car's exposure toward the salt is represented by the quantity" $carSaltExpsr "...whatever that means. "
	write-host "`n Your car's rust damage is represented by the quantity" $rustDamage "...that looks about right, don't you agree? "

	$iDontCare = Read-Host -Prompt "`n Well... this is the end of my code. I appear to be a useful program, but in reality I'm not. `n However I could say that we had fun together tho, right? `n"

	write-host "`n I dont actually care what you have to say about it. `n 
	 `n The only thing I've learned so far from this experience is that your car is really messed up."
	 $iDontCare = Read-Host "`n "
	 write-host "`n Sucks to be you." 
	 write-host "`n `n Well, see ya..."

}
else {
	write-host "`n Then, you don't need me for the moment... BYE!"
}

write-host "`n end of line... `n"