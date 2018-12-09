

double find_min(double ival1, double ival2) {
    
    //finds the smaller value of two values

    double smallerival = 0.0;
    
    if (ival1 > ival2) {
        smallerival = ival2;
    } else if (ival1 < ival2) {
        smallerival = ival1;
    } else { //if control lands here, it means the two values are equal (ival1 == ival2)
        smallerival = ival1; //can be any of ival1 and ival2 since (ival1 == ival2) 
    }

    return smallerival;
}

double find_max(double ivalue1, double ivalue2) {

    //find the bigger value of two values

    int biggerivalue = 0;

    if (ivalue1 > ivalue2) {
        biggerivalue = ivalue1;
    } else if (ivalue1 < ivalue2) {
        biggerivalue = ivalue2;
    } else { //if control lands here, it means (ivalue1 == ivalue2)
        biggerivalue = ivalue1; //can be any of ivalue1 and ivalue2 since (ivalue1 == ivalue2)
    }

    return biggerivalue;
}

bool determine_equal(double ivall1, double ivall2) {
    
    //compare two values and determine if it is equal. If true, return true, otherwise, return false

    bool returnvalue1 = false;
    
    if (ivall1 == ivall2) {
        returnvalue1 = true;
    } else if (ivall1 != ivall2) {
        returnvalue1 = false;
    } else {
        returnvalue1 = false;
    }

    return returnvalue1;
}