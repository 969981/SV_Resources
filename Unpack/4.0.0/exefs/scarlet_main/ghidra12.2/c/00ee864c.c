/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee864c; name: FUN_00ee864c
 */


void FUN_00ee864c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *local_68;
  long *local_48;
  
  lVar12 = param_1[0x81];
  *param_1 = &DAT_045d08a8;
  param_1[4] = &PTR_LAB_045d08e0;
  param_1[0x81] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x82);
  }
  lVar12 = param_1[0x7d];
  param_1[0x7d] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x7e);
  }
  lVar12 = param_1[0x79];
  param_1[0x79] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x7a);
  }
  lVar12 = param_1[0x75];
  param_1[0x75] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x76);
  }
  lVar12 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x72);
  }
  lVar12 = param_1[0x6d];
  param_1[0x6d] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x6e);
  }
  lVar12 = param_1[0x69];
  param_1[0x69] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x6a);
  }
  lVar12 = param_1[0x65];
  param_1[0x65] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x66);
  }
  lVar12 = param_1[0x61];
  param_1[0x61] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x62);
  }
  lVar12 = param_1[0x5d];
  param_1[0x5d] = 0;
  if (lVar12 != 0) {
    FUN_02708f6c(param_1 + 0x5e);
  }
  pcVar13 = (code *)param_1[0x4d];
  if (pcVar13 != (code *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar13)(param_1 + 0x50);
  }
  FUN_00ee99ec(param_1 + 0x40);
  lVar12 = param_1[0x3c];
  param_1[0x3c] = 0;
  if (lVar12 != 0) {
    FUN_00eeae00(param_1 + 0x3d);
  }
  lVar12 = param_1[0x38];
  param_1[0x38] = 0;
  if (lVar12 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    FUN_00ee9b24(lVar12);
    plVar10 = (long *)param_1[0x39];
    uVar4 = param_1[0x3a];
    uVar15 = param_1[0x3b];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,uVar4,uVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,uVar4,uVar15);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar16 = (long *)*plVar10;
        plVar3 = plVar10;
        if (plVar10[600] != 0) {
          plVar3 = plVar10 + plVar10[600] * 3;
        }
        if (plVar3 == plVar10) {
          uVar17 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10);
            plVar16 = (long *)*plVar10;
          }
          plVar2 = plVar10 + 3;
          if (plVar3 == plVar2) {
            uVar17 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar7 = (long *)*plVar2 != plVar16;
            if (bVar7) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10 + 3);
              plVar16 = (long *)plVar10[3];
            }
            uVar17 = (ulong)bVar7;
            plVar2 = plVar10 + 6;
            if (plVar3 == plVar2) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 6);
                plVar16 = (long *)plVar10[6];
                uVar17 = 2;
              }
              plVar2 = plVar10 + 9;
              if (plVar3 == plVar2) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 9);
                  plVar16 = (long *)plVar10[9];
                  uVar17 = 3;
                }
                plVar2 = plVar10 + 0xc;
                if (plVar3 == plVar2) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xc);
                    plVar16 = (long *)plVar10[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar10 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xf);
                      plVar16 = (long *)plVar10[0xf];
                      uVar17 = 5;
                    }
                    uVar9 = 6;
                    for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar2);
                        plVar16 = (long *)*plVar2;
                        uVar17 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  lVar12 = param_1[0x34];
  param_1[0x34] = 0;
  if (lVar12 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    lVar8 = *(long *)(lVar12 + 0x20);
    if (lVar8 != 0) {
      lVar14 = *(long *)(lVar12 + 0x28);
      if (lVar14 == lVar8) {
        lVar14 = lVar8;
      }
      else {
        do {
          plVar10 = *(long **)(lVar14 + -8);
          if (plVar10 != (long *)0x0) {
            plVar3 = plVar10 + 5;
            do {
              lVar11 = *plVar3;
              iVar1 = (int)lVar11 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *(int *)plVar3 = iVar1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
            else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          lVar14 = lVar14 + -0x10;
        } while (lVar14 != lVar8);
        lVar14 = *(long *)(lVar12 + 0x20);
      }
      plVar10 = *(long **)(lVar12 + 0x38);
      *(long *)(lVar12 + 0x28) = lVar8;
      lVar8 = *(long *)(lVar12 + 0x30) - lVar14;
      uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar14,lVar8,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar14,lVar8,8);
      }
    }
    plVar10 = (long *)param_1[0x35];
    uVar4 = param_1[0x36];
    uVar15 = param_1[0x37];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,uVar4,uVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,uVar4,uVar15);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar16 = (long *)*plVar10;
        plVar3 = plVar10;
        if (plVar10[600] != 0) {
          plVar3 = plVar10 + plVar10[600] * 3;
        }
        if (plVar3 == plVar10) {
          uVar17 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10);
            plVar16 = (long *)*plVar10;
          }
          plVar2 = plVar10 + 3;
          if (plVar3 == plVar2) {
            uVar17 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar7 = (long *)*plVar2 != plVar16;
            if (bVar7) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10 + 3);
              plVar16 = (long *)plVar10[3];
            }
            uVar17 = (ulong)bVar7;
            plVar2 = plVar10 + 6;
            if (plVar3 == plVar2) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 6);
                plVar16 = (long *)plVar10[6];
                uVar17 = 2;
              }
              plVar2 = plVar10 + 9;
              if (plVar3 == plVar2) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 9);
                  plVar16 = (long *)plVar10[9];
                  uVar17 = 3;
                }
                plVar2 = plVar10 + 0xc;
                if (plVar3 == plVar2) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xc);
                    plVar16 = (long *)plVar10[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar10 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xf);
                      plVar16 = (long *)plVar10[0xf];
                      uVar17 = 5;
                    }
                    uVar9 = 6;
                    for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar2);
                        plVar16 = (long *)*plVar2;
                        uVar17 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  lVar12 = param_1[0x30];
  param_1[0x30] = 0;
  if (lVar12 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    FUN_00eea34c(lVar12);
    plVar10 = (long *)param_1[0x31];
    uVar4 = param_1[0x32];
    uVar15 = param_1[0x33];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,uVar4,uVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,uVar4,uVar15);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar16 = (long *)*plVar10;
        plVar3 = plVar10;
        if (plVar10[600] != 0) {
          plVar3 = plVar10 + plVar10[600] * 3;
        }
        if (plVar3 == plVar10) {
          uVar17 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10);
            plVar16 = (long *)*plVar10;
          }
          plVar2 = plVar10 + 3;
          if (plVar3 == plVar2) {
            uVar17 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar7 = (long *)*plVar2 != plVar16;
            if (bVar7) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10 + 3);
              plVar16 = (long *)plVar10[3];
            }
            uVar17 = (ulong)bVar7;
            plVar2 = plVar10 + 6;
            if (plVar3 == plVar2) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 6);
                plVar16 = (long *)plVar10[6];
                uVar17 = 2;
              }
              plVar2 = plVar10 + 9;
              if (plVar3 == plVar2) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 9);
                  plVar16 = (long *)plVar10[9];
                  uVar17 = 3;
                }
                plVar2 = plVar10 + 0xc;
                if (plVar3 == plVar2) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xc);
                    plVar16 = (long *)plVar10[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar10 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xf);
                      plVar16 = (long *)plVar10[0xf];
                      uVar17 = 5;
                    }
                    uVar9 = 6;
                    for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar2);
                        plVar16 = (long *)*plVar2;
                        uVar17 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  if (param_1[0x29] != 0) {
    FUN_00eeb244(param_1 + 0x29);
    lVar8 = param_1[0x29];
    lVar12 = param_1[0x2b];
    plVar10 = (long *)param_1[0x2c];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar12 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar12 - lVar8,8);
    }
  }
  FUN_00ee97a4(param_1 + 0x22);
  FUN_00ee97a4(param_1 + 0x1b);
  FUN_00ee98c8(param_1 + 0x14);
  FUN_00ee98c8(param_1 + 0xd);
  lVar12 = param_1[9];
  param_1[9] = 0;
  if (lVar12 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar5 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    FUN_00eeabac(lVar12);
    plVar10 = (long *)param_1[10];
    uVar4 = param_1[0xb];
    uVar15 = param_1[0xc];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,uVar4,uVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,uVar4,uVar15);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar16 = (long *)*plVar10;
        plVar3 = plVar10;
        if (plVar10[600] != 0) {
          plVar3 = plVar10 + plVar10[600] * 3;
        }
        if (plVar3 == plVar10) {
          uVar17 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10);
            plVar16 = (long *)*plVar10;
          }
          plVar2 = plVar10 + 3;
          if (plVar3 == plVar2) {
            uVar17 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar7 = (long *)*plVar2 != plVar16;
            if (bVar7) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10 + 3);
              plVar16 = (long *)plVar10[3];
            }
            uVar17 = (ulong)bVar7;
            plVar2 = plVar10 + 6;
            if (plVar3 == plVar2) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 6);
                plVar16 = (long *)plVar10[6];
                uVar17 = 2;
              }
              plVar2 = plVar10 + 9;
              if (plVar3 == plVar2) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 9);
                  plVar16 = (long *)plVar10[9];
                  uVar17 = 3;
                }
                plVar2 = plVar10 + 0xc;
                if (plVar3 == plVar2) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xc);
                    plVar16 = (long *)plVar10[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar10 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xf);
                      plVar16 = (long *)plVar10[0xf];
                      uVar17 = 5;
                    }
                    uVar9 = 6;
                    for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar2);
                        plVar16 = (long *)*plVar2;
                        uVar17 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 7));
  return;
}


