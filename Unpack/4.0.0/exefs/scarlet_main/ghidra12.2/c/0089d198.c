/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089d198; name: FUN_0089d198
 */


void FUN_0089d198(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  long *plVar7;
  
  switch(*(undefined4 *)(param_4 + 0x88)) {
  case 0:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x10,4,*(undefined8 *)PTR_DAT_047d2268);
    if (plVar2 != (long *)0x0) {
      puVar5 = PTR_DAT_047d22b0;
LAB_0089d5c4:
      *(undefined1 *)(plVar2 + 1) = 0;
      *plVar2 = (long)(puVar5 + 0x10);
    }
    break;
  case 1:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x18,4,*(undefined8 *)PTR_DAT_047d2268);
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)(plVar2 + 1) = 0;
      puVar5 = PTR_DAT_047d22b8;
LAB_0089d278:
      *plVar2 = (long)(puVar5 + 0x10);
      plVar2[2] = 0;
    }
    goto LAB_0089d284;
  case 2:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x18,4,*(undefined8 *)PTR_DAT_047d2268);
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)(plVar2 + 1) = 0;
      puVar5 = PTR_DAT_047d22c0;
      goto LAB_0089d278;
    }
LAB_0089d284:
    plVar2[2] = param_3;
    break;
  case 3:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x10,4,*(undefined8 *)PTR_DAT_047d2268);
    if (plVar2 != (long *)0x0) {
      puVar5 = PTR_DAT_047d22c8;
      goto LAB_0089d5c4;
    }
    break;
  case 4:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x28,4,*(undefined8 *)PTR_DAT_047d2268);
    puVar5 = PTR_DAT_047d22d0;
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *plVar2 = (long)(puVar5 + 0x10);
      plVar2[4] = 0;
    }
    *(undefined1 *)(plVar2 + 1) = 5;
    plVar2[2] = param_3;
    plVar2[3] = param_4 + 0x18;
    break;
  case 5:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x28,4,*(undefined8 *)PTR_DAT_047d2268);
    puVar5 = PTR_DAT_047d22d0;
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *plVar2 = (long)(puVar5 + 0x10);
      plVar2[4] = 0;
    }
    lVar3 = *(long *)(param_4 + 0x90);
    *(undefined1 *)(plVar2 + 1) = 5;
    plVar2[4] = lVar3;
    plVar2[2] = lVar3 + 0x38;
    plVar2[3] = lVar3 + 0x70;
    break;
  case 6:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x38,4,*(undefined8 *)PTR_DAT_047d2268);
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)(plVar2 + 1) = 0;
      puVar5 = PTR_DAT_047d22d8;
      *(undefined8 *)((long)plVar2 + 0x24) = 0;
      *plVar2 = (long)(puVar5 + 0x10);
      *(undefined8 *)((long)plVar2 + 0x2c) = 0;
    }
    pcVar4 = *(char **)(param_4 + 0x90);
    if (*pcVar4 == '\0') {
      plVar7 = (long *)((long)plVar2 + 9);
      pcVar6 = pcVar4;
    }
    else {
      *(char *)((long)plVar2 + 9) = *pcVar4;
      cVar1 = pcVar4[1];
      if (cVar1 == '\0') {
        plVar7 = (long *)((long)plVar2 + 10);
        pcVar6 = pcVar4 + 1;
      }
      else {
        *(char *)((long)plVar2 + 10) = cVar1;
        cVar1 = pcVar4[2];
        if (cVar1 == '\0') {
          plVar7 = (long *)((long)plVar2 + 0xb);
          pcVar6 = pcVar4 + 2;
        }
        else {
          *(char *)((long)plVar2 + 0xb) = cVar1;
          cVar1 = pcVar4[3];
          if (cVar1 == '\0') {
            plVar7 = (long *)((long)plVar2 + 0xc);
            pcVar6 = pcVar4 + 3;
          }
          else {
            *(char *)((long)plVar2 + 0xc) = cVar1;
            cVar1 = pcVar4[4];
            if (cVar1 == '\0') {
              plVar7 = (long *)((long)plVar2 + 0xd);
              pcVar6 = pcVar4 + 4;
            }
            else {
              *(char *)((long)plVar2 + 0xd) = cVar1;
              cVar1 = pcVar4[5];
              if (cVar1 == '\0') {
                plVar7 = (long *)((long)plVar2 + 0xe);
                pcVar6 = pcVar4 + 5;
              }
              else {
                *(char *)((long)plVar2 + 0xe) = cVar1;
                cVar1 = pcVar4[6];
                if (cVar1 == '\0') {
                  plVar7 = (long *)((long)plVar2 + 0xf);
                  pcVar6 = pcVar4 + 6;
                }
                else {
                  *(char *)((long)plVar2 + 0xf) = cVar1;
                  cVar1 = pcVar4[7];
                  if (cVar1 == '\0') {
                    plVar7 = plVar2 + 2;
                    pcVar6 = pcVar4 + 7;
                  }
                  else {
                    *(char *)(plVar2 + 2) = cVar1;
                    cVar1 = pcVar4[8];
                    if (cVar1 == '\0') {
                      plVar7 = (long *)((long)plVar2 + 0x11);
                      pcVar6 = pcVar4 + 8;
                    }
                    else {
                      *(char *)((long)plVar2 + 0x11) = cVar1;
                      cVar1 = pcVar4[9];
                      if (cVar1 == '\0') {
                        plVar7 = (long *)((long)plVar2 + 0x12);
                        pcVar6 = pcVar4 + 9;
                      }
                      else {
                        *(char *)((long)plVar2 + 0x12) = cVar1;
                        cVar1 = pcVar4[10];
                        if (cVar1 == '\0') {
                          plVar7 = (long *)((long)plVar2 + 0x13);
                          pcVar6 = pcVar4 + 10;
                        }
                        else {
                          *(char *)((long)plVar2 + 0x13) = cVar1;
                          cVar1 = pcVar4[0xb];
                          if (cVar1 == '\0') {
                            plVar7 = (long *)((long)plVar2 + 0x14);
                            pcVar6 = pcVar4 + 0xb;
                          }
                          else {
                            *(char *)((long)plVar2 + 0x14) = cVar1;
                            cVar1 = pcVar4[0xc];
                            if (cVar1 == '\0') {
                              plVar7 = (long *)((long)plVar2 + 0x15);
                              pcVar6 = pcVar4 + 0xc;
                            }
                            else {
                              *(char *)((long)plVar2 + 0x15) = cVar1;
                              cVar1 = pcVar4[0xd];
                              if (cVar1 == '\0') {
                                plVar7 = (long *)((long)plVar2 + 0x16);
                                pcVar6 = pcVar4 + 0xd;
                              }
                              else {
                                *(char *)((long)plVar2 + 0x16) = cVar1;
                                cVar1 = pcVar4[0xe];
                                if (cVar1 == '\0') {
                                  plVar7 = (long *)((long)plVar2 + 0x17);
                                  pcVar6 = pcVar4 + 0xe;
                                }
                                else {
                                  *(char *)((long)plVar2 + 0x17) = cVar1;
                                  cVar1 = pcVar4[0xf];
                                  if (cVar1 == '\0') {
                                    plVar7 = plVar2 + 3;
                                    pcVar6 = pcVar4 + 0xf;
                                  }
                                  else {
                                    *(char *)(plVar2 + 3) = cVar1;
                                    cVar1 = pcVar4[0x10];
                                    if (cVar1 == '\0') {
                                      plVar7 = (long *)((long)plVar2 + 0x19);
                                      pcVar6 = pcVar4 + 0x10;
                                    }
                                    else {
                                      *(char *)((long)plVar2 + 0x19) = cVar1;
                                      cVar1 = pcVar4[0x11];
                                      if (cVar1 == '\0') {
                                        plVar7 = (long *)((long)plVar2 + 0x1a);
                                        pcVar6 = pcVar4 + 0x11;
                                      }
                                      else {
                                        *(char *)((long)plVar2 + 0x1a) = cVar1;
                                        cVar1 = pcVar4[0x12];
                                        if (cVar1 == '\0') {
                                          plVar7 = (long *)((long)plVar2 + 0x1b);
                                          pcVar6 = pcVar4 + 0x12;
                                        }
                                        else {
                                          *(char *)((long)plVar2 + 0x1b) = cVar1;
                                          cVar1 = pcVar4[0x13];
                                          if (cVar1 == '\0') {
                                            plVar7 = (long *)((long)plVar2 + 0x1c);
                                            pcVar6 = pcVar4 + 0x13;
                                          }
                                          else {
                                            *(char *)((long)plVar2 + 0x1c) = cVar1;
                                            cVar1 = pcVar4[0x14];
                                            if (cVar1 == '\0') {
                                              plVar7 = (long *)((long)plVar2 + 0x1d);
                                              pcVar6 = pcVar4 + 0x14;
                                            }
                                            else {
                                              *(char *)((long)plVar2 + 0x1d) = cVar1;
                                              cVar1 = pcVar4[0x15];
                                              if (cVar1 == '\0') {
                                                plVar7 = (long *)((long)plVar2 + 0x1e);
                                                pcVar6 = pcVar4 + 0x15;
                                              }
                                              else {
                                                *(char *)((long)plVar2 + 0x1e) = cVar1;
                                                cVar1 = pcVar4[0x16];
                                                if (cVar1 == '\0') {
                                                  plVar7 = (long *)((long)plVar2 + 0x1f);
                                                  pcVar6 = pcVar4 + 0x16;
                                                }
                                                else {
                                                  *(char *)((long)plVar2 + 0x1f) = cVar1;
                                                  cVar1 = pcVar4[0x17];
                                                  if (cVar1 == '\0') {
                                                    plVar7 = plVar2 + 4;
                                                    pcVar6 = pcVar4 + 0x17;
                                                  }
                                                  else {
                                                    plVar7 = (long *)((long)plVar2 + 0x21);
                                                    *(char *)(plVar2 + 4) = cVar1;
                                                    pcVar6 = pcVar4 + 0x18;
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
    *(undefined1 *)plVar7 = 0;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)((long)plVar2 + 0x24) = *(undefined4 *)(param_4 + 0x8c);
    *(undefined4 *)(plVar2 + 6) = 1;
    if (*(float *)(plVar2 + 5) != *(float *)(pcVar4 + 0x24)) {
      *(float *)(plVar2 + 5) = *(float *)(pcVar4 + 0x24);
    }
    break;
  case 7:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x20,4,*(undefined8 *)PTR_DAT_047d2268);
    puVar5 = PTR_DAT_047d22e0;
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)(plVar2 + 1) = 0;
      *plVar2 = (long)(puVar5 + 0x10);
      plVar2[2] = param_3;
      plVar2[3] = param_4 + 0x38;
    }
    break;
  case 8:
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x10,4,*(undefined8 *)PTR_DAT_047d2268);
    if (plVar2 != (long *)0x0) {
      puVar5 = PTR_DAT_047d22e8;
      goto LAB_0089d5c4;
    }
    break;
  default:
    goto switchD_0089d1d4_default;
  }
  *(long **)(param_2 + 0x30) = plVar2;
switchD_0089d1d4_default:
  return;
}


