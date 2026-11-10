/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035279f0; name: FUN_035279f0
 */


/* WARNING: Removing unreachable block (ram,0x035289fc) */
/* WARNING: Removing unreachable block (ram,0x03528a0c) */
/* WARNING: Removing unreachable block (ram,0x03528a20) */
/* WARNING: Removing unreachable block (ram,0x03528a30) */

void FUN_035279f0(long *param_1,int param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  code *pcVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  MutexType *pMVar31;
  undefined *puVar32;
  undefined4 uVar33;
  long *plVar34;
  double dVar35;
  double dVar36;
  byte local_4f8;
  int local_4f4;
  int local_4ec;
  long *local_4e0;
  undefined8 *local_4b8;
  int *local_4b0;
  undefined8 *local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  int local_498;
  uint uStack_494;
  undefined4 local_490;
  undefined1 local_48c;
  undefined8 *apuStack_488 [32];
  undefined4 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  int local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined4 local_350;
  int local_34c;
  int local_348;
  undefined1 auStack_344 [4];
  int local_340;
  undefined1 local_33c;
  undefined4 local_338;
  undefined1 local_334;
  undefined8 local_330;
  ulong local_328;
  byte local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  byte local_304;
  undefined8 local_300;
  undefined5 uStack_2f8;
  undefined3 local_2f3;
  undefined4 uStack_2f0;
  byte bStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  byte local_2d8;
  undefined8 local_2d0;
  long local_2c8 [32];
  uint local_1c8;
  long local_1c0;
  long *local_1b8;
  uint local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_98;
  long local_90;
  long *local_88;
  undefined4 local_80;
  undefined8 local_78;
  uint3 local_70;
  undefined1 uStack_6d;
  
  lVar28 = param_1[0xd];
  lVar29 = *(long *)(param_1[0xc] + 8);
  lVar13 = param_1[2];
  if (lVar13 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = 0;
    do {
      lVar30 = lVar30 + lVar28;
      lVar28 = *(long *)(lVar13 + 0x68);
      lVar13 = *(long *)(lVar13 + 0x10);
    } while (lVar13 != 0);
  }
  local_1c8 = 0;
  local_1a8 = 0;
  local_1c0 = 0;
  local_1b8 = (long *)0x0;
  local_1b0 = 0;
  local_1a0 = 1;
  (**(code **)(*param_1 + 0xb8))(param_1,local_2c8,0);
  local_1a0._0_3_ = CONCAT12(1,(undefined2)local_1a0);
  if (local_1c0 == 0) {
    (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,0);
    *param_4 = 0;
    return;
  }
  plVar20 = (long *)param_1[0x15];
  if (plVar20 == (long *)0x0) {
    plVar20 = (long *)0x0;
    plVar21 = (long *)0x0;
  }
  else {
    plVar25 = param_1 + 0x13;
    plVar17 = (long *)*plVar25;
    plVar23 = plVar17;
    if ((plVar17 != (long *)0x0) && (plVar20 != plVar17)) {
      do {
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0 && plVar20 != plVar23);
    }
    if (plVar23 == (long *)0x0) {
      plVar20 = (long *)0x0;
      plVar21 = (long *)0x0;
    }
    else {
      plVar20 = (long *)param_1[0x14];
      if (plVar20 != (long *)0x0) {
        plVar21 = plVar23;
        do {
          plVar21 = (long *)*plVar21;
          if (plVar21 == (long *)0x0) goto LAB_03527b20;
        } while (plVar20 != plVar21);
        param_1[0x15] = (long)plVar20;
        plVar23 = plVar21;
      }
LAB_03527b20:
      plVar21 = (long *)*plVar23;
      if (plVar21 == (long *)0x0) {
        plVar20 = (long *)0x0;
      }
      else {
        plVar20 = (long *)0x0;
        plVar18 = (long *)0x0;
        while( true ) {
          plVar24 = (long *)*plVar21;
          plVar26 = plVar25;
          if (plVar17 != plVar21) {
            plVar26 = plVar23;
          }
          *plVar26 = (long)plVar24;
          if ((long *)param_1[0x12] == plVar21) {
            param_1[0x12] = (long)plVar23;
          }
          *plVar21 = 0;
          plVar17 = plVar21;
          if (plVar20 != (long *)0x0) {
            *plVar18 = (long)plVar21;
            plVar17 = plVar20;
          }
          plVar20 = plVar17;
          if (plVar24 == (long *)0x0) break;
          plVar17 = (long *)*plVar25;
          plVar18 = plVar21;
          plVar21 = plVar24;
        }
      }
    }
    (**(code **)(*param_1 + 0xc0))(param_1,local_2c8);
  }
  plVar23 = (long *)param_1[0x14];
  lVar28 = (lVar29 - lVar30) - lVar28;
  if ((long *)*plVar23 != (long *)0x0) {
    plVar25 = (long *)*plVar23;
    plVar17 = plVar23;
    do {
      plVar18 = plVar25;
      uVar10 = (**(code **)(*(long *)plVar17[1] + 0xd8))();
      if (((uVar10 & 1) == 0) ||
         ((*(byte *)(plVar18[1] + 0x5a) & 3) != 0 && (*(byte *)(plVar18[1] + 0x5a) & 0x10) == 0)) {
        plVar23 = plVar18;
      }
      plVar25 = (long *)*plVar18;
      plVar17 = plVar18;
    } while ((long *)*plVar18 != (long *)0x0);
  }
  if ((*param_3 == 0) && (*(char *)(param_1[0xf] + 0x170) != '\0')) {
    lVar13 = (**(code **)(*(long *)plVar23[1] + 0xd0))();
    if (lVar13 == 0) {
      if (param_2 != 0) goto LAB_03527c38;
    }
    else if (*(int *)(lVar13 + 0x18) != param_2) goto LAB_03527c38;
  }
  else {
LAB_03527c38:
    uVar10 = (**(code **)(*(long *)plVar23[1] + 0xd8))();
    uVar16 = local_1b0;
    if ((uVar10 & 1) != 0) {
      uVar10 = (ulong)local_1b0;
      local_1b0 = local_1b0 + 1;
      plVar17 = param_1 + 0x13;
      plVar25 = (long *)*plVar17;
      if ((plVar25 != (long *)0x0) && (plVar25 != plVar23)) {
        do {
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0 && plVar25 != plVar23);
      }
      if (uVar16 == local_1c8) {
        if (plVar25 != (long *)0x0) {
          local_1c0 = 0;
          local_1b8 = (long *)0x0;
          local_2c8[uVar10] = (long)plVar25;
LAB_03527e5c:
          local_1c8 = local_1c8 + 1;
          goto LAB_03527e68;
        }
      }
      else if (plVar25 != (long *)local_2c8[uVar10]) {
        if ((long *)local_2c8[uVar10] != plVar25) {
          local_1c0 = 0;
          local_1b8 = (long *)0x0;
          if ((int)uVar16 <= (int)(local_1c8 - 1)) {
            do {
              iVar8 = local_1c8 - 2;
              local_1c8 = local_1c8 - 1;
            } while ((int)uVar16 <= iVar8);
          }
          local_2c8[local_1c8] = (long)plVar25;
          goto LAB_03527e5c;
        }
LAB_03527e68:
        (**(code **)(*(long *)plVar25[1] + 0xb8))((long *)plVar25[1],local_2c8,0);
      }
      local_1b0 = local_1b0 - 1;
      local_4e0 = (long *)0x0;
      local_4ec = -1;
      uVar16 = 0;
      local_4b8 = (undefined8 *)0x0;
      local_4b0 = (int *)0x0;
      local_4a8 = (undefined8 *)0x0;
      local_2d0 = 0;
      local_340 = 0;
      local_33c = 0;
      local_338 = 0;
      local_334 = 0;
      bVar6 = true;
      do {
        uVar16 = uVar16 + 1;
        if (uVar16 < 0x41) {
          plVar25 = (long *)*param_4;
          if (*(long *)(local_1c0 + 0x18) == 0) {
            lVar13 = (**(code **)(*local_1b8 + 0xd0))();
            if (lVar13 == 0) {
              lVar13 = (**(code **)(*(long *)local_1b8[2] + 0xd0))();
            }
LAB_03527f68:
            uVar33 = 0;
          }
          else {
            lVar29 = *(long *)(*(long *)(local_1c0 + 0x18) + 0x78);
            lVar13 = *(long *)(lVar29 + 0x98);
            if (lVar29 == 0) goto LAB_03527f68;
            uVar33 = *(undefined4 *)(lVar29 + 0x18);
          }
          local_98 = 0;
          local_78 = 0;
          local_80 = 0;
          local_90 = 0;
          local_88 = (long *)0x0;
          _local_70 = 0x1000001;
          (**(code **)(*plVar25 + 0xb8))(plVar25,&local_198,0);
          local_70 = (uint3)(ushort)local_70;
          if (*(long *)(local_90 + 0x18) == 0) {
            plVar25 = (long *)(**(code **)(*local_88 + 0xd0))();
            if (plVar25 == (long *)0x0) {
              plVar25 = (long *)(**(code **)(*(long *)local_88[2] + 0xd0))();
            }
LAB_03527fec:
            iVar8 = 0;
          }
          else {
            lVar29 = *(long *)(*(long *)(local_90 + 0x18) + 0x78);
            plVar25 = *(long **)(lVar29 + 0x98);
            if (lVar29 == 0) goto LAB_03527fec;
            iVar8 = *(int *)(lVar29 + 0x18);
          }
          lVar13 = FUN_0352dd64(param_1[0xf],param_1[0xf],uVar33,lVar13,iVar8,plVar25);
          if (plVar25 == (long *)0x0) {
            bVar7 = false;
          }
          else {
            iVar9 = (**(code **)(*plVar25 + 0x88))(plVar25);
            bVar7 = iVar9 == 8;
          }
          local_4f8 = bVar7 & **(int **)(lVar13 + 0x10) != iVar8;
        }
        else {
          lVar13 = FUN_0352df60();
          plVar25 = (long *)0x0;
        }
        iVar8 = *(int *)(lVar13 + 0x58);
        if (iVar8 == local_4ec) {
        }
        else {
          if (local_4b8 != (undefined8 *)0x0) {
            if (local_4a8 == (undefined8 *)0x0) {
              plVar18 = (long *)local_4b8[1];
              local_4b8[1] = 0;
              if (plVar18 != (long *)0x0) {
                iVar9 = (int)plVar18[9] + -1;
                *(int *)(plVar18 + 9) = iVar9;
                if (iVar9 == 0) {
                  if (plVar18[2] == 0) {
                    FUN_03518540(plVar18);
                  }
                  else {
                    FUN_0351c44c(plVar18[2],plVar18);
                    plVar18[2] = 0;
                  }
                  (**(code **)(*plVar18 + 0x50))(plVar18);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                }
                plVar18 = (long *)local_4b8[1];
                if (plVar18 != (long *)0x0) {
                  iVar9 = (int)plVar18[9] + -1;
                  *(int *)(plVar18 + 9) = iVar9;
                  if (iVar9 == 0) {
                    if (plVar18[2] == 0) {
                      FUN_03518540(plVar18);
                    }
                    else {
                      FUN_0351c44c(plVar18[2],plVar18);
                      plVar18[2] = 0;
                    }
                    (**(code **)(*plVar18 + 0x50))(plVar18);
                    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                  }
                  local_4b8[1] = 0;
                }
              }
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,local_4b8);
              local_4a8 = (undefined8 *)0x0;
              local_4b8 = (undefined8 *)0x0;
            }
            else {
              *(byte *)(local_4b8 + 10) = *(byte *)(local_4b8 + 10) & 0xfc;
              (**(code **)(*(long *)local_4b8[1] + 0x10))((long *)local_4b8[1],0);
              plVar18 = (long *)local_4b8[1];
              local_4b8[1] = 0;
              if (plVar18 != (long *)0x0) {
                iVar9 = (int)plVar18[9] + -1;
                *(int *)(plVar18 + 9) = iVar9;
                if (iVar9 == 0) {
                  if (plVar18[2] == 0) {
                    FUN_03518540(plVar18);
                  }
                  else {
                    FUN_0351c44c(plVar18[2],plVar18);
                    plVar18[2] = 0;
                  }
                  (**(code **)(*plVar18 + 0x50))(plVar18);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                }
                plVar18 = (long *)local_4b8[1];
                if (plVar18 != (long *)0x0) {
                  iVar9 = (int)plVar18[9] + -1;
                  *(int *)(plVar18 + 9) = iVar9;
                  if (iVar9 == 0) {
                    if (plVar18[2] == 0) {
                      FUN_03518540(plVar18);
                    }
                    else {
                      FUN_0351c44c(plVar18[2],plVar18);
                      plVar18[2] = 0;
                    }
                    (**(code **)(*plVar18 + 0x50))(plVar18);
                    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                  }
                  local_4b8[1] = 0;
                }
              }
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,local_4b8);
              plVar18 = (long *)local_4a8[1];
              local_4a8[1] = 0;
              if (plVar18 != (long *)0x0) {
                iVar9 = (int)plVar18[9] + -1;
                *(int *)(plVar18 + 9) = iVar9;
                if (iVar9 == 0) {
                  if (plVar18[2] == 0) {
                    FUN_03518540(plVar18);
                  }
                  else {
                    FUN_0351c44c(plVar18[2],plVar18);
                    plVar18[2] = 0;
                  }
                  (**(code **)(*plVar18 + 0x50))(plVar18);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                }
                plVar18 = (long *)local_4a8[1];
                if (plVar18 != (long *)0x0) {
                  iVar9 = (int)plVar18[9] + -1;
                  *(int *)(plVar18 + 9) = iVar9;
                  if (iVar9 == 0) {
                    if (plVar18[2] == 0) {
                      FUN_03518540(plVar18);
                    }
                    else {
                      FUN_0351c44c(plVar18[2],plVar18);
                      plVar18[2] = 0;
                    }
                    (**(code **)(*plVar18 + 0x50))(plVar18);
                    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                  }
                  local_4a8[1] = 0;
                }
              }
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
              local_4a8 = (undefined8 *)0x0;
            }
          }
          if ((*(byte *)(local_1c0 + 0x44) >> 2 & 1) != 0) break;
          if (*(uint **)(lVar13 + 0x50) != (uint *)0x0) {
            uVar1 = **(uint **)(lVar13 + 0x50);
            pMVar31 = *(MutexType **)PTR_DAT_047e6f28;
            nn::os::LockMutex(pMVar31);
            uVar2 = *(uint *)(pMVar31 + 0x28);
            if (uVar2 != 0) {
              uVar5 = 0;
              if (uVar2 != 0) {
                uVar5 = uVar1 / uVar2;
              }
              for (lVar29 = *(long *)(*(long *)(pMVar31 + 0x20) + (ulong)(uVar1 - uVar5 * uVar2) * 8
                                     ); lVar29 != 0; lVar29 = *(long *)(lVar29 + 8)) {
                if (*(uint *)(lVar29 + 0x10) == uVar1) {
                  *(int *)(lVar29 + 0x14) = *(int *)(lVar29 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar31);
                  lVar30 = param_1[0xc];
                  plVar18 = (long *)(lVar29 + -8);
                  local_4e0 = (long *)(**(code **)(*plVar18 + 0x268))
                                                (plVar18,param_1,*(undefined8 *)(lVar30 + 0x30),
                                                 lVar30 + 0x18,*(undefined1 *)(lVar30 + 0x38));
                  (**(code **)(*plVar18 + 0x30))(plVar18);
                  if (local_4e0 == (long *)0x0) goto LAB_035283d0;
                  local_4b8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x58);
                  if (local_4b8 != (undefined8 *)0x0) {
                    *local_4b8 = 0;
                    local_4b8[1] = local_4e0;
                    *(int *)(local_4e0 + 9) = (int)local_4e0[9] + 1;
                    local_4b8[8] = 0x400000000;
                    local_4b8[2] = 0;
                    *(undefined1 *)(local_4b8 + 3) = 0;
                    *(undefined1 *)(local_4b8 + 9) = 0;
                    *(byte *)(local_4b8 + 10) = *(byte *)(local_4b8 + 10) & 0xf8;
                  }
                  lVar29 = *param_4;
                  local_4a8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x58);
                  if (local_4a8 == (undefined8 *)0x0) {
                    if (local_4b8 != (undefined8 *)0x0) {
                      *(byte *)(local_4b8 + 10) = *(byte *)(local_4b8 + 10) & 0xfc;
                      (**(code **)(*(long *)local_4b8[1] + 0x10))((long *)local_4b8[1],0);
                      plVar18 = (long *)local_4b8[1];
                      local_4b8[1] = 0;
                      if (plVar18 != (long *)0x0) {
                        iVar9 = (int)plVar18[9] + -1;
                        *(int *)(plVar18 + 9) = iVar9;
                        if (iVar9 == 0) {
                          if (plVar18[2] == 0) {
                            FUN_03518540(plVar18);
                          }
                          else {
                            FUN_0351c44c(plVar18[2],plVar18);
                            plVar18[2] = 0;
                          }
                          (**(code **)(*plVar18 + 0x50))(plVar18);
                          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                        }
                        plVar18 = (long *)local_4b8[1];
                        if (plVar18 != (long *)0x0) {
                          iVar9 = (int)plVar18[9] + -1;
                          *(int *)(plVar18 + 9) = iVar9;
                          if (iVar9 == 0) {
                            if (plVar18[2] == 0) {
                              FUN_03518540(plVar18);
                            }
                            else {
                              FUN_0351c44c(plVar18[2],plVar18);
                              plVar18[2] = 0;
                            }
                            (**(code **)(*plVar18 + 0x50))(plVar18);
                            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                          }
                          local_4b8[1] = 0;
                        }
                      }
                      pcVar15 = *(code **)(PTR_DAT_047e2fd0 + 0x30);
                      goto LAB_03529378;
                    }
                    (**(code **)(*local_4e0 + 0x10))(local_4e0,0);
                    puVar32 = PTR_DAT_047e2fd0;
                  }
                  else {
                    *local_4a8 = 0;
                    local_4a8[1] = lVar29;
                    if (lVar29 != 0) {
                      *(int *)(lVar29 + 0x48) = *(int *)(lVar29 + 0x48) + 1;
                    }
                    local_4a8[8] = 0x400000000;
                    local_4a8[2] = 0;
                    *(undefined1 *)(local_4a8 + 3) = 0;
                    *(undefined1 *)(local_4a8 + 9) = 0;
                    *(byte *)(local_4a8 + 10) = *(byte *)(local_4a8 + 10) & 0xf8;
                    if (local_4b8 != (undefined8 *)0x0) goto LAB_03528434;
                    (**(code **)(*local_4e0 + 0x10))(local_4e0,0);
                    plVar18 = (long *)local_4a8[1];
                    local_4a8[1] = 0;
                    if (plVar18 != (long *)0x0) {
                      iVar9 = (int)plVar18[9] + -1;
                      *(int *)(plVar18 + 9) = iVar9;
                      if (iVar9 == 0) {
                        if (plVar18[2] == 0) {
                          FUN_03518540(plVar18);
                        }
                        else {
                          FUN_0351c44c(plVar18[2],plVar18);
                          plVar18[2] = 0;
                        }
                        (**(code **)(*plVar18 + 0x50))(plVar18);
                        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                      }
                      plVar18 = (long *)local_4a8[1];
                      if (plVar18 != (long *)0x0) {
                        iVar9 = (int)plVar18[9] + -1;
                        *(int *)(plVar18 + 9) = iVar9;
                        if (iVar9 == 0) {
                          if (plVar18[2] == 0) {
                            FUN_03518540(plVar18);
                          }
                          else {
                            FUN_0351c44c(plVar18[2],plVar18);
                            plVar18[2] = 0;
                          }
                          (**(code **)(*plVar18 + 0x50))(plVar18);
                          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar18);
                        }
                        local_4a8[1] = 0;
                      }
                    }
                    pcVar15 = *(code **)(PTR_DAT_047e2fd0 + 0x30);
                    local_4b8 = local_4a8;
LAB_03529378:
                    puVar32 = PTR_DAT_047e2fd0;
                    (*pcVar15)(0,local_4b8);
                  }
                  lVar29 = *param_4;
                  local_4b8 = (undefined8 *)(**(code **)(puVar32 + 0x10))(0,0x58);
                  if (local_4b8 == (undefined8 *)0x0) {
                    local_4a8 = (undefined8 *)0x0;
                    goto LAB_035294f8;
                  }
                  *local_4b8 = 0;
                  local_4b8[1] = lVar29;
                  if (lVar29 != 0) {
                    local_4a8 = (undefined8 *)0x0;
                    goto LAB_035283fc;
                  }
                  local_4a8 = (undefined8 *)0x0;
                  goto LAB_03528408;
                }
              }
            }
            nn::os::UnlockMutex(pMVar31);
          }
LAB_035283d0:
          lVar29 = *param_4;
          local_4b8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x58);
          if (local_4b8 == (undefined8 *)0x0) {
LAB_035294f8:
            local_4b8 = (undefined8 *)0x0;
            break;
          }
          *local_4b8 = 0;
          local_4b8[1] = lVar29;
          if (lVar29 != 0) {
LAB_035283fc:
            *(int *)(lVar29 + 0x48) = *(int *)(lVar29 + 0x48) + 1;
          }
LAB_03528408:
          local_4b8[8] = 0x400000000;
          local_4e0 = (long *)0x0;
          local_4b8[2] = 0;
          *(undefined1 *)(local_4b8 + 3) = 0;
          *(undefined1 *)(local_4b8 + 9) = 0;
          *(byte *)(local_4b8 + 10) = *(byte *)(local_4b8 + 10) & 0xf8;
LAB_03528434:
          local_2e8 = *(undefined8 *)(lVar13 + 0x20);
          local_2e0 = *(ulong *)(lVar13 + 0x28);
          local_2d8 = *(byte *)(lVar13 + 0x30);
          local_300 = *(undefined8 *)(lVar13 + 0x34);
          uVar19 = *(undefined8 *)(lVar13 + 0x3c);
          uStack_2f0 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x41) >> 0x18);
          bStack_2ec = (byte)((ulong)*(undefined8 *)(lVar13 + 0x41) >> 0x38);
          uStack_2f8 = (undefined5)uVar19;
          local_2f3 = (undefined3)((ulong)uVar19 >> 0x28);
          lVar29 = *(long *)(lVar13 + 0x50);
          if (lVar29 == 0) {
            local_310 = (undefined4)uVar19;
            uStack_30c = (undefined4)((ulong)uVar19 >> 0x20);
            uStack_308 = uStack_2f0;
            local_304 = bStack_2ec;
            local_320 = local_2d8;
            local_330 = local_2e8;
            local_328 = local_2e0;
            local_318 = local_300;
          }
          else {
            local_310 = *(undefined4 *)(lVar29 + 0xc);
            uStack_30c = 0;
            local_304 = local_304 & 7 | (*(byte *)(lVar29 + 0x1c) & 1) << 6;
            local_328 = (ulong)*(uint *)(lVar29 + 0x18);
            local_320 = local_320 & 0xc0 | (*(byte *)(lVar29 + 0x1c) >> 1 & 1) << 5 | 7;
            local_330 = *(undefined8 *)(lVar29 + 0x10);
            local_318 = *(undefined8 *)(lVar29 + 4);
          }
          if ((char)param_3[1] != '\0') {
            bStack_2ec = (*(byte *)((long)param_3 + 0xc) & 7) << 3 | bStack_2ec & 199;
          }
          if (plVar25 == (long *)0x0) {
            local_4b0 = (int *)0x0;
            piVar14 = (int *)*param_3;
            if (piVar14 != (int *)0x0) goto LAB_0352856c;
LAB_03528580:
            local_340 = 0;
LAB_03528584:
            local_33c = 0;
          }
          else {
            local_4b0 = (int *)(**(code **)(*param_1 + 0xa0))(param_1,(int)plVar25[3]);
            piVar14 = (int *)*param_3;
            if (piVar14 == (int *)0x0) {
              if ((local_4b0 == (int *)0x0) || ((bStack_2ec & 0x38) != 0x20)) goto LAB_03528580;
              local_340 = *local_4b0;
              goto LAB_03528584;
            }
LAB_0352856c:
            local_340 = *piVar14;
            local_33c = (undefined1)piVar14[1];
          }
          if ((bStack_2ec & 7) == 1) {
            local_338 = *(undefined4 *)(lVar13 + 0x44);
          }
          local_4ec = iVar8;
          if (((local_4f8 != 0) && (local_4b0 != (int *)0x0)) && ((bStack_2ec & 6) == 2)) {
            local_334 = 1;
          }
        }
        iVar8 = (**(code **)(*(long *)*param_4 + 0xb0))
                          ((long *)*param_4,&local_300,local_4b0,&local_340,&local_348,auStack_344,0
                           ,0);
        if (iVar8 == 2) {
          iVar8 = 7;
          local_4f4 = 2;
        }
        else if (iVar8 == 0) {
          *param_4 = 0;
          iVar8 = 6;
        }
        else {
          local_388 = 0;
          local_368 = 0;
          local_370 = 0;
          local_380 = 0;
          uStack_378 = 0;
          local_350 = 0;
          local_358 = 0;
          local_360 = 0x1000001;
          if (local_4a8 == (undefined8 *)0x0) {
            local_34c = local_348;
            auVar3 = SEXT816((long)((ulong)*(uint *)PTR_DAT_047e6fa0 * (long)(int)local_2e8)) *
                     SEXT816(0x20c49ba5e353f7cf);
            iVar8 = ((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f)) - (int)local_2e0;
            if (iVar8 <= local_348) {
              iVar8 = local_348;
            }
            lVar29 = lVar28 + iVar8;
            lVar13 = 0;
          }
          else {
            local_498 = 0;
            uStack_494 = uStack_494 & 0xffffff00;
            local_490 = 0;
            local_48c = 0;
            (**(code **)(*local_4e0 + 0xb0))
                      (local_4e0,&local_318,0,&local_498,&local_34c,&local_350,0,0);
            iVar9 = local_348;
            iVar8 = local_34c;
            local_98 = 0;
            local_78 = 0;
            local_90 = 0;
            local_80 = 0;
            _local_70 = 0x1000001;
            (**(code **)(*local_4e0 + 0xb8))(local_4e0,&local_198,0);
            local_70 = (uint3)(ushort)local_70;
            if ((local_90 == 0) || (*(long *)(local_90 + 0x18) == 0)) {
              lVar13 = 0;
            }
            else {
              lVar29 = *(long *)(*(long *)(local_90 + 0x18) + 0x78);
              lVar13 = 0;
              if (lVar29 != 0) {
                lVar13 = (long)(*(int *)(*(long *)(lVar29 + 0x130) +
                                         (ulong)*(uint *)(lVar29 + 0x138) * 0x10 + -0xc) -
                               *(int *)(*(long *)(lVar29 + 0x130) + 4));
              }
            }
            auVar3 = SEXT816((long)((ulong)*(uint *)PTR_DAT_047e6fa0 * (long)(int)local_2e8)) *
                     SEXT816(0x20c49ba5e353f7cf);
            iVar12 = ((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f)) - (int)local_2e0;
            if (iVar12 <= iVar8) {
              iVar12 = iVar8;
            }
            auVar3 = SEXT816((long)((long)(int)local_330 * (ulong)*(uint *)PTR_DAT_047e6fa0)) *
                     SEXT816(0x20c49ba5e353f7cf);
            iVar4 = ((int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f)) - (int)local_328;
            iVar8 = iVar4;
            if (iVar4 <= iVar9) {
              iVar8 = iVar9;
            }
            lVar13 = (lVar28 - lVar13) + (long)iVar8;
            lVar29 = lVar28 + iVar12;
            if (lVar28 + iVar12 <= lVar13) {
              lVar29 = lVar13;
            }
            if (iVar4 <= local_348) {
              iVar4 = local_348;
            }
            lVar13 = lVar28 + iVar4;
          }
          local_4a0 = 0;
          bVar11 = local_2d8;
LAB_03528804:
          if ((bStack_2ec & 0x38) == 8) {
            bVar7 = true;
          }
          else if ((char)bStack_2ec < '\0') {
            bVar7 = (bStack_2ec & 0x30) == 0x10;
          }
          else {
            bVar7 = false;
          }
          local_49c = local_2e0._4_4_;
          local_4f4 = FUN_035316d0(local_2c8,lVar29,bVar11 & 0x1f,&local_49c,bVar7 ^ 1,1,&local_498)
          ;
          if (local_4f4 == 3) {
            if (local_1a0._2_1_ == '\0') {
              local_4f4 = 3;
            }
            else {
              plVar18 = (long *)*plVar17;
              plVar25 = plVar18;
              if ((plVar18 != (long *)0x0) && (plVar23 != plVar18)) {
                do {
                  plVar25 = (long *)*plVar25;
                } while (plVar25 != (long *)0x0 && plVar23 != plVar25);
              }
              if (plVar25 != (long *)0x0) {
                plVar26 = (long *)param_1[0x14];
                if (plVar26 != (long *)0x0) {
                  plVar24 = plVar25;
                  do {
                    plVar24 = (long *)*plVar24;
                    if (plVar24 == (long *)0x0) goto LAB_035288c8;
                  } while (plVar26 != plVar24);
                  plVar25 = plVar24;
                  plVar23 = plVar26;
                }
LAB_035288c8:
                plVar26 = (long *)*plVar25;
                plVar24 = plVar20;
                plVar34 = plVar21;
                if ((long *)*plVar25 != (long *)0x0) {
                  while( true ) {
                    plVar21 = plVar26;
                    plVar26 = (long *)*plVar21;
                    plVar20 = plVar17;
                    if (plVar18 != plVar21) {
                      plVar20 = plVar25;
                    }
                    *plVar20 = (long)plVar26;
                    if ((long *)param_1[0x12] == plVar21) {
                      param_1[0x12] = (long)plVar25;
                    }
                    *plVar21 = 0;
                    plVar20 = plVar21;
                    if (plVar24 != (long *)0x0) {
                      *plVar34 = (long)plVar21;
                      plVar20 = plVar24;
                    }
                    if (plVar26 == (long *)0x0) break;
                    plVar18 = (long *)*plVar17;
                    plVar24 = plVar20;
                    plVar34 = plVar21;
                  }
                  bVar11 = local_2d8;
                }
              }
              (**(code **)(*param_1 + 0xc0))(param_1,local_2c8);
              if ((bStack_2ec & 0x38) == 8) {
                bVar7 = true;
              }
              else if ((char)bStack_2ec < '\0') {
                bVar7 = (bStack_2ec & 0x30) == 0x10;
              }
              else {
                bVar7 = false;
              }
              local_4f4 = FUN_035316d0(local_2c8,lVar29,bVar11 & 0x1f,&local_49c,bVar7 ^ 1,1,
                                       &local_498);
            }
          }
          local_388 = 0;
          local_368 = 0;
          local_370 = 0;
          local_380 = 0;
          uStack_378 = 0;
          local_360 = 0x1000001;
          if ((local_4a8 != (undefined8 *)0x0) && (local_4f4 == 1)) {
            *(ulong *)(local_4b8[1] + 0x68) = CONCAT44(uStack_494,local_498);
            local_370 = 1;
            uStack_378 = 0;
            local_380 = 0;
            apuStack_488[0] = local_4b8;
            local_388 = 1;
            (**(code **)(*(long *)local_4b8[1] + 0xb8))((long *)local_4b8[1],apuStack_488,0);
            local_370 = local_370 + -1;
            local_4f4 = FUN_035316d0(apuStack_488,lVar13,local_320 & 0x1f,&local_4a0,1,1,&local_358)
            ;
          }
          if ((bStack_2ec & 0x38) == 8) {
            bVar7 = true;
LAB_03528abc:
            if (((local_4f4 != 1) || (!bVar7)) || (*param_3 != 0)) goto LAB_03528cc0;
            if (*(long *)(local_1c0 + 0x18) == 0) goto LAB_03528cc8;
            if ((bStack_2ec & 0x38) == 8) {
              uVar10 = (ulong)local_1c8;
              if (local_1c8 == 0) {
                iVar8 = 0;
              }
              else {
                uVar22 = uVar10 & 3;
                if (uVar10 - 1 < 3) {
                  uVar27 = 0;
                  lVar29 = 0;
                }
                else {
                  uVar27 = 0;
                  lVar29 = 0;
                  plVar25 = local_2c8 + 2;
                  do {
                    uVar27 = uVar27 + 4;
                    lVar29 = *(long *)(*(long *)(plVar25[1] + 8) + 0x68) +
                             *(long *)(*(long *)(*plVar25 + 8) + 0x68) +
                             *(long *)(*(long *)(plVar25[-1] + 8) + 0x68) +
                             *(long *)(*(long *)(plVar25[-2] + 8) + 0x68) + lVar29;
                    plVar25 = plVar25 + 4;
                  } while ((uVar10 & 0xfffffffc) != uVar27);
                }
                iVar8 = (int)lVar29;
                if ((local_1c8 & 3) != 0) {
                  plVar25 = local_2c8 + uVar27;
                  do {
                    uVar22 = uVar22 - 1;
                    lVar29 = *(long *)(*(long *)(*plVar25 + 8) + 0x68) + lVar29;
                    iVar8 = (int)lVar29;
                    plVar25 = plVar25 + 1;
                  } while (uVar22 != 0);
                }
              }
              local_33c = 0;
              local_340 = (int)local_1b8[0x11] + ((local_498 - iVar8) - *(int *)(local_1c0 + 8));
              plVar25 = (long *)*param_4;
              pcVar15 = *(code **)(*plVar25 + 0xb0);
              uVar33 = 0;
            }
            else {
              plVar25 = (long *)*param_4;
              pcVar15 = *(code **)(*plVar25 + 0xb0);
              uVar33 = local_49c;
            }
            (*pcVar15)(plVar25,&local_300,local_4b0,&local_340,&local_348,auStack_344,uVar33,1);
            iVar9 = local_348;
            iVar8 = local_34c;
            if (local_4a8 == (undefined8 *)0x0) {
              local_34c = local_348;
              iVar8 = local_348;
            }
            else {
              local_98 = 0;
              local_78 = 0;
              local_90 = 0;
              local_80 = 0;
              _local_70 = 0x1000001;
              (**(code **)(*local_4e0 + 0xb8))(local_4e0,&local_198,0);
              local_70 = (uint3)(ushort)local_70;
              if ((local_90 == 0) || (*(long *)(local_90 + 0x18) == 0)) {
                iVar12 = 0;
              }
              else {
                lVar29 = *(long *)(*(long *)(local_90 + 0x18) + 0x78);
                iVar12 = 0;
                if (lVar29 != 0) {
                  iVar12 = *(int *)(*(long *)(lVar29 + 0x130) + 4) -
                           *(int *)(*(long *)(lVar29 + 0x130) +
                                    (ulong)*(uint *)(lVar29 + 0x138) * 0x10 + -0xc);
                }
              }
              if (iVar8 <= iVar12 + iVar9) {
                iVar8 = iVar12 + iVar9;
              }
            }
            if ((long)iVar8 <= CONCAT44(uStack_494,local_498) - lVar28) goto LAB_03528cc8;
            lVar29 = lVar28 + iVar8;
            goto LAB_03528804;
          }
          if ((char)bStack_2ec < '\0') {
            bVar7 = (bStack_2ec & 0x30) == 0x10;
            goto LAB_03528abc;
          }
LAB_03528cc0:
          if (local_4f4 != 1) {
            (**(code **)(*param_1 + 0xb8))(param_1,local_2c8,0);
            iVar8 = 0;
            local_4ec = -1;
            goto LAB_03529140;
          }
LAB_03528cc8:
          uVar1 = local_1b0;
          uVar10 = (ulong)local_1b0;
          local_1b0 = local_1b0 + 1;
          if (uVar1 == local_1c8) {
            plVar23 = (long *)0x0;
          }
          else {
            plVar23 = (long *)local_2c8[uVar10];
          }
          plVar18 = (long *)*plVar17;
          plVar25 = plVar18;
          if ((plVar18 != (long *)0x0) && (plVar23 != plVar18)) {
            do {
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0 && plVar23 != plVar25);
          }
          if (plVar25 != (long *)0x0) {
            plVar26 = (long *)param_1[0x14];
            if (plVar26 != (long *)0x0) {
              plVar24 = plVar25;
              do {
                plVar24 = (long *)*plVar24;
                if (plVar24 == (long *)0x0) goto LAB_03528d50;
              } while (plVar26 != plVar24);
              plVar25 = plVar24;
              plVar23 = plVar26;
            }
LAB_03528d50:
            plVar26 = (long *)*plVar25;
            plVar24 = plVar20;
            plVar34 = plVar21;
            if ((long *)*plVar25 != (long *)0x0) {
              while( true ) {
                plVar21 = plVar26;
                plVar26 = (long *)*plVar21;
                plVar20 = plVar17;
                if (plVar18 != plVar21) {
                  plVar20 = plVar25;
                }
                *plVar20 = (long)plVar26;
                if ((long *)param_1[0x12] == plVar21) {
                  param_1[0x12] = (long)plVar25;
                }
                *plVar21 = 0;
                plVar20 = plVar21;
                if (plVar24 != (long *)0x0) {
                  *plVar34 = (long)plVar21;
                  plVar20 = plVar24;
                }
                if (plVar26 == (long *)0x0) break;
                plVar18 = (long *)*plVar17;
                plVar24 = plVar20;
                plVar34 = plVar21;
              }
            }
          }
          local_1b0 = uVar1;
          (**(code **)(*param_1 + 0xc0))(param_1,local_2c8);
          if ((*param_3 == 0) && (*(char *)(param_1[0xf] + 0x170) != '\0')) {
            lVar13 = (**(code **)(*(long *)plVar23[1] + 0xd0))();
            if (lVar13 == 0) {
              if (param_2 == 0) goto LAB_03528e04;
              goto LAB_03528f58;
            }
            if (*(int *)(lVar13 + 0x18) != param_2) goto LAB_03528f58;
LAB_03528e04:
            iVar8 = 6;
          }
          else {
LAB_03528f58:
            param_1[0x15] = (long)plVar23;
            if (*(long *)(local_1c0 + 0x18) == 0) {
              plVar25 = (long *)(**(code **)(*local_1b8 + 0xd0))();
              if (plVar25 == (long *)0x0) {
                plVar25 = (long *)(**(code **)(*(long *)local_1b8[2] + 0xd0))();
              }
            }
            else {
              plVar25 = *(long **)(*(long *)(*(long *)(local_1c0 + 0x18) + 0x78) + 0x98);
            }
            if (plVar25 != (long *)0x0) {
              if (*(long *)(local_1c0 + 0x18) == 0) {
                iVar8 = 0;
              }
              else {
                uVar10 = (ulong)local_1c8;
                if (local_1c8 == 0) {
                  iVar8 = 0;
                }
                else {
                  uVar22 = uVar10 & 3;
                  if (uVar10 - 1 < 3) {
                    uVar27 = 0;
                    lVar13 = 0;
                  }
                  else {
                    uVar27 = 0;
                    lVar13 = 0;
                    plVar18 = local_2c8 + 2;
                    do {
                      uVar27 = uVar27 + 4;
                      lVar13 = *(long *)(*(long *)(plVar18[1] + 8) + 0x68) +
                               *(long *)(*(long *)(*plVar18 + 8) + 0x68) +
                               *(long *)(*(long *)(plVar18[-1] + 8) + 0x68) +
                               *(long *)(*(long *)(plVar18[-2] + 8) + 0x68) + lVar13;
                      plVar18 = plVar18 + 4;
                    } while ((uVar10 & 0xfffffffc) != uVar27);
                  }
                  iVar8 = (int)lVar13;
                  if ((local_1c8 & 3) != 0) {
                    plVar18 = local_2c8 + uVar27;
                    do {
                      uVar22 = uVar22 - 1;
                      lVar13 = *(long *)(*(long *)(*plVar18 + 8) + 0x68) + lVar13;
                      iVar8 = (int)lVar13;
                      plVar18 = plVar18 + 1;
                    } while (uVar22 != 0);
                  }
                }
                iVar8 = (int)local_1b8[0x11] + ((local_498 - iVar8) - *(int *)(local_1c0 + 8));
              }
              iVar9 = (**(code **)(*plVar25 + 0x88))(plVar25);
              if (((iVar9 == 8) && (local_1c0 != 0)) && (*(long *)(local_1c0 + 0x18) != 0)) {
                uVar33 = *(undefined4 *)(*(long *)(local_1c0 + 0x18) + 0x98);
              }
              else {
                uVar33 = 0;
              }
              (**(code **)(*param_1 + 0x90))(param_1,(int)plVar25[3],iVar8,uVar33);
            }
            FUN_0352a73c(param_1,lVar28,local_4b8,&local_2e8,&local_318,local_2c8,local_34c,
                         CONCAT44(uStack_494,local_498),0,&local_2d0);
            if (local_4a8 != (undefined8 *)0x0) {
              FUN_0352a73c(param_1,lVar28,local_4a8,&local_330,&local_300,apuStack_488,local_348,
                           local_358,1,&local_2d0);
            }
            bVar6 = false;
            iVar8 = 0;
          }
          local_4f4 = 1;
        }
LAB_03529140:
      } while (local_4f4 != 1 && iVar8 != 6);
      puVar32 = PTR_DAT_047e2fd0;
      if (bVar6) {
        if (local_4b8 != (undefined8 *)0x0) {
          if (local_4a8 == (undefined8 *)0x0) {
            plVar21 = (long *)local_4b8[1];
            local_4b8[1] = 0;
            if (plVar21 != (long *)0x0) {
              iVar8 = (int)plVar21[9] + -1;
              *(int *)(plVar21 + 9) = iVar8;
              if (iVar8 == 0) {
                if (plVar21[2] == 0) {
                  FUN_03518540(plVar21);
                }
                else {
                  FUN_0351c44c(plVar21[2],plVar21);
                  plVar21[2] = 0;
                }
                (**(code **)(*plVar21 + 0x50))(plVar21);
                (**(code **)(puVar32 + 0x30))(0,plVar21);
              }
              plVar21 = (long *)local_4b8[1];
              if (plVar21 != (long *)0x0) {
                iVar8 = (int)plVar21[9] + -1;
                *(int *)(plVar21 + 9) = iVar8;
                if (iVar8 == 0) {
                  if (plVar21[2] == 0) {
                    FUN_03518540(plVar21);
                  }
                  else {
                    FUN_0351c44c(plVar21[2],plVar21);
                    plVar21[2] = 0;
                  }
                  (**(code **)(*plVar21 + 0x50))(plVar21);
                  (**(code **)(puVar32 + 0x30))(0,plVar21);
                }
                local_4a8 = local_4b8;
                goto LAB_03529798;
              }
            }
          }
          else {
            *(byte *)(local_4b8 + 10) = *(byte *)(local_4b8 + 10) & 0xfc;
            (**(code **)(*(long *)local_4b8[1] + 0x10))((long *)local_4b8[1],0);
            plVar21 = (long *)local_4b8[1];
            local_4b8[1] = 0;
            if (plVar21 != (long *)0x0) {
              iVar8 = (int)plVar21[9] + -1;
              *(int *)(plVar21 + 9) = iVar8;
              if (iVar8 == 0) {
                if (plVar21[2] == 0) {
                  FUN_03518540(plVar21);
                }
                else {
                  FUN_0351c44c(plVar21[2],plVar21);
                  plVar21[2] = 0;
                }
                (**(code **)(*plVar21 + 0x50))(plVar21);
                (**(code **)(puVar32 + 0x30))(0,plVar21);
              }
              plVar21 = (long *)local_4b8[1];
              if (plVar21 != (long *)0x0) {
                iVar8 = (int)plVar21[9] + -1;
                *(int *)(plVar21 + 9) = iVar8;
                if (iVar8 == 0) {
                  if (plVar21[2] == 0) {
                    FUN_03518540(plVar21);
                  }
                  else {
                    FUN_0351c44c(plVar21[2],plVar21);
                    plVar21[2] = 0;
                  }
                  (**(code **)(*plVar21 + 0x50))(plVar21);
                  (**(code **)(puVar32 + 0x30))(0,plVar21);
                }
                local_4b8[1] = 0;
              }
            }
            (**(code **)(puVar32 + 0x30))(0,local_4b8);
            plVar21 = (long *)local_4a8[1];
            local_4a8[1] = 0;
            if (plVar21 != (long *)0x0) {
              iVar8 = (int)plVar21[9] + -1;
              *(int *)(plVar21 + 9) = iVar8;
              if (iVar8 == 0) {
                if (plVar21[2] == 0) {
                  FUN_03518540(plVar21);
                }
                else {
                  FUN_0351c44c(plVar21[2],plVar21);
                  plVar21[2] = 0;
                }
                (**(code **)(*plVar21 + 0x50))(plVar21);
                (**(code **)(puVar32 + 0x30))(0,plVar21);
              }
              plVar21 = (long *)local_4a8[1];
              if (plVar21 != (long *)0x0) {
                iVar8 = (int)plVar21[9] + -1;
                *(int *)(plVar21 + 9) = iVar8;
                if (iVar8 == 0) {
                  if (plVar21[2] == 0) {
                    FUN_03518540(plVar21);
                  }
                  else {
                    FUN_0351c44c(plVar21[2],plVar21);
                    plVar21[2] = 0;
                  }
                  (**(code **)(*plVar21 + 0x50))(plVar21);
                  (**(code **)(puVar32 + 0x30))(0,plVar21);
                }
LAB_03529798:
                local_4a8[1] = 0;
              }
            }
          }
          (**(code **)(puVar32 + 0x30))(0);
        }
        plVar21 = (long *)*param_4;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x10))(plVar21,0);
          *param_4 = 0;
        }
        uVar10 = (**(code **)(**(long **)(param_1[0x12] + 8) + 0xd8))();
        if ((uVar10 & 1) != 0) {
          lVar13 = param_1[0x12];
          if ((*(byte *)(lVar13 + 0x50) & 6) == 4) {
            dVar36 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
            dVar36 = ((double)((int)lVar28 - *(int *)(lVar13 + 0x38)) * 1000.0) / dVar36;
            dVar35 = 0.5;
            if (dVar36 <= 0.0) {
              dVar35 = -0.5;
            }
            local_198 = (int)(dVar35 + dVar36);
            local_194 = *(undefined4 *)(lVar13 + 0x44);
            local_190 = 0;
            FUN_0351ca80(*(undefined8 *)(lVar13 + 8),&local_198);
            bVar11 = *(byte *)(lVar13 + 0x50);
          }
          else {
            bVar11 = *(byte *)(lVar13 + 0x50) & 0xfd;
            *(byte *)(lVar13 + 0x50) = bVar11;
          }
          *(byte *)(lVar13 + 0x50) = bVar11 & 0xfb;
          *(undefined1 *)(lVar13 + 0x18) = 0;
        }
      }
      FUN_0351e8ec(param_1[0xc],&local_2d0);
      goto joined_r0x0352987c;
    }
  }
  plVar17 = param_1 + 0x13;
  plVar18 = (long *)*plVar17;
  plVar25 = plVar18;
  if ((plVar18 != (long *)0x0) && (plVar23 != plVar18)) {
    do {
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0 && plVar23 != plVar25);
  }
  if (plVar25 != (long *)0x0) {
    if ((long *)param_1[0x14] == (long *)0x0) {
LAB_03527cf4:
      plVar23 = plVar25;
    }
    else {
      plVar23 = plVar25;
      do {
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) goto LAB_03527cf4;
      } while ((long *)param_1[0x14] != plVar23);
    }
    plVar25 = (long *)*plVar23;
    plVar26 = plVar20;
    if ((long *)*plVar23 != (long *)0x0) {
      while( true ) {
        plVar24 = plVar25;
        plVar25 = (long *)*plVar24;
        plVar20 = plVar17;
        if (plVar18 != plVar24) {
          plVar20 = plVar23;
        }
        *plVar20 = (long)plVar25;
        if ((long *)param_1[0x12] == plVar24) {
          param_1[0x12] = (long)plVar23;
        }
        *plVar24 = 0;
        plVar20 = plVar24;
        if (plVar26 != (long *)0x0) {
          *plVar21 = (long)plVar24;
          plVar20 = plVar26;
        }
        if (plVar25 == (long *)0x0) break;
        plVar18 = (long *)*plVar17;
        plVar26 = plVar20;
        plVar21 = plVar24;
      }
    }
  }
  puVar32 = PTR_DAT_047e2fd0;
  (**(code **)(*param_1 + 0xc0))(param_1,local_2c8);
  (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,0);
  *param_4 = 0;
  uVar10 = (**(code **)(**(long **)(param_1[0x12] + 8) + 0xd8))();
  if ((uVar10 & 1) != 0) {
    lVar13 = param_1[0x12];
    if ((*(byte *)(lVar13 + 0x50) & 6) == 4) {
      dVar36 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
      dVar36 = ((double)((int)lVar28 - *(int *)(lVar13 + 0x38)) * 1000.0) / dVar36;
      dVar35 = 0.5;
      if (dVar36 <= 0.0) {
        dVar35 = -0.5;
      }
      local_198 = (int)(dVar35 + dVar36);
      local_194 = *(undefined4 *)(lVar13 + 0x44);
      local_190 = 0;
      FUN_0351ca80(*(undefined8 *)(lVar13 + 8),&local_198);
      bVar11 = *(byte *)(lVar13 + 0x50);
    }
    else {
      bVar11 = *(byte *)(lVar13 + 0x50) & 0xfd;
      *(byte *)(lVar13 + 0x50) = bVar11;
    }
    *(byte *)(lVar13 + 0x50) = bVar11 & 0xfb;
    *(undefined1 *)(lVar13 + 0x18) = 0;
  }
joined_r0x0352987c:
  while (plVar20 != (long *)0x0) {
    plVar23 = (long *)*plVar20;
    *(byte *)(plVar20 + 10) = *(byte *)(plVar20 + 10) & 0xfc;
    (**(code **)(*(long *)plVar20[1] + 0x10))((long *)plVar20[1],0);
    plVar21 = (long *)plVar20[1];
    plVar20[1] = 0;
    if (plVar21 != (long *)0x0) {
      iVar8 = (int)plVar21[9] + -1;
      *(int *)(plVar21 + 9) = iVar8;
      if (iVar8 == 0) {
        if (plVar21[2] == 0) {
          FUN_03518540(plVar21);
        }
        else {
          FUN_0351c44c(plVar21[2],plVar21);
          plVar21[2] = 0;
        }
        (**(code **)(*plVar21 + 0x50))(plVar21);
        (**(code **)(puVar32 + 0x30))(0,plVar21);
      }
      plVar21 = (long *)plVar20[1];
      if (plVar21 != (long *)0x0) {
        iVar8 = (int)plVar21[9] + -1;
        *(int *)(plVar21 + 9) = iVar8;
        if (iVar8 == 0) {
          if (plVar21[2] == 0) {
            FUN_03518540(plVar21);
          }
          else {
            FUN_0351c44c(plVar21[2],plVar21);
            plVar21[2] = 0;
          }
          (**(code **)(*plVar21 + 0x50))(plVar21);
          (**(code **)(puVar32 + 0x30))(0,plVar21);
        }
        plVar20[1] = 0;
      }
    }
    (**(code **)(puVar32 + 0x30))(0,plVar20);
    plVar20 = plVar23;
  }
  return;
}


