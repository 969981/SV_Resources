/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078b2d0; name: FUN_0078b2d0
 */


undefined8 FUN_0078b2d0(char *param_1,char *param_2,long param_3,uint param_4)

{
  char *__s;
  ulong uVar1;
  bool bVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  size_t sVar7;
  
  if (param_3 == 0) {
    if (*param_2 == '\0') {
      sVar7 = 0;
    }
    else {
      *param_1 = *param_2;
      if (param_2[1] == '\0') {
        sVar7 = 1;
      }
      else {
        param_1[1] = param_2[1];
        if (param_2[2] == '\0') {
          sVar7 = 2;
        }
        else {
          param_1[2] = param_2[2];
          if (param_2[3] == '\0') {
            sVar7 = 3;
          }
          else {
            param_1[3] = param_2[3];
            if (param_2[4] == '\0') {
              sVar7 = 4;
            }
            else {
              param_1[4] = param_2[4];
              if (param_2[5] == '\0') {
                sVar7 = 5;
              }
              else {
                param_1[5] = param_2[5];
                if (param_2[6] == '\0') {
                  sVar7 = 6;
                }
                else {
                  param_1[6] = param_2[6];
                  if (param_2[7] == '\0') {
                    sVar7 = 7;
                  }
                  else {
                    param_1[7] = param_2[7];
                    if (param_2[8] == '\0') {
                      sVar7 = 8;
                    }
                    else {
                      param_1[8] = param_2[8];
                      if (param_2[9] == '\0') {
                        sVar7 = 9;
                      }
                      else {
                        param_1[9] = param_2[9];
                        if (param_2[10] == '\0') {
                          sVar7 = 10;
                        }
                        else {
                          param_1[10] = param_2[10];
                          if (param_2[0xb] == '\0') {
                            sVar7 = 0xb;
                          }
                          else {
                            param_1[0xb] = param_2[0xb];
                            if (param_2[0xc] == '\0') {
                              sVar7 = 0xc;
                            }
                            else {
                              param_1[0xc] = param_2[0xc];
                              if (param_2[0xd] == '\0') {
                                sVar7 = 0xd;
                              }
                              else {
                                param_1[0xd] = param_2[0xd];
                                if (param_2[0xe] == '\0') {
                                  sVar7 = 0xe;
                                }
                                else {
                                  param_1[0xe] = param_2[0xe];
                                  if (param_2[0xf] == '\0') {
                                    sVar7 = 0xf;
                                  }
                                  else {
                                    param_1[0xf] = param_2[0xf];
                                    if (param_2[0x10] == '\0') {
                                      sVar7 = 0x10;
                                    }
                                    else {
                                      param_1[0x10] = param_2[0x10];
                                      if (param_2[0x11] == '\0') {
                                        sVar7 = 0x11;
                                      }
                                      else {
                                        param_1[0x11] = param_2[0x11];
                                        if (param_2[0x12] == '\0') {
                                          sVar7 = 0x12;
                                        }
                                        else {
                                          param_1[0x12] = param_2[0x12];
                                          if (param_2[0x13] == '\0') {
                                            sVar7 = 0x13;
                                          }
                                          else {
                                            param_1[0x13] = param_2[0x13];
                                            if (param_2[0x14] == '\0') {
                                              sVar7 = 0x14;
                                            }
                                            else {
                                              param_1[0x14] = param_2[0x14];
                                              if (param_2[0x15] == '\0') {
                                                sVar7 = 0x15;
                                              }
                                              else {
                                                param_1[0x15] = param_2[0x15];
                                                if (param_2[0x16] == '\0') {
                                                  sVar7 = 0x16;
                                                }
                                                else {
                                                  param_1[0x16] = param_2[0x16];
                                                  if (param_2[0x17] == '\0') {
                                                    sVar7 = 0x17;
                                                  }
                                                  else {
                                                    param_1[0x17] = param_2[0x17];
                                                    if (param_2[0x18] == '\0') {
                                                      sVar7 = 0x18;
                                                    }
                                                    else {
                                                      param_1[0x18] = param_2[0x18];
                                                      if (param_2[0x19] == '\0') {
                                                        sVar7 = 0x19;
                                                      }
                                                      else {
                                                        param_1[0x19] = param_2[0x19];
                                                        if (param_2[0x1a] == '\0') {
                                                          sVar7 = 0x1a;
                                                        }
                                                        else {
                                                          param_1[0x1a] = param_2[0x1a];
                                                          if (param_2[0x1b] == '\0') {
                                                            sVar7 = 0x1b;
                                                          }
                                                          else {
                                                            param_1[0x1b] = param_2[0x1b];
                                                            if (param_2[0x1c] == '\0') {
                                                              sVar7 = 0x1c;
                                                            }
                                                            else {
                                                              param_1[0x1c] = param_2[0x1c];
                                                              if (param_2[0x1d] == '\0') {
                                                                sVar7 = 0x1d;
                                                              }
                                                              else {
                                                                param_1[0x1d] = param_2[0x1d];
                                                                if (param_2[0x1e] == '\0') {
                                                                  sVar7 = 0x1e;
                                                                }
                                                                else {
                                                                  param_1[0x1e] = param_2[0x1e];
                                                                  if (param_2[0x1f] == '\0') {
                                                                    sVar7 = 0x1f;
                                                                  }
                                                                  else {
                                                                    param_1[0x1f] = param_2[0x1f];
                                                                    if (param_2[0x20] == '\0') {
                                                                      sVar7 = 0x20;
                                                                    }
                                                                    else {
                                                                      param_1[0x20] = param_2[0x20];
                                                                      if (param_2[0x21] == '\0') {
                                                                        sVar7 = 0x21;
                                                                      }
                                                                      else {
                                                                        param_1[0x21] =
                                                                             param_2[0x21];
                                                                        if (param_2[0x22] == '\0') {
                                                                          sVar7 = 0x22;
                                                                        }
                                                                        else {
                                                                          param_1[0x22] =
                                                                               param_2[0x22];
                                                                          if (param_2[0x23] == '\0')
                                                                          {
                                                                            sVar7 = 0x23;
                                                                          }
                                                                          else {
                                                                            param_1[0x23] =
                                                                                 param_2[0x23];
                                                                            if (param_2[0x24] ==
                                                                                '\0') {
                                                                              sVar7 = 0x24;
                                                                            }
                                                                            else {
                                                                              param_1[0x24] =
                                                                                   param_2[0x24];
                                                                              if (param_2[0x25] ==
                                                                                  '\0') {
                                                                                sVar7 = 0x25;
                                                                              }
                                                                              else {
                                                                                param_1[0x25] =
                                                                                     param_2[0x25];
                                                                                if (param_2[0x26] ==
                                                                                    '\0') {
                                                                                  sVar7 = 0x26;
                                                                                }
                                                                                else {
                                                                                  param_1[0x26] =
                                                                                       param_2[0x26]
                                                                                  ;
                                                                                  if (param_2[0x27]
                                                                                      == '\0') {
                                                                                    sVar7 = 0x27;
                                                                                  }
                                                                                  else {
                                                                                    param_1[0x27] =
                                                                                         param_2[
                                                  0x27];
                                                  if (param_2[0x28] == '\0') {
                                                    sVar7 = 0x28;
                                                  }
                                                  else {
                                                    param_1[0x28] = param_2[0x28];
                                                    if (param_2[0x29] == '\0') {
                                                      sVar7 = 0x29;
                                                    }
                                                    else {
                                                      param_1[0x29] = param_2[0x29];
                                                      if (param_2[0x2a] == '\0') {
                                                        sVar7 = 0x2a;
                                                      }
                                                      else {
                                                        param_1[0x2a] = param_2[0x2a];
                                                        if (param_2[0x2b] == '\0') {
                                                          sVar7 = 0x2b;
                                                        }
                                                        else {
                                                          param_1[0x2b] = param_2[0x2b];
                                                          if (param_2[0x2c] == '\0') {
                                                            sVar7 = 0x2c;
                                                          }
                                                          else {
                                                            param_1[0x2c] = param_2[0x2c];
                                                            if (param_2[0x2d] == '\0') {
                                                              sVar7 = 0x2d;
                                                            }
                                                            else {
                                                              param_1[0x2d] = param_2[0x2d];
                                                              if (param_2[0x2e] == '\0') {
                                                                sVar7 = 0x2e;
                                                              }
                                                              else {
                                                                param_1[0x2e] = param_2[0x2e];
                                                                sVar7 = 0x2f;
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
    param_1[sVar7] = '\0';
    sVar3 = strlen(param_2);
    if (sVar7 != sVar3) {
      return 0;
    }
  }
  else {
    uVar5 = param_3 - (long)param_2;
    uVar1 = uVar5;
    if (0x2e < uVar5) {
      uVar1 = 0x2f;
    }
    if (uVar1 == 0) {
      *param_1 = '\0';
      if (uVar5 != 0) {
        return 0;
      }
    }
    else {
      uVar4 = 0;
      do {
        if (param_2[uVar4] == '\0') {
          param_1[uVar4] = '\0';
          uVar1 = uVar4;
          goto joined_r0x0078b598;
        }
        param_1[uVar4] = param_2[uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
      param_1[uVar4] = '\0';
joined_r0x0078b598:
      if (uVar1 != uVar5) {
        return 0;
      }
    }
    __s = (char *)(param_3 + (ulong)param_4);
    if (*__s == '\0') {
      bVar2 = false;
      sVar7 = 0;
      pcVar6 = param_1 + 0x30;
    }
    else {
      param_1[0x30] = *__s;
      if (__s[1] == '\0') {
        pcVar6 = param_1 + 0x31;
        bVar2 = true;
        sVar7 = 1;
      }
      else {
        param_1[0x31] = __s[1];
        if (__s[2] == '\0') {
          pcVar6 = param_1 + 0x32;
          bVar2 = true;
          sVar7 = 2;
        }
        else {
          param_1[0x32] = __s[2];
          if (__s[3] == '\0') {
            pcVar6 = param_1 + 0x33;
            bVar2 = true;
            sVar7 = 3;
          }
          else {
            param_1[0x33] = __s[3];
            if (__s[4] == '\0') {
              pcVar6 = param_1 + 0x34;
              bVar2 = true;
              sVar7 = 4;
            }
            else {
              pcVar6 = param_1 + 0x35;
              param_1[0x34] = __s[4];
              bVar2 = true;
              sVar7 = 5;
            }
          }
        }
      }
    }
    *pcVar6 = '\0';
    sVar3 = strlen(__s);
    if ((!bVar2) || (sVar7 != sVar3)) {
      return 0;
    }
  }
  return 1;
}


