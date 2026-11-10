/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00446030; name: FUN_00446030
 */


undefined8 FUN_00446030(uint param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (DAT_047f192c == '\x01') {
    if ((param_1 >> 0x12 & 1) != 0) {
      return 0;
    }
    FUN_004806c0(0xf,0x74,0x46,"external/openssl/crypto/init.c",0x27b);
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_0047e650(&DAT_047f1950,&LAB_00446370);
    uVar4 = 0;
    if ((iVar2 != 0) && (DAT_047f1954 != 0)) {
      if ((param_1 >> 0x12 & 1) != 0) {
        return 1;
      }
      if ((param_1 >> 0x13 & 1) == 0) {
        iVar2 = FUN_0047e650(&DAT_047f1958,&LAB_00446400);
        bVar1 = DAT_047f193c;
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        iVar2 = FUN_0047e650(&DAT_047f1958,&LAB_004463f0);
        if (iVar2 == 0) {
          return 0;
        }
        bVar1 = DAT_047f193c & 1;
      }
      uVar4 = 0;
      if (bVar1 != 0) {
        iVar2 = FUN_0047e650(&DAT_047f195c,&LAB_00446410);
        uVar4 = 0;
        if ((iVar2 != 0) && (DAT_047f1940 != '\0')) {
          if ((param_1 & 1) != 0) {
            iVar2 = FUN_0047e650(&DAT_047f1960,&LAB_00446420);
            if (iVar2 == 0) {
              return 0;
            }
            if (DAT_047f1964 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 1 & 1) != 0) {
            iVar2 = FUN_0047e650(&DAT_047f1960,&LAB_00446430);
            if (iVar2 == 0) {
              return 0;
            }
            if (DAT_047f1964 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 4 & 1) != 0) {
            iVar2 = FUN_0047e650(&DAT_047f1968,&LAB_00446460);
            if (iVar2 == 0) {
              return 0;
            }
            if (DAT_047f1944 == '\0') {
              return 0;
            }
          }
          if ((param_1 >> 2 & 1) != 0) {
            iVar2 = FUN_0047e650(&DAT_047f1968,&LAB_00446470);
            if (iVar2 == 0) {
              return 0;
            }
            if (DAT_047f1944 == '\0') {
              return 0;
            }
          }
          if ((param_1 >> 5 & 1) != 0) {
            iVar2 = FUN_0047e650(&DAT_047f196c,&LAB_00446490);
            if (iVar2 == 0) {
              return 0;
            }
            if (DAT_047f1948 == '\0') {
              return 0;
            }
          }
          if ((param_1 >> 3 & 1) != 0) {
            iVar2 = FUN_0047e650(&DAT_047f196c,&LAB_004464a0);
            if (iVar2 == 0) {
              return 0;
            }
            if (DAT_047f1948 == '\0') {
              return 0;
            }
          }
          if (((param_1 >> 0x11 & 1) == 0) || (uVar4 = FUN_0047e6b0(0), (int)uVar4 != 0)) {
            if ((param_1 >> 7 & 1) != 0) {
              iVar2 = FUN_0047e650(&DAT_047f1970,&LAB_004464c0);
              if (iVar2 == 0) {
                return 0;
              }
              if (DAT_047f1974 == 0) {
                return 0;
              }
            }
            if ((param_1 >> 6 & 1) != 0) {
              FUN_0047e5e0(DAT_047f1990);
              DAT_047f1998 = param_2;
              iVar3 = FUN_0047e650(&DAT_047f1970,&LAB_004464e0);
              iVar2 = DAT_047f1974;
              DAT_047f1998 = 0;
              FUN_0047e600(DAT_047f1990);
              if (iVar3 == 0) {
                return 0;
              }
              if (iVar2 < 1) {
                return 0;
              }
            }
            if ((param_1 >> 8 & 1) != 0) {
              iVar2 = FUN_0047e650(&DAT_047f1978,&LAB_00446500);
              if (iVar2 == 0) {
                return 0;
              }
              if (DAT_047f197c == 0) {
                return 0;
              }
            }
            if ((param_1 >> 0x10 & 1) != 0) {
              iVar2 = FUN_0047e650(&DAT_047f1980,&LAB_00446540);
              if (iVar2 == 0) {
                return 0;
              }
              if (DAT_047f194c == '\0') {
                return 0;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return uVar4;
}


