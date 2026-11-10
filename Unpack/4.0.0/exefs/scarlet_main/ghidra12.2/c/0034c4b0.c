/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034c4b0; name: FUN_0034c4b0
 */


undefined8 FUN_0034c4b0(char *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp(param_1,"OK");
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_1,"CANCELLED");
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,"UNKNOWN");
      if (iVar1 == 0) {
        lVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_1,"INVALID_ARGUMENT");
        if (iVar1 == 0) {
          lVar2 = 3;
        }
        else {
          iVar1 = strcmp(param_1,"DEADLINE_EXCEEDED");
          if (iVar1 == 0) {
            lVar2 = 4;
          }
          else {
            iVar1 = strcmp(param_1,"NOT_FOUND");
            if (iVar1 == 0) {
              lVar2 = 5;
            }
            else {
              iVar1 = strcmp(param_1,"ALREADY_EXISTS");
              if (iVar1 == 0) {
                lVar2 = 6;
              }
              else {
                iVar1 = strcmp(param_1,"PERMISSION_DENIED");
                if (iVar1 == 0) {
                  lVar2 = 7;
                }
                else {
                  iVar1 = strcmp(param_1,"UNAUTHENTICATED");
                  if (iVar1 == 0) {
                    lVar2 = 8;
                  }
                  else {
                    iVar1 = strcmp(param_1,"RESOURCE_EXHAUSTED");
                    if (iVar1 == 0) {
                      lVar2 = 9;
                    }
                    else {
                      iVar1 = strcmp(param_1,"FAILED_PRECONDITION");
                      if (iVar1 == 0) {
                        lVar2 = 10;
                      }
                      else {
                        iVar1 = strcmp(param_1,"ABORTED");
                        if (iVar1 == 0) {
                          lVar2 = 0xb;
                        }
                        else {
                          iVar1 = strcmp(param_1,"OUT_OF_RANGE");
                          if (iVar1 == 0) {
                            lVar2 = 0xc;
                          }
                          else {
                            iVar1 = strcmp(param_1,"UNIMPLEMENTED");
                            if (iVar1 == 0) {
                              lVar2 = 0xd;
                            }
                            else {
                              iVar1 = strcmp(param_1,"INTERNAL");
                              if (iVar1 == 0) {
                                lVar2 = 0xe;
                              }
                              else {
                                iVar1 = strcmp(param_1,"UNAVAILABLE");
                                if (iVar1 == 0) {
                                  lVar2 = 0xf;
                                }
                                else {
                                  iVar1 = strcmp(param_1,"DATA_LOSS");
                                  if (iVar1 != 0) {
                                    return 0;
                                  }
                                  lVar2 = 0x10;
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
    }
  }
  *param_2 = (&DAT_04495fb0)[lVar2 * 4];
  return 1;
}


