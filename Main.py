
def Display(iNo):

    if iNo < 0:
        iNo = -iNo

    iCnt = 1

    while iCnt <= iNo:
        print(iCnt,end="\t*\t")
        iCnt += 1
    
    print()

def main():

    iValue = int(input("Enter Number\n"))
    Display(iValue)

if __name__ == "__main__":
    main()