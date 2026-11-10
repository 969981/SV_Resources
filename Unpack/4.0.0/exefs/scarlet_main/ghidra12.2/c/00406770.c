/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00406770; name: FUN_00406770
 */


undefined4 FUN_00406770(char *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp("B-163",param_1);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = strcmp("B-233",param_1);
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = strcmp("B-283",param_1);
      if (iVar1 == 0) {
        lVar2 = 2;
      }
      else {
        iVar1 = strcmp("B-409",param_1);
        if (iVar1 == 0) {
          lVar2 = 3;
        }
        else {
          iVar1 = strcmp("B-571",param_1);
          if (iVar1 == 0) {
            lVar2 = 4;
          }
          else {
            iVar1 = strcmp("K-163",param_1);
            if (iVar1 == 0) {
              lVar2 = 5;
            }
            else {
              iVar1 = strcmp("K-233",param_1);
              if (iVar1 == 0) {
                lVar2 = 6;
              }
              else {
                iVar1 = strcmp("K-283",param_1);
                if (iVar1 == 0) {
                  lVar2 = 7;
                }
                else {
                  iVar1 = strcmp("K-409",param_1);
                  if (iVar1 == 0) {
                    lVar2 = 8;
                  }
                  else {
                    iVar1 = strcmp("K-571",param_1);
                    if (iVar1 == 0) {
                      lVar2 = 9;
                    }
                    else {
                      iVar1 = strcmp("P-192",param_1);
                      if (iVar1 == 0) {
                        lVar2 = 10;
                      }
                      else {
                        iVar1 = strcmp("P-224",param_1);
                        if (iVar1 == 0) {
                          lVar2 = 0xb;
                        }
                        else {
                          iVar1 = strcmp("P-256",param_1);
                          if (iVar1 == 0) {
                            lVar2 = 0xc;
                          }
                          else {
                            iVar1 = strcmp("P-384",param_1);
                            if (iVar1 == 0) {
                              lVar2 = 0xd;
                            }
                            else {
                              iVar1 = strcmp("P-521",param_1);
                              if (iVar1 != 0) {
                                return 0;
                              }
                              lVar2 = 0xe;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (&DAT_044a4d20)[lVar2 * 4];
}


