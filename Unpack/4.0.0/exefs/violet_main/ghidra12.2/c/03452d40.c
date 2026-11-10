/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03452d40; name: FUN_03452d40
 */


void FUN_03452d40(long param_1,long param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 local_8c;
  undefined1 uStack_87;
  undefined1 local_84;
  long *local_80;
  
  lVar20 = *(long *)(param_1 + 0x18);
  if (lVar20 != 0) {
    plVar10 = (long *)PTR_DAT_047e6f28;
    do {
      if (*(short *)(lVar20 + 0x34) == 0x2103) {
        lVar14 = *plVar10;
        pMVar1 = (MutexType *)(lVar14 + 0xa8);
        uVar4 = *(uint *)(lVar20 + 0x30);
        nn::os::LockMutex(pMVar1);
        uVar5 = *(uint *)(lVar14 + 0xd0);
        if (uVar5 != 0) {
          uVar8 = 0;
          if (uVar5 != 0) {
            uVar8 = uVar4 / uVar5;
          }
          for (plVar9 = *(long **)(*(long *)(lVar14 + 200) + (ulong)(uVar4 - uVar8 * uVar5) * 8);
              plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
            if (*(uint *)(plVar9 + 2) == uVar4) {
              *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              FUN_03452d40(plVar9,param_2,param_3);
              (**(code **)(*plVar9 + 0x18))(plVar9);
              goto LAB_03452e78;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_03452e78:
        switch(*(undefined4 *)(param_2 + 0x14)) {
        case 0:
        case 3:
          iVar6 = *(int *)(lVar20 + 0x10);
          lVar14 = *(long *)PTR_DAT_047e2fe8;
          iVar7 = *(int *)(param_2 + 0x20);
          puVar13 = (undefined8 *)(lVar14 + 0x28);
          puVar15 = (undefined8 *)*puVar13;
          if (puVar15 != (undefined8 *)0x0) {
            if (iVar7 == 0) {
              puVar19 = (undefined8 *)0x0;
              do {
                plVar9 = (long *)puVar15[2];
                plVar10 = (long *)plVar9[1];
                if ((int)plVar10[2] == iVar6) {
                  local_a8[0] = 0;
                  if ((*(ushort *)((long)plVar10 + 0x34) | 0x100) == 0x503) {
                    (**(code **)(*plVar10 + 0x58))(plVar10,local_a8);
                  }
                  plVar10 = *(long **)PTR_DAT_047e6f38;
                  uVar4 = *(uint *)(plVar9 + 6);
                  nn::os::LockMutex((MutexType *)(plVar10 + 3));
                  uVar5 = *(uint *)(plVar10 + 1);
                  if (uVar5 != 0) {
                    uVar8 = 0;
                    if (uVar5 != 0) {
                      uVar8 = uVar4 / uVar5;
                    }
                    for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar4 - uVar8 * uVar5) * 8);
                        lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x70)) {
                      if (*(uint *)(lVar11 + 0x54) == uVar4) {
                        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
                        FUN_034b3448(plVar10,uVar4);
                        goto LAB_034534d4;
                      }
                    }
                  }
                  nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
LAB_034534d4:
                  puVar17 = (undefined8 *)*puVar15;
                  puVar3 = puVar13;
                  if (*(undefined8 **)(lVar14 + 0x28) != puVar15) {
                    puVar3 = puVar19;
                  }
                  *puVar3 = puVar17;
                  if (*(undefined8 **)(lVar14 + 0x30) == puVar15) {
                    *(undefined8 **)(lVar14 + 0x30) = puVar19;
                  }
                  *puVar15 = *(undefined8 *)(lVar14 + 0x38);
                  *(undefined8 **)(lVar14 + 0x38) = puVar15;
                  *(int *)(lVar14 + 0x4c) = *(int *)(lVar14 + 0x4c) + -1;
                  (**(code **)(*(long *)plVar9[1] + 0x18))();
                  (**(code **)(*plVar9 + 8))(plVar9);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar9);
                  puVar15 = puVar19;
                }
                else {
                  puVar17 = (undefined8 *)*puVar15;
                }
                puVar19 = puVar15;
                puVar15 = puVar17;
              } while (puVar17 != (undefined8 *)0x0);
            }
            else {
              puVar19 = (undefined8 *)0x0;
              do {
                plVar9 = (long *)puVar15[2];
                plVar10 = (long *)plVar9[1];
                if (((int)plVar10[2] == iVar6) && ((int)plVar9[6] == iVar7)) {
                  local_a8[0] = 0;
                  if ((*(ushort *)((long)plVar10 + 0x34) | 0x100) == 0x503) {
                    (**(code **)(*plVar10 + 0x58))(plVar10,local_a8);
                  }
                  plVar10 = *(long **)PTR_DAT_047e6f38;
                  uVar4 = *(uint *)(plVar9 + 6);
                  nn::os::LockMutex((MutexType *)(plVar10 + 3));
                  uVar5 = *(uint *)(plVar10 + 1);
                  if (uVar5 != 0) {
                    uVar8 = 0;
                    if (uVar5 != 0) {
                      uVar8 = uVar4 / uVar5;
                    }
                    for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar4 - uVar8 * uVar5) * 8);
                        lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x70)) {
                      if (*(uint *)(lVar11 + 0x54) == uVar4) {
                        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
                        FUN_034b3448(plVar10,uVar4);
                        goto LAB_03452f70;
                      }
                    }
                  }
                  nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
LAB_03452f70:
                  puVar17 = (undefined8 *)*puVar15;
                  puVar3 = puVar13;
                  if (*(undefined8 **)(lVar14 + 0x28) != puVar15) {
                    puVar3 = puVar19;
                  }
                  *puVar3 = puVar17;
                  if (*(undefined8 **)(lVar14 + 0x30) == puVar15) {
                    *(undefined8 **)(lVar14 + 0x30) = puVar19;
                  }
                  *puVar15 = *(undefined8 *)(lVar14 + 0x38);
                  *(undefined8 **)(lVar14 + 0x38) = puVar15;
                  *(int *)(lVar14 + 0x4c) = *(int *)(lVar14 + 0x4c) + -1;
                  (**(code **)(*(long *)plVar9[1] + 0x18))();
                  (**(code **)(*plVar9 + 8))(plVar9);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar9);
                }
                else {
                  puVar17 = (undefined8 *)*puVar15;
                  puVar19 = puVar15;
                }
                puVar15 = puVar17;
              } while (puVar17 != (undefined8 *)0x0);
            }
          }
          puVar13 = (undefined8 *)(lVar14 + 0x50);
          puVar15 = (undefined8 *)*puVar13;
          if (puVar15 != (undefined8 *)0x0) {
            if (iVar7 == 0) {
              puVar19 = (undefined8 *)0x0;
              do {
                plVar9 = (long *)puVar15[2];
                plVar10 = (long *)plVar9[1];
                if ((int)plVar10[2] == iVar6) {
                  local_a8[0] = 0;
                  if ((*(ushort *)((long)plVar10 + 0x34) | 0x100) == 0x503) {
                    (**(code **)(*plVar10 + 0x58))(plVar10,local_a8);
                  }
                  plVar10 = *(long **)PTR_DAT_047e6f38;
                  uVar4 = *(uint *)(plVar9 + 6);
                  nn::os::LockMutex((MutexType *)(plVar10 + 3));
                  uVar5 = *(uint *)(plVar10 + 1);
                  if (uVar5 != 0) {
                    uVar8 = 0;
                    if (uVar5 != 0) {
                      uVar8 = uVar4 / uVar5;
                    }
                    for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar4 - uVar8 * uVar5) * 8);
                        lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x70)) {
                      if (*(uint *)(lVar11 + 0x54) == uVar4) {
                        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
                        FUN_034b3448(plVar10,uVar4);
                        goto LAB_03453770;
                      }
                    }
                  }
                  nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
LAB_03453770:
                  puVar17 = (undefined8 *)*puVar15;
                  puVar3 = puVar13;
                  if (*(undefined8 **)(lVar14 + 0x50) != puVar15) {
                    puVar3 = puVar19;
                  }
                  *puVar3 = puVar17;
                  if (*(undefined8 **)(lVar14 + 0x58) == puVar15) {
                    *(undefined8 **)(lVar14 + 0x58) = puVar19;
                  }
                  *puVar15 = *(undefined8 *)(lVar14 + 0x60);
                  *(undefined8 **)(lVar14 + 0x60) = puVar15;
                  *(int *)(lVar14 + 0x74) = *(int *)(lVar14 + 0x74) + -1;
                  (**(code **)(*(long *)plVar9[1] + 0x18))();
                  (**(code **)(*plVar9 + 8))(plVar9);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar9);
                }
                else {
                  puVar17 = (undefined8 *)*puVar15;
                  puVar19 = puVar15;
                }
                puVar15 = puVar17;
              } while (puVar17 != (undefined8 *)0x0);
            }
            else {
              puVar19 = (undefined8 *)0x0;
              do {
                while( true ) {
                  puVar17 = puVar15;
                  plVar9 = (long *)puVar17[2];
                  plVar10 = (long *)plVar9[1];
                  if (((int)plVar10[2] != iVar6) || ((int)plVar9[6] != iVar7)) break;
                  local_a8[0] = 0;
                  if ((*(ushort *)((long)plVar10 + 0x34) | 0x100) == 0x503) {
                    (**(code **)(*plVar10 + 0x58))(plVar10,local_a8);
                  }
                  plVar10 = *(long **)PTR_DAT_047e6f38;
                  uVar4 = *(uint *)(plVar9 + 6);
                  nn::os::LockMutex((MutexType *)(plVar10 + 3));
                  uVar5 = *(uint *)(plVar10 + 1);
                  if (uVar5 != 0) {
                    uVar8 = 0;
                    if (uVar5 != 0) {
                      uVar8 = uVar4 / uVar5;
                    }
                    for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar4 - uVar8 * uVar5) * 8);
                        lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x70)) {
                      if (*(uint *)(lVar11 + 0x54) == uVar4) {
                        *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
                        FUN_034b3448(plVar10,uVar4);
                        goto LAB_03453634;
                      }
                    }
                  }
                  nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
LAB_03453634:
                  puVar15 = (undefined8 *)*puVar17;
                  puVar3 = puVar13;
                  if (*(undefined8 **)(lVar14 + 0x50) != puVar17) {
                    puVar3 = puVar19;
                  }
                  *puVar3 = puVar15;
                  if (*(undefined8 **)(lVar14 + 0x58) == puVar17) {
                    *(undefined8 **)(lVar14 + 0x58) = puVar19;
                  }
                  *puVar17 = *(undefined8 *)(lVar14 + 0x60);
                  *(undefined8 **)(lVar14 + 0x60) = puVar17;
                  *(int *)(lVar14 + 0x74) = *(int *)(lVar14 + 0x74) + -1;
                  (**(code **)(*(long *)plVar9[1] + 0x18))();
                  (**(code **)(*plVar9 + 8))(plVar9);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar9);
                  if (puVar15 == (undefined8 *)0x0) goto LAB_03453818;
                }
                puVar15 = (undefined8 *)*puVar17;
                puVar19 = puVar17;
              } while ((undefined8 *)*puVar17 != (undefined8 *)0x0);
            }
          }
LAB_03453818:
          plVar10 = (long *)PTR_DAT_047e6f28;
          if (*(long *)PTR_DAT_047e6f60 != 0) {
            FUN_0344ae80(*(long *)PTR_DAT_047e6f60,0,iVar7);
          }
          break;
        case 1:
          lVar14 = *(long *)PTR_DAT_047e2fe8;
          iVar6 = *(int *)(lVar20 + 0x10);
          iVar7 = *(int *)(param_2 + 0x20);
          plVar9 = *(long **)(lVar14 + 0x50);
          if (plVar9 != (long *)0x0) {
            if (iVar7 == 0) {
              do {
                lVar11 = plVar9[2];
                if (*(int *)(*(long *)(lVar11 + 8) + 0x10) == iVar6) {
                  *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + 1;
                }
                plVar9 = (long *)*plVar9;
              } while (plVar9 != (long *)0x0);
            }
            else {
              do {
                lVar11 = plVar9[2];
                if ((*(int *)(*(long *)(lVar11 + 8) + 0x10) == iVar6) &&
                   (*(int *)(lVar11 + 0x30) == iVar7)) {
                  *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + 1;
                }
                plVar9 = (long *)*plVar9;
              } while (plVar9 != (long *)0x0);
            }
          }
          plVar16 = (long *)(lVar14 + 0x28);
          plVar9 = (long *)*plVar16;
          if (plVar9 != (long *)0x0) {
            plVar18 = (long *)0x0;
            if (iVar7 == 0) {
              do {
                lVar11 = *(long *)(plVar9[2] + 8);
                if (*(int *)(lVar11 + 0x10) == iVar6) {
                  FUN_0345541c(lVar14,*(undefined4 *)(lVar11 + 0x30),plVar9[2],0);
                  plVar12 = (long *)*plVar9;
                  plVar2 = plVar16;
                  if (*(long **)(lVar14 + 0x28) != plVar9) {
                    plVar2 = plVar18;
                  }
                  *plVar2 = (long)plVar12;
                  if (*(long **)(lVar14 + 0x30) == plVar9) {
                    *(long **)(lVar14 + 0x30) = plVar18;
                  }
                  *plVar9 = *(long *)(lVar14 + 0x38);
                  *(long **)(lVar14 + 0x38) = plVar9;
                  *(int *)(lVar14 + 0x4c) = *(int *)(lVar14 + 0x4c) + -1;
                }
                else {
                  plVar12 = (long *)*plVar9;
                  plVar18 = plVar9;
                }
                plVar9 = plVar12;
              } while (plVar12 != (long *)0x0);
            }
            else {
              do {
                while( true ) {
                  plVar12 = plVar9;
                  lVar11 = plVar12[2];
                  if ((*(int *)(*(long *)(lVar11 + 8) + 0x10) != iVar6) ||
                     (*(int *)(lVar11 + 0x30) != iVar7)) break;
                  FUN_0345541c(lVar14,*(undefined4 *)(*(long *)(lVar11 + 8) + 0x30),lVar11,0);
                  plVar9 = (long *)*plVar12;
                  plVar2 = plVar16;
                  if (*(long **)(lVar14 + 0x28) != plVar12) {
                    plVar2 = plVar18;
                  }
                  *plVar2 = (long)plVar9;
                  if (*(long **)(lVar14 + 0x30) == plVar12) {
                    *(long **)(lVar14 + 0x30) = plVar18;
                  }
                  *plVar12 = *(long *)(lVar14 + 0x38);
                  *(long **)(lVar14 + 0x38) = plVar12;
                  *(int *)(lVar14 + 0x4c) = *(int *)(lVar14 + 0x4c) + -1;
                  if (plVar9 == (long *)0x0) goto LAB_034531ac;
                }
                plVar9 = (long *)*plVar12;
                plVar18 = plVar12;
              } while ((long *)*plVar12 != (long *)0x0);
            }
          }
LAB_034531ac:
          if ((*(long *)PTR_DAT_047e6f60 != 0) &&
             (lVar14 = *(long *)(*(long *)PTR_DAT_047e6f60 + 8), lVar14 != 0)) {
            if (iVar7 == 0) {
              do {
                lVar11 = *(long *)(lVar14 + 8);
                if ((*(long *)(lVar14 + 0x58) != 0) && ((*(byte *)(lVar14 + 0x70) >> 2 & 1) == 0)) {
                  FUN_0344c724(*(long *)(lVar14 + 0x58),lVar14);
                }
                *(byte *)(lVar14 + 0x70) = *(byte *)(lVar14 + 0x70) | 4;
                lVar14 = lVar11;
              } while (lVar11 != 0);
            }
            else {
              do {
                lVar11 = *(long *)(lVar14 + 8);
                if (*(int *)(lVar14 + 0x2c) == iVar7) {
                  if ((*(long *)(lVar14 + 0x58) != 0) && ((*(byte *)(lVar14 + 0x70) >> 2 & 1) == 0))
                  {
                    FUN_0344c724(*(long *)(lVar14 + 0x58),lVar14);
                  }
                  *(byte *)(lVar14 + 0x70) = *(byte *)(lVar14 + 0x70) | 4;
                }
                lVar14 = lVar11;
              } while (lVar11 != 0);
            }
          }
          break;
        case 2:
          lVar14 = *(long *)PTR_DAT_047e2fe8;
          iVar6 = *(int *)(lVar20 + 0x10);
          iVar7 = *(int *)(param_2 + 0x20);
          puVar13 = (undefined8 *)(lVar14 + 0x50);
          puVar15 = (undefined8 *)*puVar13;
          if (puVar15 != (undefined8 *)0x0) {
            puVar19 = (undefined8 *)0x0;
            if (iVar7 == 0) {
              do {
                lVar11 = puVar15[2];
                if (*(int *)(*(long *)(lVar11 + 8) + 0x10) == iVar6) {
                  if (*(int *)(lVar11 + 0x34) != 0) {
                    *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + -1;
                    goto LAB_03453368;
                  }
                  FUN_03455744(lVar14);
                  puVar17 = (undefined8 *)*puVar15;
                  puVar3 = puVar13;
                  if (*(undefined8 **)(lVar14 + 0x50) != puVar15) {
                    puVar3 = puVar19;
                  }
                  *puVar3 = puVar17;
                  if (*(undefined8 **)(lVar14 + 0x58) == puVar15) {
                    *(undefined8 **)(lVar14 + 0x58) = puVar19;
                  }
                  *puVar15 = *(undefined8 *)(lVar14 + 0x60);
                  *(undefined8 **)(lVar14 + 0x60) = puVar15;
                  *(int *)(lVar14 + 0x74) = *(int *)(lVar14 + 0x74) + -1;
                }
                else {
LAB_03453368:
                  puVar17 = (undefined8 *)*puVar15;
                  puVar19 = puVar15;
                }
                puVar15 = puVar17;
              } while (puVar17 != (undefined8 *)0x0);
            }
            else {
              do {
                lVar11 = puVar15[2];
                if ((*(int *)(*(long *)(lVar11 + 8) + 0x10) == iVar6) &&
                   (*(int *)(lVar11 + 0x30) == iVar7)) {
                  if (*(int *)(lVar11 + 0x34) != 0) {
                    *(int *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + -1;
                    goto LAB_03453298;
                  }
                  FUN_03455744(lVar14);
                  puVar17 = (undefined8 *)*puVar15;
                  puVar3 = puVar13;
                  if (*(undefined8 **)(lVar14 + 0x50) != puVar15) {
                    puVar3 = puVar19;
                  }
                  *puVar3 = puVar17;
                  if (*(undefined8 **)(lVar14 + 0x58) == puVar15) {
                    *(undefined8 **)(lVar14 + 0x58) = puVar19;
                  }
                  *puVar15 = *(undefined8 *)(lVar14 + 0x60);
                  *(undefined8 **)(lVar14 + 0x60) = puVar15;
                  *(int *)(lVar14 + 0x74) = *(int *)(lVar14 + 0x74) + -1;
                }
                else {
LAB_03453298:
                  puVar17 = (undefined8 *)*puVar15;
                  puVar19 = puVar15;
                }
                puVar15 = puVar17;
              } while (puVar17 != (undefined8 *)0x0);
            }
          }
          if ((*(long *)PTR_DAT_047e6f60 != 0) &&
             (lVar14 = *(long *)(*(long *)PTR_DAT_047e6f60 + 8), lVar14 != 0)) {
            if (iVar7 == 0) {
              do {
                lVar11 = *(long *)(lVar14 + 8);
                if ((*(long *)(lVar14 + 0x58) != 0) && ((*(byte *)(lVar14 + 0x70) >> 2 & 1) != 0)) {
                  FUN_0344c8b0(*(long *)(lVar14 + 0x58),lVar14);
                }
                *(byte *)(lVar14 + 0x70) = *(byte *)(lVar14 + 0x70) & 0xfb;
                lVar14 = lVar11;
              } while (lVar11 != 0);
            }
            else {
              do {
                lVar11 = *(long *)(lVar14 + 8);
                if (*(int *)(lVar14 + 0x2c) == iVar7) {
                  if ((*(long *)(lVar14 + 0x58) != 0) && ((*(byte *)(lVar14 + 0x70) >> 2 & 1) != 0))
                  {
                    FUN_0344c8b0(*(long *)(lVar14 + 0x58),lVar14);
                  }
                  *(byte *)(lVar14 + 0x70) = *(byte *)(lVar14 + 0x70) & 0xfb;
                }
                lVar14 = lVar11;
              } while (lVar11 != 0);
            }
          }
        }
      }
      else {
        if (*(short *)(lVar20 + 0x34) != 0x403) goto LAB_03452e78;
        plVar9 = (long *)FUN_0344ec90(*plVar10,*(undefined4 *)(lVar20 + 0x30),
                                      *(byte *)(lVar20 + 0x36) >> 6 & 1);
        if (plVar9 == (long *)0x0) goto switchD_03452e98_default;
        local_94 = *(undefined4 *)(param_2 + 0x18);
        uStack_90 = *(undefined4 *)(param_2 + 0x1c);
        local_98 = *(undefined4 *)(param_2 + 0x20);
        local_8c = 0;
        local_84 = 0;
        uStack_87 = 0;
        local_a0 = param_3;
        local_80 = plVar9;
        switch(*(undefined4 *)(param_2 + 0x14)) {
        case 0:
          FUN_0345423c(*(undefined8 *)PTR_DAT_047e2fe8,plVar9,param_3,local_98);
          local_a8[0] = 0;
          break;
        case 1:
          FUN_03454684(*(undefined8 *)PTR_DAT_047e2fe8,plVar9,param_3,1);
          local_a8[0] = 1;
          break;
        case 2:
          FUN_03454ac4(*(undefined8 *)PTR_DAT_047e2fe8,plVar9,param_3,0);
          local_a8[0] = 2;
          break;
        case 3:
          FUN_03454fac(*(undefined8 *)PTR_DAT_047e2fe8,plVar9,param_3,local_98);
          local_a8[0] = 3;
          break;
        case 4:
          local_a8[0] = 5;
          break;
        default:
          goto switchD_03452e04_default;
        }
        (**(code **)(*plVar9 + 0x98))(plVar9,local_a8);
switchD_03452e04_default:
        (**(code **)(*plVar9 + 0x30))(plVar9);
      }
switchD_03452e98_default:
      lVar20 = *(long *)(lVar20 + 0x18);
    } while (lVar20 != 0);
  }
  return;
}


