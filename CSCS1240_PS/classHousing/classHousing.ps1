class housing {
    [string]$address
    [int]$size #square feet
    [string]$occupancy
    [int]$numResidents
    [bool]$livingroom
    [int]$bedrooms
    [int]$bathrooms
    [bool]$kitchen
}

class house : housing {
    #address
    #size
    #occupancy
    #numResidents
    #livingroom
    #bedrooms
    #bathrooms
    #kitchen
    [bool]$masterBedroom
    [bool]$dinningroom
    [bool]$basement
    [bool]$attic
    [bool]$garage
}

class apartment : housing {
    #address
    #size
    #occupancy
    #numResidents
    #livingroom
    #bedrooms
    #bathrooms
    #kitchen
    [int]$parkingspots
}

class studioApt : apartment {
    studioApt () {
        $this.size = 500 #square feet
        $this.occupancy = "vacant"
        $this.numResidents = 0
        $this.livingroom = $true
        $this.bedrooms = 0
        $this.bathrooms = 1
        $this.kitchen = $false
        $this.parkingspots = 0    
    }
}

class oneRoomApt : apartment {
    oneRoomApt () {
        $this.size = 700 #square feet
        $this.occupancy = "vacant"
        $this.numResidents = 0
        $this.livingroom = $true
        $this.bedrooms = 1
        $this.bathrooms = 1
        $this.kitchen = $true
        $this.parkingspots = 1
    }
}

class twoRoomApt : apartment {
    twoRoomApt () {
        $this.size = 1000 #square feet
        $this.occupancy = "vacant"
        $this.numResidents = 0
        $this.livingroom = $true
        $this.bedrooms = 2
        $this.bathrooms = 2
        $this.kitchen = $true
        $this.parkingspots = 2
    }
}

class apartmentUnit {
    [string]$address
    [string]$unitName
    [int]$apartments = 10
    [int]$story = 2
    [oneRoomApt]$apt101
    [studioApt]$apt102
    [oneRoomApt]$apt103
    [studioApt]$apt104
    [twoRoomApt]$apt105
    [oneRoomApt]$apt201
    [studioApt]$apt202
    [oneRoomApt]$apt203
    [studioApt]$apt204
    [twoRoomApt]$apt205
}

class singlefamilyHome : house {
    singlefamilyHome () {
        $this.size = 2500 #square feet
        $this.occupancy = "vacant"
        $this.numResidents = 0
        $this.livingroom = $true
        $this.bedrooms = 1
        $this.bathrooms = 2
        $this.kitchen = $true
        $this.masterBedroom = $true
        $this.dinningroom = $true
        $this.basement = $true
        $this.attic = $true
        $this.garage = $true
    }
}

class deluxeHome : house {
    singlefamilyHome () {
        $this.size = 3000 #square feet
        $this.occupancy = "vacant"
        $this.numResidents = 0
        $this.livingroom = $true
        $this.bedrooms = 1
        $this.bathrooms = 2
        $this.kitchen = $true
        $this.masterBedroom = $true
        $this.dinningroom = $true
        $this.basement = $true
        $this.attic = $true
        $this.garage = $true
    }
}

$420_NewtownSt = New-Object singlefamilyHome
$420_NewtownSt.address = "420 Newtown St"

$360_ChurchSt = New-Object apartmentUnit
$360_ChurchSt.unitName = "Downtown Apartments"
$360_ChurchSt.address = "360 Church St"

$360_ChurchSt.apt101 = New-Object oneRoomApt
$360_ChurchSt.apt101.address = "360 Church St, Apt 101"
$360_ChurchSt.apt102 = New-Object studioApt
$360_ChurchSt.apt102.address = "360 Church St, Apt 102"
$360_ChurchSt.apt103 = New-Object oneRoomApt
$360_ChurchSt.apt103.address = "360 Church St, Apt 103"
$360_ChurchSt.apt104 = New-Object studioApt
$360_ChurchSt.apt104.address = "360 Church St, Apt 104"
$360_ChurchSt.apt105 = New-Object twoRoomApt
$360_ChurchSt.apt105.address = "360 Church St, Apt 105"
$360_ChurchSt.apt201 = New-Object oneRoomApt
$360_ChurchSt.apt201.address = "360 Church St, Apt 201"
$360_ChurchSt.apt202 = New-Object studioApt
$360_ChurchSt.apt202.address = "360 Church St, Apt 202"
$360_ChurchSt.apt203 = New-Object oneRoomApt
$360_ChurchSt.apt203.address = "360 Church St, Apt 203"
$360_ChurchSt.apt204 = New-Object studioApt
$360_ChurchSt.apt204.address = "360 Church St, Apt 204"
$360_ChurchSt.apt205 = New-Object twoRoomApt
$360_ChurchSt.apt205.address = "360 Church St, Apt 205"


$420_NewtownSt.address
$420_NewtownSt.ToString()
$420_NewtownSt


$360_ChurchSt.unitName
$360_ChurchSt.ToString()
$360_ChurchSt

$360_ChurchSt.apt101.address
$360_ChurchSt.apt101.ToString()
$360_ChurchSt.apt101

$360_ChurchSt.apt104.address
$360_ChurchSt.apt104.ToString()
$360_ChurchSt.apt104

$360_ChurchSt.apt205.address
$360_ChurchSt.apt205.ToString()
$360_ChurchSt.apt105

#ocupancy? is the residence occupied or vacant? is the house avialable for rent/sale? No: how many people living there? Yes: What is the cost?