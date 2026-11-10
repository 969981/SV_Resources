/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01776eec; name: FUN_01776eec
 */


void FUN_01776eec(undefined8 *param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint *puVar23;
  long lVar24;
  long *plVar25;
  uint uVar26;
  uint local_2590 [2];
  undefined1 auStack_2588 [24];
  long *local_2570;
  undefined1 auStack_2568 [344];
  long local_2410;
  uint local_2408;
  long local_2404 [2];
  undefined4 local_23f4;
  char local_23f0 [32];
  long local_23d0;
  uint local_23c8 [7];
  byte local_23ac [8916];
  long *local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  uint local_70;
  uint uStack_6c;
  
  memset(auStack_2568,0,0x2490);
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar21 = *(undefined8 *)PTR_DAT_047d4ca0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar21;
  FUN_00d8fb98(auStack_2588,PTR_DAT_047dcc90);
  lVar14 = FUN_00f844f4(uVar21,auStack_2588);
  pMVar1 = (MutexType *)(lVar14 + 0x80);
  local_2590[0] = 0x173304d8;
  nn::os::LockMutex(pMVar1);
  plVar15 = *(long **)(lVar14 + 0x60);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x28))(plVar15,local_2590);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar14 + 0x10);
  uVar20 = (long)puVar5 - (long)*(uint **)(lVar14 + 8);
  if (0 < (long)uVar20) {
    puVar18 = *(uint **)(lVar14 + 8);
    puVar19 = puVar5;
    do {
      puVar23 = puVar18 + (uVar20 / 0x60) * 0xc;
      if (*puVar23 == local_2590[0]) goto LAB_01776ffc;
      puVar4 = puVar23 + 0xc;
      if (local_2590[0] <= *puVar23) {
        puVar4 = puVar18;
        puVar19 = puVar23;
      }
      uVar20 = (long)puVar19 - (long)puVar4;
      puVar18 = puVar4;
    } while (0 < (long)uVar20);
  }
  puVar23 = puVar5;
LAB_01776ffc:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar23 == (uint *)0x0) || (puVar5 == puVar23)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar21 = *(undefined8 *)(puVar23 + 2);
    uVar22 = *(undefined8 *)(puVar23 + 6);
    local_d8 = (long *)(PTR_DAT_047dcc88 + 0x10);
    uStack_6c = *puVar23;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_78 = 0;
    local_70 = 0;
    local_80 = puVar2;
    if (uStack_6c != 0) {
      uVar20 = (ulong)uStack_6c - ((ulong)(uStack_6c >> 1) & 0x5555555555555555);
      uStack_6c = uStack_6c ^ uStack_6c << 2;
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
      uStack_6c = uStack_6c ^ uStack_6c << 0xd;
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar20 != 1) &&
          (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
          uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar20 != 2)) &&
         (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
         uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar20 != 3)) {
        FUN_00f83090(&local_80);
        for (lVar24 = uVar20 - 4; lVar24 != 0; lVar24 = lVar24 + -1) {
          (**(code **)(local_80 + 0x10))(&local_80);
        }
      }
    }
    local_90 = CONCAT44(uStack_6c,uStack_6c);
    local_c0 = PTR_DAT_047dcc78 + 0x10;
    local_a8 = 0;
    uStack_88 = 0;
    local_d0 = PTR_DAT_047dcc80 + 0x10;
    uStack_c8 = 0;
    local_b8 = uVar21;
    uStack_b0 = uVar22;
    local_a0 = puVar2;
    uStack_98 = local_78;
    local_70 = uStack_6c;
    cVar12 = FUN_00f88478(&local_d8,auStack_2568,0x2490);
    nn::os::UnlockMutex(pMVar1);
    if (cVar12 != '\0') goto LAB_01777168;
  }
  plVar15 = *(long **)(lVar14 + 0x60);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x50))(plVar15,local_2590);
  }
LAB_01777168:
  if (local_2570 != (long *)0x0) {
    (**(code **)(*local_2570 + 0x20))();
  }
  puVar11 = PTR_DAT_047d4250;
  puVar10 = PTR_DAT_047d4248;
  puVar2 = PTR_DAT_047d3a88;
  lVar14 = 0;
  do {
    plVar15 = param_1 + lVar14 * 0x10;
    lVar24 = *plVar15;
    if (lVar24 == 0) {
      lVar24 = FUN_00fee8fc(&local_d8,*(undefined8 *)(*(long *)puVar2 + 8));
      if (lVar24 != 0) {
        piVar3 = (int *)(lVar24 + 0x28);
        do {
          iVar13 = *piVar3;
          cVar12 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar13 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (iVar13 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar16 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar16 != (long *)0x0) {
        plVar17 = plVar16 + 5;
        do {
          lVar9 = *plVar17;
          iVar13 = (int)lVar9 + -1;
          cVar12 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *(int *)plVar17 = iVar13;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
        else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *plVar15 = lVar24;
    }
    lVar9 = lVar14 * 0x1d4;
    FUN_00f13ad8(lVar24,auStack_2568 + lVar9);
    lVar24 = *(long *)(auStack_2568 + lVar9 + 0x158);
    plVar15[3] = (ulong)*(uint *)((long)local_2404 + lVar9 + -4);
    plVar15[2] = lVar24;
    lVar24 = *(long *)((long)local_2404 + lVar9);
    plVar15[5] = *(long *)((long)local_2404 + lVar9 + 8);
    plVar15[4] = lVar24;
    *(undefined4 *)(plVar15 + 6) = *(undefined4 *)((long)local_2404 + lVar9 + 0x10);
    if (local_23f0[lVar9] == '\0') {
      plVar16 = (long *)FUN_00d44228();
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,puVar10,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar21 = *(undefined8 *)puVar10;
      *(undefined8 *)puVar11 = uVar21;
      FUN_00cf9884(&local_d8,uVar21,local_23f0 + lVar9);
      plVar16 = local_d8;
    }
    plVar25 = plVar15 + 7;
    plVar17 = (long *)*plVar25;
    *plVar25 = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))();
    }
    lVar9 = lVar14 * 0x1d4;
    *plVar25 = (long)plVar16;
    lVar8 = *(long *)(local_23f0 + lVar9 + 0x20);
    lVar24 = lVar14 + 1;
    plVar15[9] = (ulong)local_23c8[lVar14 * 0x75];
    plVar15[8] = lVar8;
    lVar8 = *(long *)(local_23c8 + lVar14 * 0x75 + 1);
    uVar26 = local_23c8[lVar14 * 0x75 + 3];
    plVar15[0xb] = (ulong)uVar26;
    plVar15[10] = lVar8;
    uVar6 = local_23c8[lVar14 * 0x75 + 5];
    *(uint *)(plVar15 + 0xc) = local_23c8[lVar14 * 0x75 + 4];
    *(uint *)((long)plVar15 + 100) = uVar6;
    *(uint *)(plVar15 + 0xd) = local_23c8[lVar14 * 0x75 + 6];
    *(byte *)((long)plVar15 + 0x6c) = local_23ac[lVar9];
    *(uint *)(plVar15 + 0xe) = (uint)local_23ac[lVar9 + 1];
    lVar14 = lVar24;
  } while (lVar24 != 0x14);
  *(undefined4 *)(param_1 + 0x140) = 0;
  uVar20 = FUN_01777644(lVar8,(ulong)uVar26,0,*param_1);
  if ((uVar20 & 1) == 0) {
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
    uVar20 = FUN_01777644(param_1[0x10]);
    if ((uVar20 & 1) == 0) {
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      uVar20 = FUN_01777644(param_1[0x20]);
      if ((uVar20 & 1) == 0) {
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
        uVar20 = FUN_01777644(param_1[0x30]);
        if ((uVar20 & 1) == 0) {
          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          uVar20 = FUN_01777644(param_1[0x40]);
          if ((uVar20 & 1) == 0) {
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
            uVar20 = FUN_01777644(param_1[0x50]);
            if ((uVar20 & 1) == 0) {
              *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
              uVar20 = FUN_01777644(param_1[0x60]);
              if ((uVar20 & 1) == 0) {
                *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                uVar20 = FUN_01777644(param_1[0x70]);
                if ((uVar20 & 1) == 0) {
                  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                  uVar20 = FUN_01777644(param_1[0x80]);
                  if ((uVar20 & 1) == 0) {
                    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                    uVar20 = FUN_01777644(param_1[0x90]);
                    if ((uVar20 & 1) == 0) {
                      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                      uVar20 = FUN_01777644(param_1[0xa0]);
                      if ((uVar20 & 1) == 0) {
                        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                        uVar20 = FUN_01777644(param_1[0xb0]);
                        if ((uVar20 & 1) == 0) {
                          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                          uVar20 = FUN_01777644(param_1[0xc0]);
                          if ((uVar20 & 1) == 0) {
                            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                            uVar20 = FUN_01777644(param_1[0xd0]);
                            if ((uVar20 & 1) == 0) {
                              *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                              uVar20 = FUN_01777644(param_1[0xe0]);
                              if ((uVar20 & 1) == 0) {
                                *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                                uVar20 = FUN_01777644(param_1[0xf0]);
                                if ((uVar20 & 1) == 0) {
                                  *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                                  uVar20 = FUN_01777644(param_1[0x100]);
                                  if ((uVar20 & 1) == 0) {
                                    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                                    uVar20 = FUN_01777644(param_1[0x110]);
                                    if ((uVar20 & 1) == 0) {
                                      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                                      uVar20 = FUN_01777644(param_1[0x120]);
                                      if ((uVar20 & 1) == 0) {
                                        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
                                        uVar20 = FUN_01777644(param_1[0x130]);
                                        if ((uVar20 & 1) == 0) {
                                          *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
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
  return;
}


