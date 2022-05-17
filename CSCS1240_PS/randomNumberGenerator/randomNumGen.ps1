$coefficient = 75
$constant = 74
$modulus = 65534
$current = [int](Get-Date -Format ss) + [int](Get-Date -Format fff)

function lcg {
	param ( $previous )
	[int]$next = ( $coefficient * $previous + $constant ) % $modulus 
	return $next
}
 
for( $count = 1; $count -lt 4; $count = $count + 1 ) {
 	$current = lcg $current
 	write-host $current
 	$first = $current
 
	$current = lcg $current
 	write-host $current
 	$second = $current
 
	if( $first -gt $second ) { 
 		write-host First number was greater than the second
 	} else {
 		if( $first -lt $second ) {
		write-host First number was less than the second
		} else {
			write-host First number was equal to the second
		}
	}
 
}
