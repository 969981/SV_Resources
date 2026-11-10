/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034627ac; name: FUN_034627ac
 */


int FUN_034627ac(long param_1,long param_2,long *param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  MutexType *pMVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  bool bVar12;
  undefined *puVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  void *__dest;
  void *pvVar22;
  long lVar23;
  char *pcVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  long *plVar30;
  long *plVar31;
  undefined8 uVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  bool bVar36;
  uint *puVar37;
  long lVar38;
  undefined8 *puVar39;
  bool bVar40;
  long lVar41;
  undefined8 *puVar42;
  int *piVar43;
  ulong uVar44;
  long *plVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  int local_1b8;
  uint local_1b4;
  undefined8 local_1b0;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  uint local_198;
  undefined4 local_194;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  float local_7c [3];
  
  uVar3 = *(undefined4 *)(param_2 + 4);
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  iVar15 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 0x28) == 2) {
    lVar41 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar41 = 0;
  }
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  puVar13 = PTR_DAT_047e70e0;
  uVar4 = *(uint *)(param_1 + 0xb0);
  if (uVar4 != 0) {
    uVar26 = iVar15 + (int)lVar41;
    uVar27 = 0;
    if (uVar4 != 0) {
      uVar27 = uVar26 / uVar4;
    }
    for (piVar43 = *(int **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar26 - uVar27 * uVar4) * 8);
        piVar43 != (int *)0x0; piVar43 = *(int **)(piVar43 + 4)) {
      if ((*piVar43 == iVar15) && (*(long *)(piVar43 + 2) == lVar41)) {
        nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
        bVar7 = *(byte *)(piVar43 + 0x1a);
        nn::os::UnlockMutex((MutexType *)puVar13);
        if ((bVar7 & 1) != 0) {
          return 0x45;
        }
        *param_3 = (long)piVar43;
        if ((param_5 & 1) != 0) {
          piVar43[0x1c] = piVar43[0x1c] + 1;
        }
        bVar25 = true;
        iVar15 = 1;
        goto LAB_03462938;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
  nn::os::UnlockMutex((MutexType *)puVar13);
  puVar19 = (undefined4 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x78);
  if (puVar19 == (undefined4 *)0x0) {
    bVar25 = false;
    *param_3 = 0;
    iVar15 = 0x34;
  }
  else {
    uVar26 = (uint)(param_4 == 0);
    uVar4 = param_4 != 0 & param_5;
    if (*(int *)(param_2 + 0x28) == 2) {
      uVar32 = *(undefined8 *)(param_2 + 0x30);
    }
    else {
      uVar32 = 0;
    }
    *puVar19 = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)(puVar19 + 2) = uVar32;
    iVar15 = 1;
    *(undefined8 *)(puVar19 + 0xd) = 0;
    *(undefined8 *)(puVar19 + 10) = 0;
    *(undefined1 *)(puVar19 + 0xc) = 0;
    *(undefined8 *)(puVar19 + 6) = 0;
    *(undefined8 *)(puVar19 + 8) = 0;
    *(undefined8 *)(puVar19 + 0x10) = 0;
    *(undefined8 *)(puVar19 + 0x12) = 0;
    *(undefined8 *)(puVar19 + 0x14) = 0;
    *(undefined8 *)(puVar19 + 0x16) = 0;
    puVar19[0x18] = uVar26;
    puVar19[0x19] = uVar4 + (~(uVar26 | param_5) & 1);
    *(byte *)(puVar19 + 0x1a) = *(byte *)(puVar19 + 0x1a) & 0xf0 | param_4 == 0;
    puVar19[0x1b] = 0x10;
    puVar19[0x1c] = uVar4;
    bVar25 = true;
    *param_3 = (long)puVar19;
  }
LAB_03462938:
  puVar42 = (undefined8 *)(param_1 + 8);
  *puVar42 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar13 = PTR_DAT_047e2fc8;
  uVar4 = *(uint *)(param_2 + 0x28);
  if (bVar25) {
    if (param_4 != 0) {
LAB_03462954:
      lVar41 = *(long *)(param_2 + 8);
      local_1a0 = *(undefined8 *)(param_2 + 0x20);
      if (lVar41 == 0) {
LAB_034629f0:
        local_194 = 0xffffffff;
        local_1b0 = 0;
        local_198 = CONCAT31(local_198._1_3_,1);
        local_1a8 = 0;
        iVar15 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x28))
                           (*(long **)PTR_DAT_047e2fc8,uVar3,&local_1b0,0,param_1 + 0x48,1);
        if (iVar15 != 1) {
          plVar20 = *(long **)puVar13;
          local_198 = local_198 & 0xffffff00;
          iVar15 = (**(code **)(*plVar20 + 0x28))(plVar20,uVar3,&local_1b0,0,param_1 + 0x48,1);
          goto LAB_03462a68;
        }
      }
      else {
        local_194 = 0xffffffff;
        local_1b0 = 0;
        local_198 = CONCAT31(local_198._1_3_,1);
        local_1a8 = 0;
        iVar15 = (**(code **)(**(long **)PTR_DAT_047e2fc8 + 0x20))
                           (*(long **)PTR_DAT_047e2fc8,lVar41,&local_1b0,0,param_1 + 0x48,1);
        if (iVar15 != 1) {
          plVar20 = *(long **)puVar13;
          local_198 = local_198 & 0xffffff00;
          iVar15 = (**(code **)(*plVar20 + 0x20))(plVar20,lVar41,&local_1b0,0,param_1 + 0x48,1);
LAB_03462a68:
          if (iVar15 != 1) goto LAB_03462a84;
        }
      }
      iVar15 = FUN_0346ceac(puVar42,0);
      goto LAB_03462a84;
    }
    if (uVar4 == 1) {
      local_1a0 = *(undefined8 *)(param_2 + 0x20);
      goto LAB_034629f0;
    }
    if ((uVar4 & 0xfffffffe) != 2) goto LAB_03462954;
    uVar32 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x58) = uVar32;
    *(undefined4 *)(param_1 + 0x20) = uVar5;
  }
  else {
LAB_03462a84:
    local_1c0 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    if (iVar15 != 1) goto LAB_03462b7c;
  }
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  local_1b0 = local_1b0 & 0xffffffff00000000;
  iVar16 = FUN_0346d17c(puVar42,&local_1b8,8,&local_1b0);
  iVar15 = 0x38;
  if ((uint)local_1b0 == 8) {
    iVar15 = 1;
  }
  if (iVar16 != 1) {
    iVar15 = iVar16;
  }
  if ((iVar15 != 1) || (local_1b8 != 0x44484b42)) {
    iVar15 = 7;
    goto LAB_03462b7c;
  }
  local_1b0 = local_1b0 & 0xffffffff00000000;
  iVar16 = FUN_0346d17c(puVar42,&local_1d0,0x14,&local_1b0);
  iVar15 = 0x38;
  if ((uint)local_1b0 == 0x14) {
    iVar15 = 1;
  }
  if (iVar16 != 1) {
    iVar15 = iVar16;
  }
  if ((iVar15 == 1) && (iVar16 = local_1b4 - 0x14, iVar16 != 0)) {
    local_1b0 = local_1b0 & 0xffffffff00000000;
    iVar17 = FUN_0346cfd4(puVar42,iVar16,&local_1b0);
    iVar15 = 0x38;
    if ((uint)local_1b0 == iVar16) {
      iVar15 = 1;
    }
    if (iVar17 != 1) {
      iVar15 = iVar17;
    }
  }
  if (iVar15 != 1) goto LAB_03462b7c;
  if ((uint)local_1d0 < 0x8c) {
    if (0x75 < (uint)local_1d0) {
      bVar25 = false;
      goto LAB_03462c5c;
    }
    pcVar24 = "an older";
  }
  else {
    if ((uint)local_1d0 == 0x8c) {
      bVar25 = true;
LAB_03462c5c:
      pMVar2 = (MutexType *)(param_1 + 0x68);
      bVar40 = false;
LAB_03462c8c:
      local_1d4 = 0;
      iVar15 = FUN_0346d17c(puVar42,&local_1b8,8,&local_1d4);
      uVar26 = local_1b4;
      if (iVar15 != 1) goto LAB_03462b7c;
      if (local_1d4 == 0) {
        bVar40 = true;
        iVar15 = 1;
        goto LAB_03462d2c;
      }
      if (local_1d4 != 8) {
        bVar40 = true;
        iVar15 = 7;
        goto LAB_03462d2c;
      }
      if (bVar25) {
        if (local_1b8 < 0x53564e45) {
          if (local_1b8 < 0x44495453) {
            if (local_1b8 == 0x41544144) goto LAB_03462d78;
            if (local_1b8 == 0x43524948) {
              iVar15 = FUN_034652dc(param_1,*param_3,uVar3);
              goto LAB_0346321c;
            }
switchD_03462db4_caseD_2:
            FUN_0346cfd4(puVar42,local_1b4,&local_1d4);
            iVar15 = 7;
            if (local_1d4 == local_1b4) {
              iVar15 = 1;
            }
            bVar40 = (bool)(bVar40 | local_1d4 != local_1b4);
          }
          else {
            if (local_1b8 == 0x44495453) {
              if (local_1b4 == 0) {
                iVar15 = 1;
              }
              else {
                do {
                  local_7c[0] = 0.0;
                  iVar16 = FUN_0346d17c(uVar26,puVar42,&local_1b0,8,local_7c);
                  iVar15 = 0x38;
                  if (local_7c[0] == 1.12104e-44) {
                    iVar15 = 1;
                  }
                  if (iVar16 != 1) {
                    iVar15 = iVar16;
                  }
                  if (iVar15 != 1) break;
                  uVar26 = uVar26 - 8;
                  if (local_1b0._4_4_ != 0) {
                    uVar27 = 0;
                    do {
                      local_7c[0] = 0.0;
                      iVar16 = FUN_0346d17c(puVar42,&local_80,4,local_7c);
                      iVar15 = 0x38;
                      if (local_7c[0] == 5.60519e-45) {
                        iVar15 = 1;
                      }
                      if (iVar16 != 1) {
                        iVar15 = iVar16;
                      }
                      if (iVar15 != 1) goto LAB_03462d2c;
                      local_7c[0] = 0.0;
                      iVar16 = FUN_0346d17c(puVar42,&uStack_84,1,local_7c);
                      iVar15 = 0x38;
                      if (local_7c[0] == 1.4013e-45) {
                        iVar15 = 1;
                      }
                      if (iVar16 != 1) {
                        iVar15 = iVar16;
                      }
                      if (iVar15 != 1) goto LAB_03462d2c;
                      uVar28 = *(uint *)(param_1 + 0xd0);
                      if (uVar28 != 0) {
                        uVar34 = 0;
                        if (uVar28 != 0) {
                          uVar34 = local_80 / uVar28;
                        }
                        for (plVar20 = *(long **)(*(long *)(param_1 + 200) +
                                                 (ulong)(local_80 - uVar34 * uVar28) * 8);
                            plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
                          if (*(uint *)(plVar20 + 1) == local_80) {
                            FUN_0346cfd4(puVar42,(byte)uStack_84,local_7c);
                            uVar28 = uStack_84;
                            goto LAB_0346431c;
                          }
                        }
                      }
                      lVar41 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)(byte)uStack_84 + 5);
                      uVar34 = uStack_84;
                      if (lVar41 == 0) {
                        iVar15 = 0x34;
                        goto LAB_03462d2c;
                      }
                      *(undefined1 *)(lVar41 + (ulong)(byte)uStack_84) = 0x2e;
                      *(undefined1 *)((ulong)(byte)uStack_84 + lVar41 + 1) = 0x62;
                      *(undefined1 *)((ulong)(byte)uStack_84 + lVar41 + 2) = 0x6e;
                      *(undefined1 *)((ulong)(byte)uStack_84 + lVar41 + 3) = 0x6b;
                      *(undefined1 *)((ulong)(byte)uStack_84 + lVar41 + 4) = 0;
                      local_7c[0] = 0.0;
                      iVar16 = FUN_0346d17c(puVar42,lVar41,(byte)uStack_84,local_7c);
                      uVar33 = local_80;
                      uVar28 = uStack_84;
                      iVar15 = 0x38;
                      if (local_7c[0] == (float)(uVar34 & 0xff)) {
                        iVar15 = 1;
                      }
                      if (iVar16 != 1) {
                        iVar15 = iVar16;
                      }
                      if (iVar15 != 1) {
LAB_03464648:
                        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar41);
                        goto LAB_03462d2c;
                      }
                      uVar34 = *(uint *)(param_1 + 0xd0);
                      if (uVar34 == 0) {
                        uVar44 = 0x1d;
LAB_03464150:
                        lVar38 = *(long *)(param_1 + 200);
                        uVar5 = *(undefined4 *)(param_1 + 0xd4);
                        *(long *)(param_1 + 200) = 0;
                        *(undefined8 *)(param_1 + 0xd0) = 0;
                        lVar23 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,uVar44 << 3);
                        if (lVar23 == 0) {
                          if (*(long *)(param_1 + 200) != 0) {
                            *(undefined4 *)(param_1 + 0xd0) = 0;
                            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
                            *(undefined8 *)(param_1 + 200) = 0;
                            *(undefined4 *)(param_1 + 0xd4) = 0;
                          }
                          *(uint *)(param_1 + 0xd0) = uVar34;
                          *(undefined4 *)(param_1 + 0xd4) = uVar5;
                          *(long *)(param_1 + 200) = lVar38;
                        }
                        else {
                          iVar15 = (int)uVar44;
                          *(long *)(param_1 + 200) = lVar23;
                          *(int *)(param_1 + 0xd4) = iVar15;
                          while( true ) {
                            iVar15 = iVar15 + -1;
                            uVar10 = *(uint *)(param_1 + 0xd0);
                            if (uVar10 < (uint)uVar44) {
                              *(uint *)(param_1 + 0xd0) = uVar10 + 1;
                              if (*(long *)(param_1 + 200) != 0) {
                                *(undefined8 *)(*(long *)(param_1 + 200) + (ulong)uVar10 * 8) = 0;
                              }
                            }
                            if (iVar15 == 0) break;
                            uVar44 = (ulong)*(uint *)(param_1 + 0xd4);
                          }
                          if (uVar34 != 0) {
                            uVar44 = 0;
                            do {
                              plVar20 = (long *)*(long *)(lVar38 + uVar44 * 8);
                              while (plVar20 != (long *)0x0) {
                                uVar10 = *(uint *)(param_1 + 0xd0);
                                uVar9 = 0;
                                if (uVar10 != 0) {
                                  uVar9 = *(uint *)(plVar20 + 1) / uVar10;
                                }
                                uVar10 = *(uint *)(plVar20 + 1) - uVar9 * uVar10;
                                lVar23 = *plVar20;
                                *plVar20 = *(undefined8 *)
                                            (*(long *)(param_1 + 200) + (ulong)uVar10 * 8);
                                *(long **)(*(long *)(param_1 + 200) + (ulong)uVar10 * 8) = plVar20;
                                plVar20 = (long *)lVar23;
                              }
                              uVar44 = uVar44 + 1;
                            } while (uVar44 != uVar34);
                          }
                          if (lVar38 != 0) {
                            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar38);
                          }
LAB_03464230:
                          uVar34 = *(uint *)(param_1 + 0xd0);
                        }
                        if (uVar34 != 0) goto LAB_03464294;
LAB_0346463c:
                        iVar15 = 0x34;
                        goto LAB_03464648;
                      }
                      fVar48 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xd8));
                      if (0.9 < fVar48 / (float)uVar34) {
                        uVar44 = 0x1d;
                        if ((((((((((uVar34 < 0x1d) || (uVar44 = 0x35, uVar34 < 0x35)) ||
                                  (uVar44 = 0x61, uVar34 < 0x61)) ||
                                 ((uVar44 = 0xc1, uVar34 < 0xc1 || (uVar44 = 0x185, uVar34 < 0x185))
                                 )) || (uVar44 = 0x301, uVar34 < 0x301)) ||
                               (((uVar44 = 0x607, uVar34 < 0x607 || (uVar44 = 0xc07, uVar34 < 0xc07)
                                 ) || ((uVar44 = 0x1807, uVar34 < 0x1807 ||
                                       (((uVar44 = 0x3001, uVar34 < 0x3001 ||
                                         (uVar44 = 0x6011, uVar34 < 0x6011)) ||
                                        (uVar44 = 0xc005, uVar34 < 0xc005)))))))) ||
                              ((uVar44 = 0x1800d, uVar34 < 0x1800d ||
                               (uVar44 = 0x30005, uVar34 < 0x30005)))) ||
                             ((uVar44 = 0x60019, uVar34 < 0x60019 ||
                              (((uVar44 = 0xc0001, uVar34 < 0xc0001 ||
                                (uVar44 = 0x180005, uVar34 < 0x180005)) ||
                               ((uVar44 = 0x30000b, uVar34 < 0x30000b ||
                                (((uVar44 = 0x60000d, uVar34 < 0x60000d ||
                                  (uVar44 = 0xc00005, uVar34 < 0xc00005)) ||
                                 (uVar44 = 0x1800013, uVar34 < 0x1800013)))))))))) ||
                            (((uVar44 = 0x3000005, uVar34 < 0x3000005 ||
                              (uVar44 = 0x6000017, uVar34 < 0x6000017)) ||
                             (uVar44 = 0xc000013, uVar34 < 0xc000013)))) ||
                           (((uVar44 = 0x18000005, uVar34 < 0x18000005 ||
                             (uVar44 = 0x30000059, uVar34 < 0x30000059)) ||
                            (uVar44 = 0x60000005, uVar34 < 0x60000005)))) goto LAB_03464150;
                        goto LAB_03464230;
                      }
LAB_03464294:
                      uVar10 = 0;
                      if (uVar34 != 0) {
                        uVar10 = uVar33 / uVar34;
                      }
                      uVar44 = (ulong)(uVar33 - uVar10 * uVar34);
                      for (plVar20 = *(long **)(*(long *)(param_1 + 200) + uVar44 * 8);
                          plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
                        if (*(uint *)(plVar20 + 1) == uVar33) goto LAB_0346430c;
                      }
                      plVar20 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
                      if (plVar20 == (undefined8 *)0x0) goto LAB_0346463c;
                      *plVar20 = *(undefined8 *)(*(long *)(param_1 + 200) + uVar44 * 8);
                      *(uint *)(plVar20 + 1) = uVar33;
                      *(long **)(*(long *)(param_1 + 200) + uVar44 * 8) = plVar20;
                      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
LAB_0346430c:
                      plVar20[2] = lVar41;
LAB_0346431c:
                      uVar26 = (uVar26 - 5) - (uVar28 & 0xff);
                      uVar27 = uVar27 + 1;
                    } while (uVar27 < local_1b0._4_4_);
                  }
                  iVar15 = 1;
                } while (uVar26 != 0);
              }
              goto LAB_03462d2c;
            }
            if (local_1b8 != 0x474d5453) goto switchD_03462db4_caseD_2;
            if (local_1b4 == 0) goto switchD_03462db4_default;
            nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
            local_1b0 = local_1b0 & 0xffffffff00000000;
            iVar16 = FUN_0346d17c(puVar42,local_7c,4,&local_1b0);
            fVar48 = local_7c[0];
            iVar15 = 0x38;
            if ((uint)local_1b0 == 4) {
              iVar15 = 1;
            }
            if (iVar16 != 1) {
              iVar15 = iVar16;
            }
            if (((-96.3 <= local_7c[0]) && (local_7c[0] <= 0.0)) && (1 < *(int *)PTR_DAT_047e70f0))
            {
              *(undefined4 *)PTR_DAT_047e70f0 = 2;
              fVar47 = exp2f(local_7c[0] * 0.1660964);
              fVar49 = 0.0;
              if (-37.0 <= fVar48 * 0.05) {
                uVar26 = (uint)(fVar48 * 1393317.6 + 1.0653532e+09);
                fVar49 = (float)(uVar26 & 0x7fffff | 0x3f800000);
                fVar49 = (fVar49 * (fVar49 * 0.32518977 + 0.020805772) + 0.65304345) *
                         (float)(uVar26 & 0xff800000);
              }
              if (fVar47 <= fVar49) {
                fVar47 = fVar49;
              }
              *(float *)PTR_DAT_047e70f8 = fVar47;
              *(float *)PTR_DAT_047e7100 = fVar48;
            }
            if (iVar15 == 1) {
              local_1b0 = local_1b0 & 0xffffffff00000000;
              iVar16 = FUN_0346d17c(puVar42,&local_80,2,&local_1b0);
              iVar15 = 0x38;
              if ((uint)local_1b0 == 2) {
                iVar15 = 1;
              }
              if (iVar16 != 1) {
                iVar15 = iVar16;
              }
              if (((short)local_80 != 0) && (1 < *(int *)PTR_DAT_047e7108)) {
                *(undefined4 *)PTR_DAT_047e7108 = 2;
                *(short *)(PTR_DAT_047e7110 + 0x10) = (short)local_80;
              }
              if (iVar15 != 1) goto LAB_03464528;
              local_1b0 = local_1b0 & 0xffffffff00000000;
              iVar16 = FUN_0346d17c(puVar42,&local_80,2,&local_1b0);
              iVar15 = 0x38;
              if ((uint)local_1b0 == 2) {
                iVar15 = 1;
              }
              if (iVar16 != 1) {
                iVar15 = iVar16;
              }
              if (1 < *(int *)PTR_DAT_047e7118) {
                *(undefined4 *)PTR_DAT_047e7118 = 2;
              }
              local_80 = 0;
              if (iVar15 == 1) {
                local_1b0 = local_1b0 & 0xffffffff00000000;
                iVar16 = FUN_0346d17c(puVar42,&local_80,4,&local_1b0);
                iVar15 = 0x38;
                if ((uint)local_1b0 == 4) {
                  iVar15 = 1;
                }
                if (iVar16 != 1) {
                  iVar15 = iVar16;
                }
                if (iVar15 == 1) {
                  if (local_80 != 0) {
                    uVar26 = 0;
                    do {
                      uStack_88 = 0;
                      uStack_84 = 0;
                      local_8c = 0;
                      local_1b0 = local_1b0 & 0xffffffff00000000;
                      iVar16 = FUN_0346d17c(puVar42,&uStack_84,4,&local_1b0);
                      iVar15 = 0x38;
                      if ((uint)local_1b0 == 4) {
                        iVar15 = 1;
                      }
                      if (iVar16 != 1) {
                        iVar15 = iVar16;
                      }
                      if (iVar15 == 1) {
                        local_1b0 = local_1b0 & 0xffffffff00000000;
                        iVar16 = FUN_0346d17c(puVar42,&uStack_88,4,&local_1b0);
                        puVar13 = PTR_DAT_047e7050;
                        iVar15 = 0x38;
                        if ((uint)local_1b0 == 4) {
                          iVar15 = 1;
                        }
                        if (iVar16 != 1) {
                          iVar15 = iVar16;
                        }
                        if (iVar15 == 1) {
                          iVar15 = FUN_034dc2cc(*(undefined8 *)PTR_DAT_047e7050,uStack_84);
                          if (iVar15 == 0) {
                            iVar15 = 2;
                          }
                          else {
                            puVar29 = (uint *)**(undefined8 **)puVar13;
                            uVar27 = *(uint *)(*(undefined8 **)puVar13 + 1);
                            if ((uVar27 == 0) || (*puVar29 == uStack_84)) {
                              puVar35 = puVar29;
                            }
                            else {
                              lVar41 = (ulong)uVar27 * 0x10;
                              puVar37 = puVar29;
                              do {
                                lVar41 = lVar41 + -0x10;
                                if (lVar41 == 0) goto LAB_034636d8;
                                puVar35 = puVar37 + 4;
                                puVar1 = puVar37 + 4;
                                puVar37 = puVar35;
                              } while (*puVar1 != uStack_84);
                            }
                            if (puVar35 == puVar29 + (ulong)uVar27 * 4) {
LAB_034636d8:
                              iVar15 = 0x14;
                            }
                            else {
                              **(uint **)(puVar35 + 2) = uStack_88;
                              local_1b0 = local_1b0 & 0xffffffff00000000;
                              iVar16 = FUN_0346d17c(puVar42,&local_8c,4,&local_1b0);
                              iVar15 = 0x38;
                              if ((uint)local_1b0 == 4) {
                                iVar15 = 1;
                              }
                              if (iVar16 != 1) {
                                iVar15 = iVar16;
                              }
                              if (iVar15 == 1) {
                                if (local_8c == 0) {
                                  iVar15 = 1;
                                }
                                else {
                                  uVar27 = 0;
                                  do {
                                    uStack_94 = 0;
                                    iStack_90 = 0;
                                    local_98 = 0;
                                    local_1b0 = local_1b0 & 0xffffffff00000000;
                                    iVar16 = FUN_0346d17c(puVar42,&iStack_90,4,&local_1b0);
                                    iVar15 = 0x38;
                                    if ((uint)local_1b0 == 4) {
                                      iVar15 = 1;
                                    }
                                    if (iVar16 != 1) {
                                      iVar15 = iVar16;
                                    }
                                    if (iVar15 == 1) {
                                      local_1b0 = local_1b0 & 0xffffffff00000000;
                                      iVar16 = FUN_0346d17c(puVar42,&uStack_94,4,&local_1b0);
                                      iVar15 = 0x38;
                                      if ((uint)local_1b0 == 4) {
                                        iVar15 = 1;
                                      }
                                      if (iVar16 != 1) {
                                        iVar15 = iVar16;
                                      }
                                      if (iVar15 == 1) {
                                        local_1b0 = local_1b0 & 0xffffffff00000000;
                                        iVar16 = FUN_0346d17c(puVar42,&local_98,4,&local_1b0);
                                        iVar15 = 0x38;
                                        if ((uint)local_1b0 == 4) {
                                          iVar15 = 1;
                                        }
                                        if (iVar16 != 1) {
                                          iVar15 = iVar16;
                                        }
                                        if (iVar15 == 1) {
                                          iVar15 = FUN_034dc480(*(undefined8 *)PTR_DAT_047e7050,
                                                                uStack_84,iStack_90,uStack_94,
                                                                local_98,0);
                                        }
                                      }
                                    }
                                  } while ((iVar15 == 1) && (uVar27 = uVar27 + 1, uVar27 < local_8c)
                                          );
                                }
                              }
                            }
                          }
                        }
                      }
                      if (iVar15 != 1) {
                        uStack_84 = 0;
                        goto LAB_0346523c;
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 < local_80);
                  }
                  uStack_84 = 0;
                  local_1b0 = local_1b0 & 0xffffffff00000000;
                  iVar16 = FUN_0346d17c(puVar42,&uStack_84,4,&local_1b0);
                  iVar15 = 0x38;
                  if ((uint)local_1b0 == 4) {
                    iVar15 = 1;
                  }
                  if (iVar16 != 1) {
                    iVar15 = iVar16;
                  }
                  if (iVar15 == 1) {
                    if (uStack_84 != 0) {
                      uVar26 = 0;
                      do {
                        local_8c = 0;
                        uStack_88 = 0;
                        uStack_94 = uStack_94 & 0xffffff00;
                        iStack_90 = 0;
                        local_1b0 = local_1b0 & 0xffffffff00000000;
                        iVar16 = FUN_0346d17c(puVar42,&uStack_88,4,&local_1b0);
                        iVar15 = 0x38;
                        if ((uint)local_1b0 == 4) {
                          iVar15 = 1;
                        }
                        if (iVar16 != 1) {
                          iVar15 = iVar16;
                        }
                        if (iVar15 == 1) {
                          local_1b0 = local_1b0 & 0xffffffff00000000;
                          iVar16 = FUN_0346d17c(puVar42,&local_8c,4,&local_1b0);
                          iVar15 = 0x38;
                          if ((uint)local_1b0 == 4) {
                            iVar15 = 1;
                          }
                          if (iVar16 != 1) {
                            iVar15 = iVar16;
                          }
                          if (iVar15 == 1) {
                            local_1b0 = local_1b0 & 0xffffffff00000000;
                            iVar16 = FUN_0346d17c(puVar42,&uStack_94,1,&local_1b0);
                            iVar15 = 0x38;
                            if ((uint)local_1b0 == 1) {
                              iVar15 = 1;
                            }
                            if (iVar16 != 1) {
                              iVar15 = iVar16;
                            }
                            if (iVar15 == 1) {
                              local_1b0 = local_1b0 & 0xffffffff00000000;
                              iVar16 = FUN_0346d17c(puVar42,&iStack_90,4,&local_1b0);
                              iVar15 = 0x38;
                              if ((uint)local_1b0 == 4) {
                                iVar15 = 1;
                              }
                              if (iVar16 != 1) {
                                iVar15 = iVar16;
                              }
                              if ((iStack_90 != 0) && (iVar15 == 1)) {
                                iVar16 = iStack_90 * 0xc;
                                lVar41 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,iVar16);
                                if (lVar41 == 0) {
                                  iVar15 = 0x34;
                                }
                                else {
                                  local_1b0 = local_1b0 & 0xffffffff00000000;
                                  iVar18 = FUN_0346d17c(puVar42,lVar41,iVar16,&local_1b0);
                                  uVar27 = local_8c;
                                  iVar17 = iStack_90;
                                  iVar15 = 0x38;
                                  if ((uint)local_1b0 == iVar16) {
                                    iVar15 = 1;
                                  }
                                  if (iVar18 != 1) {
                                    iVar15 = iVar18;
                                  }
                                  if (iVar15 == 1) {
                                    uVar14 = (undefined1)uStack_94;
                                    lVar23 = FUN_034e4978(*(undefined8 *)PTR_DAT_047e7098,uStack_88)
                                    ;
                                    if (lVar23 == 0) {
                                      iVar15 = 0x34;
                                    }
                                    else {
                                      if (*(int *)(lVar23 + 0x20) != 0) {
                                        FUN_034b6c14(*(undefined8 *)PTR_DAT_047e6fd8,lVar23,0x3c);
                                        *(undefined4 *)(lVar23 + 0x20) = 0;
                                        if (*(long *)(lVar23 + 0x10) != 0) {
                                          *(undefined4 *)(lVar23 + 0x18) = 0;
                                          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
                                          *(undefined8 *)(lVar23 + 0x10) = 0;
                                          *(undefined4 *)(lVar23 + 0x1c) = 0;
                                        }
                                      }
                                      if (iVar17 == 0) {
                                        iVar15 = 1;
                                      }
                                      else {
                                        iVar15 = FUN_034e4ce8(lVar23,uVar27,uVar14,lVar41,iVar17);
                                      }
                                    }
                                  }
                                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar41);
                                }
                              }
                            }
                          }
                        }
                        if (iVar15 != 1) goto LAB_0346523c;
                        uVar26 = uVar26 + 1;
                      } while (uVar26 < uStack_84);
                    }
                    uStack_88 = 0;
                    local_1b0 = local_1b0 & 0xffffffff00000000;
                    iVar16 = FUN_0346d17c(puVar42,&uStack_88,4,&local_1b0);
                    iVar15 = 0x38;
                    if ((uint)local_1b0 == 4) {
                      iVar15 = 1;
                    }
                    if (iVar16 != 1) {
                      iVar15 = iVar16;
                    }
                    if (iVar15 == 1) {
                      for (; uStack_88 != 0; uStack_88 = uStack_88 - 1) {
                        local_9c = 0;
                        local_1b0 = local_1b0 & 0xffffffff00000000;
                        local_98 = 0;
                        uStack_94 = 0;
                        iStack_90 = 0;
                        local_8c = 0;
                        iVar16 = FUN_0346d17c(puVar42,&iStack_90,4,&local_1b0);
                        iVar15 = 0x38;
                        if ((uint)local_1b0 == 4) {
                          iVar15 = 1;
                        }
                        if (iVar16 != 1) {
                          iVar15 = iVar16;
                        }
                        if (iVar15 == 1) {
                          local_1b0 = local_1b0 & 0xffffffff00000000;
                          iVar16 = FUN_0346d17c(puVar42,&local_8c,4,&local_1b0);
                          uVar26 = local_8c;
                          iVar15 = 0x38;
                          if ((uint)local_1b0 == 4) {
                            iVar15 = 1;
                          }
                          if (iVar16 != 1) {
                            iVar15 = iVar16;
                          }
                          if (iVar15 == 1) {
                            lVar41 = FUN_034b8328(*(undefined8 *)PTR_DAT_047e6fd8,iStack_90);
                            if (lVar41 != 0) {
                              *(uint *)(lVar41 + 0x10) = uVar26;
                            }
                            local_1b0 = local_1b0 & 0xffffffff00000000;
                            iVar16 = FUN_0346d17c(puVar42,&uStack_94,4,&local_1b0);
                            iVar15 = 0x38;
                            if ((uint)local_1b0 == 4) {
                              iVar15 = 1;
                            }
                            if (iVar16 != 1) {
                              iVar15 = iVar16;
                            }
                            if (iVar15 == 1) {
                              local_1b0 = local_1b0 & 0xffffffff00000000;
                              iVar16 = FUN_0346d17c(puVar42,&local_98,4,&local_1b0);
                              iVar15 = 0x38;
                              if ((uint)local_1b0 == 4) {
                                iVar15 = 1;
                              }
                              if (iVar16 != 1) {
                                iVar15 = iVar16;
                              }
                              if (iVar15 == 1) {
                                local_1b0 = local_1b0 & 0xffffffff00000000;
                                iVar17 = FUN_0346d17c(puVar42,&local_9c,4,&local_1b0);
                                uVar26 = uStack_94;
                                iVar16 = local_98;
                                uVar5 = local_9c;
                                iVar15 = 0x38;
                                if ((uint)local_1b0 == 4) {
                                  iVar15 = 1;
                                }
                                if (iVar17 != 1) {
                                  iVar15 = iVar17;
                                }
                                if (iVar15 == 1) {
                                  lVar41 = FUN_034b8328(*(undefined8 *)PTR_DAT_047e6fd8,iStack_90);
                                  if (lVar41 != 0) {
                                    *(uint *)(lVar41 + 0x14) = uVar26;
                                    *(int *)(lVar41 + 0x18) = iVar16;
                                    *(undefined4 *)(lVar41 + 0x1c) = uVar5;
                                  }
                                  local_1b0 = local_1b0 & 0xffffffff00000000;
                                  iVar17 = FUN_0346d17c(puVar42,&local_a0,1,&local_1b0);
                                  iVar16 = iStack_90;
                                  iVar15 = 0x38;
                                  if ((uint)local_1b0 == 1) {
                                    iVar15 = 1;
                                  }
                                  if (iVar17 != 1) {
                                    iVar15 = iVar17;
                                  }
                                  if (iVar15 != 0) {
                                    if ((ulong)(byte)local_a0 != 0) {
                                      lVar41 = *(long *)PTR_DAT_047e6fd8 +
                                               (ulong)(byte)local_a0 * 0x10;
                                      FUN_034b9180(*(long *)PTR_DAT_047e6fd8,iStack_90);
                                      puVar29 = (uint *)(lVar41 + 0x38);
                                      uVar27 = *puVar29;
                                      uVar26 = *(uint *)(lVar41 + 0x3c);
                                      plVar20 = (long *)(lVar41 + 0x30);
                                      if (uVar26 <= uVar27) {
                                        iVar17 = uVar26 + (uVar26 >> 1);
                                        if (uVar26 == 0) {
                                          iVar17 = 1;
                                        }
                                        uVar26 = iVar17 + uVar26;
                                        lVar23 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                                                           (0,*plVar20,(ulong)uVar26 << 2);
                                        if (lVar23 == 0) goto LAB_03465010;
                                        *plVar20 = lVar23;
                                        *(uint *)(lVar41 + 0x3c) = uVar26;
                                      }
                                      if (uVar27 < uVar26) {
                                        uVar26 = *puVar29;
                                        *puVar29 = uVar26 + 1;
                                        if (*plVar20 != 0) {
                                          *(int *)(*plVar20 + (ulong)uVar26 * 4) = iVar16;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_03465010:
                        if (iVar15 != 1) goto LAB_03465244;
                      }
                      local_8c = 0;
                      local_1b0 = local_1b0 & 0xffffffff00000000;
                      iVar16 = FUN_0346d17c(puVar42,&local_8c,4,&local_1b0);
                      iVar15 = 0x38;
                      if ((uint)local_1b0 == 4) {
                        iVar15 = 1;
                      }
                      if (iVar16 != 1) {
                        iVar15 = iVar16;
                      }
                      if (iVar15 == 1) {
                        if (local_8c == 0) {
                          iVar15 = 1;
                        }
                        else {
                          do {
                            local_1b0 = local_1b0 & 0xffffffff00000000;
                            iVar16 = FUN_0346d17c(puVar42,&iStack_90,4,&local_1b0);
                            iVar15 = 0x38;
                            if ((uint)local_1b0 == 4) {
                              iVar15 = 1;
                            }
                            if (iVar16 != 1) {
                              iVar15 = iVar16;
                            }
                            if (iVar15 == 1) {
                              local_1b0 = local_1b0 & 0xffffffff00000000;
                              iVar16 = FUN_0346d17c(puVar42,&uStack_94,4,&local_1b0);
                              iVar15 = 0x38;
                              if ((uint)local_1b0 == 4) {
                                iVar15 = 1;
                              }
                              if (iVar16 != 1) {
                                iVar15 = iVar16;
                              }
                              if (iVar15 == 1) {
                                local_1b0 = local_1b0 & 0xffffffff00000000;
                                iVar16 = FUN_0346d17c(puVar42,&local_98,4,&local_1b0);
                                iVar15 = 0x38;
                                if ((uint)local_1b0 == 4) {
                                  iVar15 = 1;
                                }
                                if (iVar16 != 1) {
                                  iVar15 = iVar16;
                                }
                                if (iVar15 == 1) {
                                  local_1b0 = local_1b0 & 0xffffffff00000000;
                                  iVar16 = FUN_0346d17c(puVar42,&local_9c,4,&local_1b0);
                                  iVar15 = 0x38;
                                  if ((uint)local_1b0 == 4) {
                                    iVar15 = 1;
                                  }
                                  if (iVar16 != 1) {
                                    iVar15 = iVar16;
                                  }
                                  if (iVar15 == 1) {
                                    local_1b0 = local_1b0 & 0xffffffff00000000;
                                    iVar16 = FUN_0346d17c(puVar42,&local_a0,4,&local_1b0);
                                    iVar15 = 0x38;
                                    if ((uint)local_1b0 == 4) {
                                      iVar15 = 1;
                                    }
                                    if (iVar16 != 1) {
                                      iVar15 = iVar16;
                                    }
                                    if (iVar15 == 1) {
                                      local_1b0 = local_1b0 & 0xffffffff00000000;
                                      iVar16 = FUN_0346d17c(puVar42,&local_a4,4,&local_1b0);
                                      iVar15 = 0x38;
                                      if ((uint)local_1b0 == 4) {
                                        iVar15 = 1;
                                      }
                                      if (iVar16 != 1) {
                                        iVar15 = iVar16;
                                      }
                                      if (iVar15 == 1) {
                                        local_1b0 = local_1b0 & 0xffffffff00000000;
                                        iVar16 = FUN_0346d17c(puVar42,&local_a8,4,&local_1b0);
                                        iVar15 = 0x38;
                                        if ((uint)local_1b0 == 4) {
                                          iVar15 = 1;
                                        }
                                        if (iVar16 != 1) {
                                          iVar15 = iVar16;
                                        }
                                        if (iVar15 == 1) {
                                          local_1b0 = CONCAT44(uStack_94,iStack_90);
                                          local_1a8 = local_98;
                                          uStack_1a4 = local_9c;
                                          local_1a0 = CONCAT44(local_a4,local_a0);
                                          local_198 = local_a8;
                                          iVar15 = FUN_034ead08(iStack_90,&local_1b0);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          } while ((iVar15 == 1) && (local_8c = local_8c - 1, local_8c != 0));
                        }
                      }
                      goto LAB_0346452c;
                    }
                  }
                  else {
LAB_0346523c:
                    uStack_88 = 0;
                  }
LAB_03465244:
                  local_8c = 0;
                }
              }
            }
            else {
LAB_03464528:
              local_80 = 0;
            }
LAB_0346452c:
            nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
          }
        }
        else if (local_1b8 < 0x54494e49) {
          if (local_1b8 == 0x53564e45) {
            iVar15 = 2;
            if ((local_1b4 != 0) && (*(long *)PTR_DAT_047e7050 != 0)) {
              lVar41 = 0;
              bVar36 = false;
              do {
                local_1b0 = local_1b0 & 0xffffffff00000000;
                iVar16 = FUN_0346d17c(puVar42,&local_80,1,&local_1b0);
                iVar15 = 0x38;
                if ((uint)local_1b0 == 1) {
                  iVar15 = 1;
                }
                if (iVar16 != 1) {
                  iVar15 = iVar16;
                }
                if (iVar15 != 1) break;
                lVar23 = lVar41 * 3;
                *(bool *)(*(long *)PTR_DAT_047e6f30 + lVar23) = (char)local_80 != '\0';
                local_1b0 = local_1b0 & 0xffffffff00000000;
                iVar16 = FUN_0346d17c(puVar42,&uStack_84,1,&local_1b0);
                iVar15 = 0x38;
                if ((uint)local_1b0 == 1) {
                  iVar15 = 1;
                }
                if (iVar16 != 1) {
                  iVar15 = iVar16;
                }
                local_7c[0] = (float)((uint)local_7c[0] & 0xffff0000);
                if (iVar15 == 1) {
                  local_1b0 = local_1b0 & 0xffffffff00000000;
                  iVar16 = FUN_0346d17c(puVar42,local_7c,2,&local_1b0);
                  iVar15 = 0x38;
                  if ((uint)local_1b0 == 2) {
                    iVar15 = 1;
                  }
                  if (iVar16 != 1) {
                    iVar15 = iVar16;
                  }
                  if (iVar15 == 1) {
                    lVar38 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))
                                       (0,(ulong)local_7c[0]._0_2_ * 0xc);
                    if (lVar38 == 0) {
                      iVar15 = 0x34;
                    }
                    else {
                      uVar26 = (uint)local_7c[0] & 0xffff;
                      local_1b0 = local_1b0 & 0xffffffff00000000;
                      iVar16 = FUN_0346d17c(puVar42,lVar38,uVar26 * 0xc,&local_1b0);
                      iVar15 = 0x38;
                      if ((uint)local_1b0 == uVar26 * 0xc) {
                        iVar15 = 1;
                      }
                      if (iVar16 != 1) {
                        iVar15 = iVar16;
                      }
                      if (iVar15 == 1) {
                        FUN_0347e1d4(*(undefined8 *)PTR_DAT_047e6f30,lVar41,0,local_7c[0]._0_2_,
                                     lVar38,(byte)uStack_84);
                      }
                      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar38);
                    }
                  }
                }
                if (iVar15 != 1) break;
                local_1b0 = local_1b0 & 0xffffffff00000000;
                iVar16 = FUN_0346d17c(puVar42,&local_80,1,&local_1b0);
                iVar15 = 0x38;
                if ((uint)local_1b0 == 1) {
                  iVar15 = 1;
                }
                if (iVar16 != 1) {
                  iVar15 = iVar16;
                }
                if (iVar15 != 1) break;
                *(bool *)(*(long *)PTR_DAT_047e6f30 + lVar23 + 1) = (char)local_80 != '\0';
                local_1b0 = local_1b0 & 0xffffffff00000000;
                iVar16 = FUN_0346d17c(puVar42,&uStack_84,1,&local_1b0);
                iVar15 = 0x38;
                if ((uint)local_1b0 == 1) {
                  iVar15 = 1;
                }
                if (iVar16 != 1) {
                  iVar15 = iVar16;
                }
                local_7c[0] = (float)((uint)local_7c[0] & 0xffff0000);
                if (iVar15 == 1) {
                  local_1b0 = local_1b0 & 0xffffffff00000000;
                  iVar16 = FUN_0346d17c(puVar42,local_7c,2,&local_1b0);
                  iVar15 = 0x38;
                  if ((uint)local_1b0 == 2) {
                    iVar15 = 1;
                  }
                  if (iVar16 != 1) {
                    iVar15 = iVar16;
                  }
                  if (iVar15 == 1) {
                    lVar38 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))
                                       (0,(ulong)local_7c[0]._0_2_ * 0xc);
                    if (lVar38 == 0) {
                      iVar15 = 0x34;
                    }
                    else {
                      uVar26 = (uint)local_7c[0] & 0xffff;
                      local_1b0 = local_1b0 & 0xffffffff00000000;
                      iVar16 = FUN_0346d17c(puVar42,lVar38,uVar26 * 0xc,&local_1b0);
                      iVar15 = 0x38;
                      if ((uint)local_1b0 == uVar26 * 0xc) {
                        iVar15 = 1;
                      }
                      if (iVar16 != 1) {
                        iVar15 = iVar16;
                      }
                      if (iVar15 == 1) {
                        FUN_0347e1d4(*(undefined8 *)PTR_DAT_047e6f30,lVar41,1,local_7c[0]._0_2_,
                                     lVar38,(byte)uStack_84);
                      }
                      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar38);
                    }
                  }
                }
                if (iVar15 != 1) break;
                local_1b0 = local_1b0 & 0xffffffff00000000;
                iVar16 = FUN_0346d17c(puVar42,&local_80,1,&local_1b0);
                iVar15 = 0x38;
                if ((uint)local_1b0 == 1) {
                  iVar15 = 1;
                }
                if (iVar16 != 1) {
                  iVar15 = iVar16;
                }
                if (iVar15 != 1) break;
                *(bool *)(*(long *)PTR_DAT_047e6f30 + lVar23 + 2) = (char)local_80 != '\0';
                local_1b0 = local_1b0 & 0xffffffff00000000;
                iVar16 = FUN_0346d17c(puVar42,&uStack_84,1,&local_1b0);
                local_7c[0] = (float)((uint)local_7c[0] & 0xffff0000);
                iVar15 = 0x38;
                if ((uint)local_1b0 == 1) {
                  iVar15 = 1;
                }
                if (iVar16 != 1) {
                  iVar15 = iVar16;
                }
                if (iVar15 == 1) {
                  local_1b0 = local_1b0 & 0xffffffff00000000;
                  iVar16 = FUN_0346d17c(puVar42,local_7c,2,&local_1b0);
                  iVar15 = 0x38;
                  if ((uint)local_1b0 == 2) {
                    iVar15 = 1;
                  }
                  if (iVar16 != 1) {
                    iVar15 = iVar16;
                  }
                  if (iVar15 == 1) {
                    lVar23 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))
                                       (0,(ulong)local_7c[0]._0_2_ * 0xc);
                    if (lVar23 == 0) {
                      iVar15 = 0x34;
                    }
                    else {
                      uVar26 = (uint)local_7c[0] & 0xffff;
                      local_1b0 = local_1b0 & 0xffffffff00000000;
                      iVar16 = FUN_0346d17c(puVar42,lVar23,uVar26 * 0xc,&local_1b0);
                      iVar15 = 0x38;
                      if ((uint)local_1b0 == uVar26 * 0xc) {
                        iVar15 = 1;
                      }
                      if (iVar16 != 1) {
                        iVar15 = iVar16;
                      }
                      if (iVar15 == 1) {
                        FUN_0347e1d4(*(undefined8 *)PTR_DAT_047e6f30,lVar41,2,local_7c[0]._0_2_,
                                     lVar23,(byte)uStack_84);
                      }
                      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar23);
                    }
                  }
                }
                lVar41 = 1;
                bVar12 = !bVar36;
                bVar36 = true;
              } while (bVar12 && iVar15 == 1);
            }
          }
          else {
            if (local_1b8 != 0x54414c50) goto switchD_03462db4_caseD_2;
            iVar15 = FUN_034677c0(param_1,local_1b4);
LAB_0346321c:
          }
        }
        else {
          if (local_1b8 != 0x54494e49) {
            if (local_1b8 == 0x58444944) goto LAB_03462d5c;
            goto switchD_03462db4_caseD_2;
          }
          puVar29 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
          uVar27 = *puVar29;
          if (uVar27 < local_1b4) {
            uVar27 = uVar27 & 0x1f;
            uVar28 = local_1b4;
            if (uVar27 != 0) {
              uVar28 = local_1b4 + 0x1f;
            }
            lVar41 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar28,0x20);
            *(long *)(param_1 + 0x40) = lVar41;
            if (lVar41 != 0) {
              uVar28 = 0;
              if (uVar27 != 0) {
                uVar28 = 0x20 - uVar27;
              }
              piVar43 = (int *)(lVar41 + (ulong)uVar28);
              iVar15 = FUN_0346d17c(puVar42,piVar43,uVar26,&local_1b0);
              if ((iVar15 == 1) && ((uint)local_1b0 == uVar26)) goto LAB_034645a4;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*(undefined8 *)(param_1 + 0x40));
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            iVar15 = 2;
          }
          else {
            *puVar29 = uVar27 - local_1b4;
            piVar43 = *(int **)(param_1 + 0x58);
            if (piVar43 == (int *)0x0) {
              piVar43 = *(int **)(param_1 + 0x18);
              *(ulong *)(param_1 + 0x18) = (long)piVar43 + (ulong)local_1b4;
LAB_034645a4:
              if (piVar43 == (int *)0x0) {
                iVar15 = 2;
                goto LAB_03462d2c;
              }
            }
            else {
              *(ulong *)(param_1 + 0x58) = (long)piVar43 + (ulong)local_1b4;
            }
            if ((*piVar43 == 0) || ((char)piVar43[2] == '\0')) {
              iVar15 = 1;
            }
            else {
              pcVar24 = (char *)((long)piVar43 + 9);
              do {
                cVar6 = *pcVar24;
                pcVar24 = pcVar24 + 1;
                iVar15 = 1;
              } while (cVar6 != '\0');
            }
          }
        }
        goto LAB_03462d2c;
      }
      if (local_1b8 != 0x41544144) {
        if (local_1b8 == 0x58444944) {
LAB_03462d5c:
          if ((param_4 < 2) || (param_4 == 3)) {
            lVar41 = *param_3;
            if (*(int *)(lVar41 + 0x34) == 0) {
              uVar27 = (local_1b4 / 0xc) * 0xc;
              if (uVar4 == 2) {
                puVar29 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
                uVar28 = *puVar29;
                if (uVar28 < uVar27) {
                  uVar28 = uVar28 & 0x1f;
                  uVar34 = uVar27;
                  if (uVar28 != 0) {
                    uVar34 = uVar27 + 0x1f;
                  }
                  lVar23 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar34,0x20);
                  *(long *)(param_1 + 0x40) = lVar23;
                  if (lVar23 == 0) {
                    lVar23 = 0;
                  }
                  else {
                    uVar34 = 0;
                    if (uVar28 != 0) {
                      uVar34 = 0x20 - uVar28;
                    }
                    lVar23 = lVar23 + (ulong)uVar34;
                    iVar15 = FUN_0346d17c(puVar42,lVar23,uVar27,&local_1b0);
                    if ((iVar15 != 1) || ((uint)local_1b0 != uVar27)) {
                      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*(undefined8 *)(param_1 + 0x40));
                      lVar23 = 0;
                      *(undefined8 *)(param_1 + 0x40) = 0;
                    }
                  }
                }
                else {
                  *puVar29 = uVar28 + (local_1b4 / 0xc) * -0xc;
                  lVar23 = *(long *)(param_1 + 0x58);
                  if (lVar23 == 0) {
                    lVar23 = *(long *)(param_1 + 0x18);
                    *(ulong *)(param_1 + 0x18) = lVar23 + (ulong)uVar27;
                  }
                  else {
                    *(ulong *)(param_1 + 0x58) = lVar23 + (ulong)uVar27;
                  }
                }
                if (*(long *)(lVar41 + 0x20) == 0) {
                  *(long *)(lVar41 + 0x20) = lVar23;
                }
                if (*(long *)(param_1 + 0x40) != 0) {
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
                  *(undefined8 *)(param_1 + 0x40) = 0;
                }
                iVar15 = 1;
              }
              else {
                lVar23 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar27);
                *(long *)(lVar41 + 0x20) = lVar23;
                if (lVar23 == 0) {
                  iVar15 = 0x34;
                }
                else {
                  *(byte *)(lVar41 + 0x68) = *(byte *)(lVar41 + 0x68) | 2;
                  local_1b0 = local_1b0 & 0xffffffff00000000;
                  FUN_0346d17c(puVar42,lVar23,uVar27,&local_1b0);
                  iVar15 = 1;
                }
              }
              if (*(long *)(lVar41 + 0x20) != 0) {
                *(uint *)(lVar41 + 0x38) = uVar26 / 0xc;
              }
            }
            else {
              FUN_0346cfd4(puVar42,local_1b4,&local_1b0);
              iVar15 = 1;
            }
            goto LAB_03462d2c;
          }
          if (param_4 == 2) goto switchD_03462db4_caseD_2;
          goto switchD_03462db4_default;
        }
        pcVar24 = "an older";
        if (0x8b < (uint)local_1d0) {
          pcVar24 = "a newer";
        }
        goto LAB_03465294;
      }
LAB_03462d78:
      uVar27 = (uint)uStack_1c8._4_2_;
      if ((uint)local_1d0 < 0x87) {
        uVar27 = 0x10;
      }
      *(uint *)(*param_3 + 0x6c) = uVar27;
      switch(param_4) {
      case 0:
        uVar44 = (ulong)local_1b4;
        if (uVar4 == 2) {
          puVar29 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
          uVar27 = *puVar29;
          if (uVar27 < local_1b4) {
            uVar27 = uVar27 & 0x1f;
            uVar28 = local_1b4;
            if (uVar27 != 0) {
              uVar28 = local_1b4 + 0x1f;
            }
            lVar23 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar28,0x20);
            *(long *)(param_1 + 0x40) = lVar23;
            if (lVar23 == 0) {
              lVar23 = 0;
            }
            else {
              uVar28 = 0;
              if (uVar27 != 0) {
                uVar28 = 0x20 - uVar27;
              }
              lVar23 = lVar23 + (ulong)uVar28;
              iVar15 = FUN_0346d17c(puVar42,lVar23,uVar26,&local_1b0);
              if ((iVar15 != 1) || ((uint)local_1b0 != uVar26)) {
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*(undefined8 *)(param_1 + 0x40));
                lVar23 = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
            }
          }
          else {
            *puVar29 = uVar27 - local_1b4;
            lVar23 = *(long *)(param_1 + 0x58);
            if (lVar23 == 0) {
              lVar23 = *(long *)(param_1 + 0x18);
              *(ulong *)(param_1 + 0x18) = lVar23 + uVar44;
            }
            else {
              *(ulong *)(param_1 + 0x58) = lVar23 + uVar44;
            }
          }
          *(uint *)(*param_3 + 0x28) = local_1b4;
          if (*(long *)(param_1 + 0x40) != 0) {
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          lVar41 = *param_3;
        }
        else {
          lVar41 = *param_3;
          if (local_1b4 != 0) {
            uVar5 = 0x20000003;
            if ((*(byte *)(lVar41 + 0x68) & 8) != 0) {
              uVar5 = 0x60000003;
            }
            lVar23 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))
                               (uVar5,uVar44,*(undefined4 *)(lVar41 + 0x6c));
            *(long *)(lVar41 + 0x18) = lVar23;
            if (lVar23 == 0) {
              iVar15 = 0x34;
            }
            else {
              *(uint *)(lVar41 + 0x28) = uVar26;
              local_1b0 = local_1b0 & 0xffffffff00000000;
              iVar16 = FUN_0346d17c(puVar42,lVar23,uVar26,&local_1b0);
              iVar15 = 7;
              if ((uint)local_1b0 == uVar26) {
                iVar15 = 1;
              }
              if (iVar16 != 1) {
                iVar15 = iVar16;
              }
              if (iVar15 == 1) {
                lVar41 = *param_3;
                goto LAB_034644fc;
              }
            }
            break;
          }
LAB_034644fc:
          lVar23 = *(long *)(lVar41 + 0x18);
        }
        if ((*(int *)(lVar41 + 0x34) != 0) ||
           (uVar44 = (ulong)*(uint *)(lVar41 + 0x38), *(uint *)(lVar41 + 0x38) == 0))
        goto switchD_03462db4_default;
        lVar38 = *(long *)(lVar41 + 0x20);
        if (lVar38 != 0) {
          iVar15 = 0;
          uVar46 = 0;
          iVar16 = 0x34;
          do {
            puVar29 = (uint *)(lVar38 + uVar46 * 0xc);
            if (*puVar29 != 0) {
              nn::os::LockMutex(pMVar2);
              uVar26 = *puVar29;
              uVar27 = *(uint *)(param_1 + 0x98);
              if ((uVar27 == 0) ||
                 (fVar48 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0)),
                 0.9 < fVar48 / (float)uVar27)) {
                FUN_03469838(param_1 + 0x88);
                uVar27 = *(uint *)(param_1 + 0x98);
                if (uVar27 == 0) goto LAB_03464a40;
              }
              uVar28 = 0;
              if (uVar27 != 0) {
                uVar28 = uVar26 / uVar27;
              }
              uVar44 = (ulong)(uVar26 - uVar28 * uVar27);
              for (plVar20 = *(long **)(*(long *)(param_1 + 0x90) + uVar44 * 8);
                  plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
                if (*(uint *)(plVar20 + 1) == uVar26) {
                  plVar45 = plVar20 + 2;
                  if (*plVar45 == 0) {
                    bVar36 = false;
                    goto LAB_03464830;
                  }
                  plVar45 = plVar20 + 6;
                  goto LAB_03464940;
                }
              }
              puVar21 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
              if (puVar21 == (undefined8 *)0x0) goto LAB_03464a40;
              bVar36 = true;
              *puVar21 = *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar44 * 8);
              *(uint *)(puVar21 + 1) = uVar26;
              plVar45 = puVar21 + 2;
              *plVar45 = 0;
              puVar21[3] = 0xffffffff00000000;
              puVar21[4] = 0;
              puVar21[5] = 0;
              *(undefined4 *)(puVar21 + 6) = 1;
              *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar44 * 8) = puVar21;
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
LAB_03464830:
              *(uint *)((long)plVar45 + 0x24) = *puVar29;
              lVar38 = lVar38 + uVar46 * 0xc;
              uVar27 = *(uint *)(plVar45 + 3);
              uVar26 = *(uint *)((long)plVar45 + 0x1c);
              uVar28 = *(uint *)(lVar38 + 4);
              uVar5 = *(undefined4 *)(lVar38 + 8);
              if (uVar27 < uVar26) {
LAB_034648a8:
                if (uVar27 < uVar26) {
                  uVar26 = *(uint *)(plVar45 + 3);
                  plVar20 = (long *)plVar45[2];
                  *(uint *)(plVar45 + 3) = uVar26 + 1;
                  if (uVar26 != 0) {
                    plVar31 = plVar20 + (ulong)uVar26 * 3;
                    do {
                      plVar30 = plVar31 + -3;
                      plVar31[2] = plVar31[-1];
                      *plVar31 = *plVar30;
                      plVar31[1] = plVar31[-2];
                      plVar20 = (long *)plVar45[2];
                      plVar31 = plVar30;
                    } while (plVar20 < plVar30);
                  }
                  if (plVar20 != (long *)0x0) {
                    *plVar20 = lVar23 + (ulong)uVar28;
                    *(undefined4 *)(plVar20 + 1) = uVar5;
                    *(undefined4 *)((long)plVar20 + 0xc) = 0xffffffff;
                    plVar20[2] = lVar41;
                    if (bVar36) {
                      iVar16 = 1;
                    }
                    else {
                      plVar45 = plVar45 + 4;
                      iVar16 = 1;
LAB_03464940:
                      *(int *)plVar45 = (int)*plVar45 + 1;
                    }
                    nn::os::UnlockMutex(pMVar2);
                    iVar15 = *(int *)(lVar41 + 0x34);
                    uVar44 = (ulong)*(uint *)(lVar41 + 0x38);
                    goto LAB_03464960;
                  }
                }
              }
              else {
                iVar15 = uVar26 + (uVar26 >> 1);
                if (uVar26 == 0) {
                  iVar15 = 1;
                }
                uVar26 = iVar15 + uVar26;
                lVar38 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar45[2],(ulong)uVar26 * 0x18);
                if (lVar38 != 0) {
                  plVar45[2] = lVar38;
                  *(uint *)((long)plVar45 + 0x1c) = uVar26;
                  goto LAB_034648a8;
                }
              }
              uVar26 = *(uint *)(param_1 + 0x98);
              if (uVar26 == 0) goto LAB_03464a38;
              uVar27 = *puVar29;
              uVar28 = 0;
              if (uVar26 != 0) {
                uVar28 = uVar27 / uVar26;
              }
              uVar44 = (ulong)(uVar27 - uVar28 * uVar26);
              puVar21 = *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar44 * 8);
              if (puVar21 == (undefined8 *)0x0) {
                iVar16 = 0x34;
                goto LAB_03464a40;
              }
              if (*(uint *)(puVar21 + 1) != uVar27) goto LAB_034649d4;
              *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar44 * 8) = *puVar21;
              goto LAB_034649f4;
            }
LAB_03464960:
            uVar46 = uVar46 + 1;
            iVar15 = iVar15 + 1;
            *(int *)(lVar41 + 0x34) = iVar15;
            if (uVar44 <= uVar46) goto LAB_03464a5c;
            lVar38 = *(long *)(lVar41 + 0x20);
          } while( true );
        }
        iVar16 = 0x34;
        goto LAB_03464a74;
      case 1:
      case 3:
        if (local_1b4 != 0) {
          lVar41 = *param_3;
          uVar27 = *(uint *)(lVar41 + 0x34);
          uVar28 = *(uint *)(lVar41 + 0x38);
          if (uVar27 < uVar28) {
            uVar44 = 0;
            iVar16 = 0;
            uVar33 = 0;
            do {
              puVar29 = (uint *)(*(long *)(lVar41 + 0x20) + uVar44 * 0xc);
              uVar10 = *puVar29;
              uVar34 = puVar29[1];
              iVar16 = (uVar34 - uVar33) + iVar16;
              if (uVar10 != 0) {
                uVar28 = *(uint *)(*(long *)(lVar41 + 0x20) + uVar44 * 0xc + 8);
                nn::os::LockMutex(pMVar2);
                uVar27 = *(uint *)(param_1 + 0x98);
                if (uVar27 == 0) {
LAB_03462e70:
                  FUN_03469838(param_1 + 0x88);
                  uVar27 = *(uint *)(param_1 + 0x98);
                  if (uVar27 != 0) {
                    uVar33 = 0;
                    if (uVar27 != 0) {
                      uVar33 = uVar10 / uVar27;
                    }
                    uVar46 = (ulong)(uVar10 - uVar33 * uVar27);
                    plVar20 = *(long **)(*(long *)(param_1 + 0x90) + uVar46 * 8);
                    goto joined_r0x03462e90;
                  }
LAB_034645d8:
                  iVar15 = 2;
                }
                else {
                  uVar33 = 0;
                  if (uVar27 != 0) {
                    uVar33 = uVar10 / uVar27;
                  }
                  uVar46 = (ulong)(uVar10 - uVar33 * uVar27);
                  plVar20 = *(long **)(*(long *)(param_1 + 0x90) + uVar46 * 8);
                  if (plVar20 != (long *)0x0) {
                    plVar45 = plVar20;
                    do {
                      if (*(uint *)(plVar45 + 1) == uVar10) {
                        plVar20 = plVar45 + 2;
                        *(int *)(plVar45 + 6) = (int)plVar45[6] + 1;
                        if (*plVar20 != 0) goto LAB_034631a4;
                        goto LAB_03462f1c;
                      }
                      plVar45 = (long *)*plVar45;
                    } while (plVar45 != (long *)0x0);
                  }
                  fVar48 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xa0));
                  if (0.9 < fVar48 / (float)uVar27) goto LAB_03462e70;
joined_r0x03462e90:
                  for (; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
                    if (*(uint *)(plVar20 + 1) == uVar10) {
                      plVar20 = plVar20 + 2;
                      goto LAB_03462f18;
                    }
                  }
                  puVar21 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
                  if (puVar21 == (undefined8 *)0x0) goto LAB_034645d8;
                  *puVar21 = *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar46 * 8);
                  *(uint *)(puVar21 + 1) = uVar10;
                  plVar20 = puVar21 + 2;
                  *plVar20 = 0;
                  puVar21[3] = 0xffffffff00000000;
                  puVar21[4] = 0;
                  puVar21[5] = 0;
                  *(undefined4 *)(puVar21 + 6) = 1;
                  *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar46 * 8) = puVar21;
                  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
LAB_03462f18:
                  *(uint *)((long)plVar20 + 0x24) = uVar10;
LAB_03462f1c:
                  uVar5 = 0x20000003;
                  if ((*(byte *)(lVar41 + 0x68) & 8) != 0) {
                    uVar5 = 0x60000003;
                  }
                  if ((int)plVar20[3] == 0) {
                    __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(uVar5,uVar28,0x10);
                    if (__dest == (void *)0x0) goto LAB_03464618;
                    nn::os::UnlockMutex(pMVar2);
                    if (iVar16 == 0) {
LAB_03462fe0:
                      local_8c = 0;
                      iVar15 = FUN_0346d17c(puVar42,__dest,uVar28,&local_8c);
                      if ((iVar15 == 1) && (uVar28 != local_8c)) {
                        iVar15 = 2;
                      }
                      else {
                        uVar34 = local_8c + uVar34;
                        if ((((param_6 & 1) != 0) &&
                            (iVar16 = FUN_0347e990(__dest,uVar28,&local_1b0,0,local_7c,&local_80,
                                                   &uStack_84,&uStack_88,0,0,1), iVar16 == 1)) &&
                           (uStack_88 + uStack_84 <= uVar28)) {
                          puVar11 = (ushort *)CONCAT44(uStack_1a4,local_1a8);
                          uVar8 = *puVar11;
                          uVar27 = uVar8 - 0x3040;
                          if ((uVar27 < 2) || (uVar8 == 0xffff)) {
                            iVar16 = 0;
                            if ((uStack_88 & 3) != 0) {
                              iVar16 = 0xc - (uStack_88 & 3);
                            }
                            if ((uVar27 < 2) || (uVar27 = 0, uVar8 == 0xffff)) {
                              uVar27 = iVar16 + uStack_88 +
                                       *(int *)(puVar11 + 0xc) * (uint)puVar11[1] * 2;
                            }
                            pvVar22 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(uVar5,uVar27,4)
                            ;
                            if (pvVar22 != (void *)0x0) {
                              iVar16 = FUN_03468a18(pvVar22,uVar27,__dest,uVar28,
                                                    local_1a8 - (int)__dest,uStack_88,
                                                    (ulong)*(ushort *)
                                                            (CONCAT44(uStack_1a4,local_1a8) + 2) <<
                                                    1,&local_1b0);
                              if (iVar16 == 1) {
                                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(uVar5,__dest);
                                __dest = pvVar22;
                                uVar28 = uVar27;
                              }
                              else {
                                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(uVar5,pvVar22);
                              }
                            }
                          }
                        }
                      }
                      nn::os::LockMutex(pMVar2);
                      if (iVar15 == 1) {
                        iVar16 = 0;
                        goto LAB_0346319c;
                      }
                    }
                    else {
                      local_1b0 = local_1b0 & 0xffffffff00000000;
                      iVar15 = FUN_0346cfd4(puVar42,iVar16,&local_1b0);
                      if (iVar16 == (uint)local_1b0) {
                        if (iVar15 == 1) goto LAB_03462fe0;
                      }
                      else {
                        iVar15 = 2;
                      }
                      nn::os::LockMutex(pMVar2);
                    }
                    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(uVar5,__dest);
                  }
                  else {
                    uVar28 = *(uint *)(plVar20[2] + 8);
                    __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))
                                               (uVar5,(ulong)uVar28,0x10);
                    if (__dest != (void *)0x0) {
                      memcpy(__dest,*(void **)plVar20[2],(ulong)uVar28);
LAB_0346319c:
                      *plVar20 = (long)__dest;
                      *(uint *)(plVar20 + 1) = uVar28;
                      *(undefined4 *)((long)plVar20 + 0xc) = uVar5;
LAB_034631a4:
                      *(int *)(lVar41 + 0x34) = *(int *)(lVar41 + 0x34) + 1;
                      nn::os::UnlockMutex(pMVar2);
                      uVar27 = *(uint *)(lVar41 + 0x34);
                      uVar28 = *(uint *)(lVar41 + 0x38);
                      goto LAB_034631c8;
                    }
LAB_03464618:
                    iVar15 = 0x34;
                  }
                  FUN_034686fc(param_1,plVar20);
                }
                nn::os::UnlockMutex(pMVar2);
                goto LAB_03464ae0;
              }
              uVar27 = uVar27 + 1;
              *(uint *)(lVar41 + 0x34) = uVar27;
LAB_034631c8:
              uVar44 = uVar44 + 1;
              uVar33 = uVar34;
            } while (uVar27 < uVar28);
          }
          else {
            iVar16 = 0;
            uVar34 = 0;
            uVar44 = 0;
          }
          iVar16 = (uVar26 - uVar34) + iVar16;
          if (iVar16 != 0) {
            local_1b0 = local_1b0 & 0xffffffff00000000;
            FUN_0346cfd4(puVar42,iVar16,&local_1b0);
            if (iVar16 != (uint)local_1b0) {
              iVar15 = 2;
LAB_03464ae0:
              uVar26 = (uint)uVar44;
              if (0 < (int)uVar26) {
                lVar23 = (uVar44 & 0xffffffff) + 1;
                do {
                  uVar26 = uVar26 - 1;
                  if (*(int *)(*(long *)(lVar41 + 0x20) + (ulong)uVar26 * 0xc) != 0) {
                    FUN_03468c14(param_1);
                  }
                  lVar23 = lVar23 + -1;
                } while (1 < lVar23);
              }
              break;
            }
          }
          *(byte *)(lVar41 + 0x68) = *(byte *)(lVar41 + 0x68) | 4;
          iVar15 = 1;
          break;
        }
      default:
switchD_03462db4_default:
        iVar15 = 1;
        break;
      case 2:
        goto switchD_03462db4_caseD_2;
      }
LAB_03462d2c:
      if ((iVar15 != 1) || (bVar40)) goto LAB_03462b7c;
      goto LAB_03462c8c;
    }
    pcVar24 = "a newer";
  }
LAB_03465294:
  snprintf((char *)&local_1b0,0x104,
           "Load bank failed : incompatible bank version. Bank was generated with %s version of Wwise. The Bank version is %d and the current SDK version is %d"
           ,pcVar24,(uint)local_1d0,0x8c);
  iVar15 = 0x40;
LAB_03462b7c:
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x58))();
    (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *puVar42 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return iVar15;
  while (*(uint *)(puVar21 + 1) != uVar27) {
LAB_034649d4:
    puVar39 = puVar21;
    puVar21 = (undefined8 *)*puVar39;
    if (puVar21 == (undefined8 *)0x0) goto LAB_03464a38;
  }
  *puVar39 = *puVar21;
LAB_034649f4:
  puVar13 = PTR_DAT_047e2fd0;
  if (puVar21[4] != 0) {
    *(undefined4 *)(puVar21 + 5) = 0;
    (**(code **)(puVar13 + 0x30))(0);
    puVar21[4] = 0;
    *(undefined4 *)((long)puVar21 + 0x2c) = 0;
  }
  (**(code **)(puVar13 + 0x30))(0,puVar21);
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
LAB_03464a38:
  iVar16 = 0x34;
LAB_03464a40:
  nn::os::UnlockMutex(pMVar2);
  uVar44 = (ulong)*(uint *)(lVar41 + 0x38);
LAB_03464a5c:
  iVar15 = 1;
  if (((int)uVar44 != (int)uVar46) && (iVar16 != 1)) {
LAB_03464a74:
    FUN_034605e0(param_1,lVar41);
    iVar15 = iVar16;
  }
  goto LAB_03462d2c;
}


