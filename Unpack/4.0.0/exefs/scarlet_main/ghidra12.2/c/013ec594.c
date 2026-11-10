/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013ec594; name: FUN_013ec594
 */


void FUN_013ec594(undefined8 *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long *local_70;
  long *local_68;
  
  *param_1 = &DAT_04600c08;
  param_1[4] = &PTR_LAB_04600da8;
  param_1[5] = &DAT_04600ed0;
  param_1[0x24] = &PTR_LAB_04600f88;
  param_1[6] = &PTR_LAB_04600f28;
  param_1[7] = &PTR_LAB_04600f50;
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar17 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar17;
  if (param_1[0x61] != 0) {
    FUN_013eda3c(param_1[0x61],param_1 + 0x24);
  }
  if (*(char *)(param_1 + 0x62) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x29));
    lVar10 = param_1[0x44];
    lVar12 = param_1[0x45];
    if (lVar12 != lVar10) {
      if (*(long **)(lVar12 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar12 + -0x10) + 0x20))();
      }
      if (lVar12 + -0x28 != lVar10) {
        do {
          if (*(long **)(lVar12 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar12 + -0x38) + 0x20))();
          }
          lVar12 = lVar12 + -0x28;
        } while (lVar10 + 0x28 != lVar12);
      }
    }
    param_1[0x45] = lVar10;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x29));
    nn::os::LockMutex((MutexType *)(param_1 + 0x25));
    lVar10 = param_1[0x3d];
    lVar12 = param_1[0x3e];
    if (lVar10 != lVar12) {
      FUN_013ee33c(*(undefined8 *)(lVar17 + 0x220),*(undefined4 *)(lVar10 + 0x20));
      if (*(code **)(lVar10 + 0x30) != (code *)0x0) {
        local_68 = (long *)CONCAT44(local_68._4_4_,*(undefined4 *)(lVar10 + 0x20));
        (**(code **)(lVar10 + 0x30))(lVar10 + 0x50,&local_68);
      }
      while (lVar3 = lVar10, lVar10 = lVar3 + 0xb0, lVar10 != lVar12) {
        FUN_013ee33c(*(undefined8 *)(lVar17 + 0x220),*(undefined4 *)(lVar3 + 0xd0));
        if (*(code **)(lVar3 + 0xe0) != (code *)0x0) {
          local_68 = (long *)CONCAT44(local_68._4_4_,*(undefined4 *)(lVar3 + 0xd0));
          (**(code **)(lVar3 + 0xe0))(lVar3 + 0x100,&local_68);
        }
      }
      lVar10 = param_1[0x3d];
      lVar12 = param_1[0x3e];
      if (lVar12 != lVar10) {
        pcVar8 = *(code **)(lVar12 + -0x78);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar12 + -0x70) = 0;
          *(undefined8 *)(lVar12 + -0x68) = 0;
          *(undefined8 *)(lVar12 + -0x80) = 0;
          *(undefined8 *)(lVar12 + -0x78) = 0;
          (*pcVar8)(lVar12 + -0x60);
        }
        if (*(long **)(lVar12 + -0x98) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + -0x98) + 0x20))();
        }
        if (lVar12 + -0xb0 != lVar10) {
          pcVar8 = *(code **)(lVar12 + -0x128);
          if (pcVar8 != (code *)0x0) {
            *(undefined8 *)(lVar12 + -0x118) = 0;
            *(undefined8 *)(lVar12 + -0x120) = 0;
            *(undefined8 *)(lVar12 + -0x128) = 0;
            *(undefined8 *)(lVar12 + -0x130) = 0;
            (*pcVar8)(lVar12 + -0x110);
          }
          if (*(long **)(lVar12 + -0x148) != (long *)0x0) {
            (**(code **)(**(long **)(lVar12 + -0x148) + 0x20))();
          }
          if (lVar12 + -0x160 != lVar10) {
            do {
              pcVar8 = *(code **)(lVar12 + -0x1d8);
              if (pcVar8 != (code *)0x0) {
                *(undefined8 *)(lVar12 + -0x1d0) = 0;
                *(undefined8 *)(lVar12 + -0x1c8) = 0;
                *(undefined8 *)(lVar12 + -0x1e0) = 0;
                *(undefined8 *)(lVar12 + -0x1d8) = 0;
                (*pcVar8)(lVar12 + -0x1c0);
              }
              if (*(long **)(lVar12 + -0x1f8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar12 + -0x1f8) + 0x20))();
              }
              lVar12 = lVar12 + -0xb0;
            } while (lVar10 + 0x160 != lVar12);
          }
        }
      }
    }
    param_1[0x3e] = lVar10;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x25));
  }
  else {
    FUN_013ee528(param_1);
  }
  plVar15 = (long *)param_1[0x4b];
  if (plVar15 != (long *)0x0) {
    if (plVar15[0xb] != 0) {
      puVar9 = (undefined8 *)plVar15[6];
      if (puVar9 != (undefined8 *)0x0) {
        plVar11 = (long *)*puVar9;
        if ((long *)puVar9[3] != (long *)0x0) {
          (**(code **)(*(long *)puVar9[3] + 0x20))();
        }
        plVar6 = (long *)plVar15[7];
        uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar9,0x20,8);
        }
        else {
          FUN_00c48fe8(plVar6,puVar9,0x20,8);
        }
        if (plVar11 != (long *)0x0) {
          plVar6 = (long *)*plVar11;
          if ((long *)plVar11[3] != (long *)0x0) {
            (**(code **)(*(long *)plVar11[3] + 0x20))();
          }
          plVar13 = (long *)plVar15[7];
          uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,0x20,8);
          }
          else {
            FUN_00c48fe8(plVar13,plVar11,0x20,8);
          }
          while (plVar6 != (long *)0x0) {
            plVar11 = (long *)*plVar6;
            if ((long *)plVar6[3] != (long *)0x0) {
              (**(code **)(*(long *)plVar6[3] + 0x20))();
            }
            plVar13 = (long *)plVar15[7];
            uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
            if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar13 + 0x18))(plVar13,plVar6,0x20,8);
              plVar6 = plVar11;
            }
            else {
              FUN_00c48fe8(plVar13,plVar6,0x20,8);
              plVar6 = plVar11;
            }
          }
        }
      }
      lVar10 = plVar15[1];
      plVar15[6] = 0;
      if ((((lVar10 != 0) && (*(undefined8 *)*plVar15 = 0, lVar10 != 1)) &&
          (*(undefined8 *)(*plVar15 + 8) = 0, lVar10 != 2)) &&
         ((*(undefined8 *)(*plVar15 + 0x10) = 0, lVar10 != 3 &&
          (*(undefined8 *)(*plVar15 + 0x18) = 0, lVar10 != 4)))) {
        lVar12 = 4;
        do {
          *(undefined8 *)(*plVar15 + lVar12 * 8) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
      }
      plVar15[0xb] = 0;
    }
    plVar15 = (long *)param_1[0x53];
    plVar11 = (long *)param_1[0x54];
    if (plVar11 != plVar15) {
      plVar6 = (long *)plVar11[-1];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      if (plVar11 + -1 != plVar15) {
        plVar6 = (long *)plVar11[-2];
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        if (plVar11 + -2 != plVar15) {
          plVar6 = (long *)plVar11[-3];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
          }
          if (plVar11 + -3 != plVar15) {
            do {
              if ((long *)plVar11[-4] != (long *)0x0) {
                (**(code **)(*(long *)plVar11[-4] + 0x20))();
              }
              plVar11 = plVar11 + -1;
            } while (plVar15 + 3 != plVar11);
          }
        }
      }
    }
    lVar10 = param_1[0x4b];
    param_1[0x54] = plVar15;
    param_1[0x4b] = 0;
    if (lVar10 != 0) {
      FUN_013edd68(param_1 + 0x4c);
    }
  }
  plVar15 = (long *)param_1[0x4f];
  if (plVar15 != (long *)0x0) {
    if (plVar15[0xb] != 0) {
      puVar9 = (undefined8 *)plVar15[6];
      if (puVar9 != (undefined8 *)0x0) {
        plVar6 = (long *)plVar15[7];
        plVar11 = (long *)*puVar9;
        uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar9,0x20,8);
        }
        else {
          FUN_00c48fe8(plVar6,puVar9,0x20,8);
        }
        if (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar15[7];
          plVar6 = (long *)*plVar11;
          uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,0x20,8);
          }
          else {
            FUN_00c48fe8(plVar13,plVar11,0x20,8);
          }
          while (plVar6 != (long *)0x0) {
            plVar11 = (long *)plVar15[7];
            plVar13 = (long *)*plVar6;
            uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
            if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar11 + 0x18))(plVar11,plVar6,0x20,8);
              plVar6 = plVar13;
            }
            else {
              FUN_00c48fe8(plVar11,plVar6,0x20,8);
              plVar6 = plVar13;
            }
          }
        }
      }
      lVar10 = plVar15[1];
      plVar15[6] = 0;
      if ((((lVar10 != 0) && (*(undefined8 *)*plVar15 = 0, lVar10 != 1)) &&
          (*(undefined8 *)(*plVar15 + 8) = 0, lVar10 != 2)) &&
         (((*(undefined8 *)(*plVar15 + 0x10) = 0, lVar10 != 3 &&
           (*(undefined8 *)(*plVar15 + 0x18) = 0, lVar10 != 4)) &&
          (*(undefined8 *)(*plVar15 + 0x20) = 0, lVar10 != 5)))) {
        lVar12 = 5;
        do {
          *(undefined8 *)(*plVar15 + lVar12 * 8) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
      }
      plVar15[0xb] = 0;
    }
    plVar15 = (long *)param_1[0x5a];
    plVar11 = (long *)param_1[0x5b];
    if (plVar11 != plVar15) {
      plVar6 = (long *)plVar11[-1];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      if (plVar11 + -1 != plVar15) {
        plVar6 = (long *)plVar11[-2];
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        if (plVar11 + -2 != plVar15) {
          plVar6 = (long *)plVar11[-3];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
          }
          if (plVar11 + -3 != plVar15) {
            do {
              if ((long *)plVar11[-4] != (long *)0x0) {
                (**(code **)(*(long *)plVar11[-4] + 0x20))();
              }
              plVar11 = plVar11 + -1;
            } while (plVar15 + 3 != plVar11);
          }
        }
      }
    }
    param_1[0x5b] = plVar15;
    lVar10 = param_1[0x4f];
    param_1[0x4f] = 0;
    if (lVar10 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar2 = *(int *)(lVar12 + 0x12c8);
      iVar5 = iVar2 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar5;
      if (*(int *)(lVar12 + 0x12cc) <= iVar2) {
        *(int *)(lVar12 + 0x12cc) = iVar5;
      }
      FUN_013edb88(lVar10);
      plVar15 = (long *)param_1[0x50];
      uVar14 = param_1[0x51];
      uVar16 = param_1[0x52];
      uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,uVar14,uVar16);
      }
      else {
        FUN_00c48fe8(plVar15,lVar10,uVar14,uVar16);
      }
      lVar10 = FUN_00c4e600();
      iVar5 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar5;
      if (iVar5 == 0) {
        plVar15 = (long *)FUN_00c4e600();
        if (plVar15[600] != 0) {
          local_70 = plVar15 + plVar15[600] * 3;
          local_68 = plVar15;
          FUN_00c4ea30(&local_68,&local_70);
          plVar6 = (long *)*plVar15;
          plVar11 = plVar15;
          if (plVar15[600] != 0) {
            plVar11 = plVar15 + plVar15[600] * 3;
          }
          if (plVar11 == plVar15) {
            uVar18 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar6) {
              (**(code **)(*plVar6 + 0x100))(plVar6,plVar15,plVar15);
              plVar6 = (long *)*plVar15;
            }
            plVar13 = plVar15 + 3;
            if (plVar11 == plVar13) {
              uVar18 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              bVar4 = (long *)*plVar13 != plVar6;
              if (bVar4) {
                (**(code **)(*plVar6 + 0x100))(plVar6,plVar15,plVar15 + 3);
                plVar6 = (long *)plVar15[3];
              }
              uVar18 = (ulong)bVar4;
              plVar13 = plVar15 + 6;
              if (plVar11 == plVar13) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                if ((long *)*plVar13 != plVar6) {
                  (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + 6);
                  plVar6 = (long *)plVar15[6];
                  uVar18 = 2;
                }
                plVar13 = plVar15 + 9;
                if (plVar11 == plVar13) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar13 + 0xd0))();
                  if ((long *)*plVar13 != plVar6) {
                    (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + 9);
                    plVar6 = (long *)plVar15[9];
                    uVar18 = 3;
                  }
                  plVar13 = plVar15 + 0xc;
                  if (plVar11 == plVar13) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar6) {
                      (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + 0xc);
                      plVar6 = (long *)plVar15[0xc];
                      uVar18 = 4;
                    }
                    plVar13 = plVar15 + 0xf;
                    if (plVar11 == plVar13) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar13 + 0xd0))();
                      if ((long *)*plVar13 != plVar6) {
                        (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + 0xf);
                        plVar6 = (long *)plVar15[0xf];
                        uVar18 = 5;
                      }
                      uVar7 = 6;
                      for (plVar13 = plVar15 + 0x12; plVar11 != plVar13; plVar13 = plVar13 + 3) {
                        (**(code **)(*(long *)*plVar13 + 0xd0))();
                        if ((long *)*plVar13 != plVar6) {
                          (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar13);
                          plVar6 = (long *)*plVar13;
                          uVar18 = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + uVar7 * 3);
          plVar15[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
  }
  pMVar1 = (MutexType *)(param_1 + 0x35);
  nn::os::LockMutex(pMVar1);
  if ((*(char *)(param_1 + 100) != '\0') && (*(char *)((long)param_1 + 0x322) == '\0')) {
    plVar15 = *(long **)(*(long *)(lVar17 + 0x200) + 0x60);
    (**(code **)(*plVar15 + 0x68))(plVar15,param_1[99]);
  }
  nn::os::UnlockMutex(pMVar1);
  pcVar8 = (code *)param_1[0x6d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    (*pcVar8)(param_1 + 0x70);
  }
  plVar15 = (long *)param_1[0x5a];
  if (plVar15 != (long *)0x0) {
    plVar11 = (long *)param_1[0x5b];
    if (plVar11 == plVar15) {
      plVar11 = plVar15;
    }
    else {
      plVar6 = (long *)plVar11[-1];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      if (plVar11 + -1 != plVar15) {
        plVar6 = (long *)plVar11[-2];
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        if (plVar11 + -2 != plVar15) {
          plVar6 = (long *)plVar11[-3];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
          }
          if (plVar11 + -3 != plVar15) {
            do {
              if ((long *)plVar11[-4] != (long *)0x0) {
                (**(code **)(*(long *)plVar11[-4] + 0x20))();
              }
              plVar11 = plVar11 + -1;
            } while (plVar15 + 3 != plVar11);
          }
        }
      }
      plVar11 = (long *)param_1[0x5a];
    }
    lVar17 = param_1[0x5c];
    param_1[0x5b] = plVar15;
    plVar15 = (long *)param_1[0x5d];
    uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar11,lVar17 - (long)plVar11,8);
    }
    else {
      FUN_00c48fe8(plVar15,plVar11,lVar17 - (long)plVar11,8);
    }
  }
  plVar15 = (long *)param_1[0x53];
  if (plVar15 != (long *)0x0) {
    plVar11 = (long *)param_1[0x54];
    if (plVar11 == plVar15) {
      plVar11 = plVar15;
    }
    else {
      plVar6 = (long *)plVar11[-1];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      if (plVar11 + -1 != plVar15) {
        plVar6 = (long *)plVar11[-2];
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        if (plVar11 + -2 != plVar15) {
          plVar6 = (long *)plVar11[-3];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
          }
          if (plVar11 + -3 != plVar15) {
            do {
              if ((long *)plVar11[-4] != (long *)0x0) {
                (**(code **)(*(long *)plVar11[-4] + 0x20))();
              }
              plVar11 = plVar11 + -1;
            } while (plVar15 + 3 != plVar11);
          }
        }
      }
      plVar11 = (long *)param_1[0x53];
    }
    lVar17 = param_1[0x55];
    param_1[0x54] = plVar15;
    plVar15 = (long *)param_1[0x56];
    uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar11,lVar17 - (long)plVar11,8);
    }
    else {
      FUN_00c48fe8(plVar15,plVar11,lVar17 - (long)plVar11,8);
    }
  }
  lVar17 = param_1[0x4f];
  param_1[0x4f] = 0;
  if (lVar17 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar2 = *(int *)(lVar10 + 0x12c8);
    iVar5 = iVar2 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar5;
    if (*(int *)(lVar10 + 0x12cc) <= iVar2) {
      *(int *)(lVar10 + 0x12cc) = iVar5;
    }
    FUN_013edb88(lVar17);
    plVar15 = (long *)param_1[0x50];
    uVar14 = param_1[0x51];
    uVar16 = param_1[0x52];
    uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar17,uVar14,uVar16);
    }
    else {
      FUN_00c48fe8(plVar15,lVar17,uVar14,uVar16);
    }
    lVar17 = FUN_00c4e600();
    iVar5 = *(int *)(lVar17 + 0x12c8) + -1;
    *(int *)(lVar17 + 0x12c8) = iVar5;
    if (iVar5 == 0) {
      plVar15 = (long *)FUN_00c4e600();
      if (plVar15[600] != 0) {
        local_70 = plVar15 + plVar15[600] * 3;
        local_68 = plVar15;
        FUN_00c4ea30(&local_68,&local_70);
        plVar6 = (long *)*plVar15;
        plVar11 = plVar15;
        if (plVar15[600] != 0) {
          plVar11 = plVar15 + plVar15[600] * 3;
        }
        if (plVar11 == plVar15) {
          uVar18 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar15 + 0xd0))();
          if ((long *)*plVar15 != plVar6) {
            (**(code **)(*plVar6 + 0x100))(plVar6,plVar15,plVar15);
            plVar6 = (long *)*plVar15;
          }
          plVar13 = plVar15 + 3;
          if (plVar11 == plVar13) {
            uVar18 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            bVar4 = (long *)*plVar13 != plVar6;
            if (bVar4) {
              (**(code **)(*plVar6 + 0x100))(plVar6,plVar15,plVar15 + 3);
              plVar6 = (long *)plVar15[3];
            }
            uVar18 = (ulong)bVar4;
            plVar13 = plVar15 + 6;
            if (plVar11 == plVar13) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar6) {
                (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + 6);
                plVar6 = (long *)plVar15[6];
                uVar18 = 2;
              }
              plVar13 = plVar15 + 9;
              if (plVar11 == plVar13) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar13 + 0xd0))();
                if ((long *)*plVar13 != plVar6) {
                  (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + 9);
                  plVar6 = (long *)plVar15[9];
                  uVar18 = 3;
                }
                plVar13 = plVar15 + 0xc;
                if (plVar11 == plVar13) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar13 + 0xd0))();
                  if ((long *)*plVar13 != plVar6) {
                    (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + 0xc);
                    plVar6 = (long *)plVar15[0xc];
                    uVar18 = 4;
                  }
                  plVar13 = plVar15 + 0xf;
                  if (plVar11 == plVar13) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar13 + 0xd0))();
                    if ((long *)*plVar13 != plVar6) {
                      (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + 0xf);
                      plVar6 = (long *)plVar15[0xf];
                      uVar18 = 5;
                    }
                    uVar7 = 6;
                    for (plVar13 = plVar15 + 0x12; plVar11 != plVar13; plVar13 = plVar13 + 3) {
                      (**(code **)(*(long *)*plVar13 + 0xd0))();
                      if ((long *)*plVar13 != plVar6) {
                        (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar13);
                        plVar6 = (long *)*plVar13;
                        uVar18 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar6 + 0x100))(plVar6,plVar15 + uVar18 * 3,plVar15 + uVar7 * 3);
        plVar15[600] = 0;
      }
      *(undefined4 *)(lVar17 + 0x12cc) = 0;
    }
  }
  lVar17 = param_1[0x4b];
  param_1[0x4b] = 0;
  if (lVar17 != 0) {
    FUN_013edd68(param_1 + 0x4c);
  }
  lVar17 = param_1[0x44];
  if (lVar17 != 0) {
    lVar12 = param_1[0x45];
    lVar10 = lVar17;
    if (lVar12 != lVar17) {
      if (*(long **)(lVar12 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar12 + -0x10) + 0x20))();
      }
      if (lVar12 + -0x28 != lVar17) {
        do {
          if (*(long **)(lVar12 + -0x38) != (long *)0x0) {
            (**(code **)(**(long **)(lVar12 + -0x38) + 0x20))();
          }
          lVar12 = lVar12 + -0x28;
        } while (lVar17 + 0x28 != lVar12);
      }
      lVar10 = param_1[0x44];
    }
    lVar12 = param_1[0x46];
    param_1[0x45] = lVar17;
    plVar15 = (long *)param_1[0x47];
    uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar7 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,lVar12 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar15,lVar10,lVar12 - lVar10,8);
    }
  }
  lVar17 = param_1[0x3d];
  if (lVar17 != 0) {
    lVar12 = param_1[0x3e];
    lVar10 = lVar17;
    if (lVar12 != lVar17) {
      pcVar8 = *(code **)(lVar12 + -0x78);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(lVar12 + -0x70) = 0;
        *(undefined8 *)(lVar12 + -0x68) = 0;
        *(undefined8 *)(lVar12 + -0x80) = 0;
        *(undefined8 *)(lVar12 + -0x78) = 0;
        (*pcVar8)(lVar12 + -0x60);
      }
      if (*(long **)(lVar12 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar12 + -0x98) + 0x20))();
      }
      if (lVar12 + -0xb0 != lVar17) {
        pcVar8 = *(code **)(lVar12 + -0x128);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar12 + -0x118) = 0;
          *(undefined8 *)(lVar12 + -0x120) = 0;
          *(undefined8 *)(lVar12 + -0x128) = 0;
          *(undefined8 *)(lVar12 + -0x130) = 0;
          (*pcVar8)(lVar12 + -0x110);
        }
        if (*(long **)(lVar12 + -0x148) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + -0x148) + 0x20))();
        }
        if (lVar12 + -0x160 != lVar17) {
          do {
            pcVar8 = *(code **)(lVar12 + -0x1d8);
            if (pcVar8 != (code *)0x0) {
              *(undefined8 *)(lVar12 + -0x1d0) = 0;
              *(undefined8 *)(lVar12 + -0x1c8) = 0;
              *(undefined8 *)(lVar12 + -0x1e0) = 0;
              *(undefined8 *)(lVar12 + -0x1d8) = 0;
              (*pcVar8)(lVar12 + -0x1c0);
            }
            if (*(long **)(lVar12 + -0x1f8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar12 + -0x1f8) + 0x20))();
            }
            lVar12 = lVar12 + -0xb0;
          } while (lVar17 + 0x160 != lVar12);
        }
      }
      lVar10 = param_1[0x3d];
    }
    lVar12 = param_1[0x3f];
    plVar15 = (long *)param_1[0x40];
    param_1[0x3e] = lVar17;
    uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar7 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,lVar12 - lVar10,0x10);
    }
    else {
      FUN_00c48fe8(plVar15,lVar10,lVar12 - lVar10,0x10);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x39));
  nn::os::FinalizeMutex(pMVar1);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x31));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2d));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x29));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x25));
  FUN_00e6bfa4(param_1);
  return;
}


