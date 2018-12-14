

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

    double biggerivalue = 0;

    if (ivalue1 > ivalue2) {
        biggerivalue = ivalue1;
    } else if (ivalue1 < ivalue2) {
        biggerivalue = ivalue2;
    } else { //if control lands here, it means (ivalue1 == ivalue2)
        biggerivalue = ivalue1; //can be any of ivalue1 and ivalue2 since (ivalue1 == ivalue2)
    }

    return biggerivalue;
}

int determine_equal(double ivall1, double ivall2, bool enable_almost_equal = false) {
    
    //compare two values and determine if it is equal. If true, return 1, otherwise, return 0
    //additional: if the values are almost equal (with the difference of 0.1 and below), return 2

    int returnvalue1 = 0;
    
    if (ivall1 == ivall2) {
        returnvalue1 = 1;
    } else if ((enable_almost_equal == true) && (find_max(ivall1, ivall2) - find_min(ivall1, ivall2) <= 0.01)){
        returnvalue1 = 2;
    } else if (ivall1 != ivall2) {
        returnvalue1 = 0;
    } else {
        returnvalue1 = 0;
    }

    return returnvalue1;
}