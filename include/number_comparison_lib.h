

int find_min(int ival1, int ival2) {
    
    //finds the smaller value of two values

    int smallerival = 0;
    
    if (ival1 > ival2) {
        smallerival = ival2;
    } else if (ival1 < ival2) {
        smallerival = ival1;
    } else { //if control lands here, it means the two values are equal (ival1 == ival2)
        smallerival = ival1; //can be any of ival1 and ival2 since (ival1 == ival2) 
    }

    return smallerival;
}

int find_max(int ivalue1, int ivalue2) {

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