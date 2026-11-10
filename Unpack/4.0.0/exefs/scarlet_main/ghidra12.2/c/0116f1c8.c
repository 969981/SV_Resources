/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116f1c8; name: FUN_0116f1c8
 */


void FUN_0116f1c8(long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 undefined8 param_5,uint param_6,uint param_7,undefined4 param_8)

{
  long *plVar1;
  long *plVar2;
  char *__s;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  void *pvVar8;
  size_t sVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  undefined1 auVar20 [12];
  int iVar23;
  float fVar24;
  undefined1 auVar21 [16];
  int iVar25;
  int iVar26;
  undefined1 auVar22 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float local_380;
  float fStack_37c;
  float fStack_378;
  ulong local_370;
  undefined8 local_360;
  undefined **local_358;
  undefined2 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_340;
  long *local_328;
  undefined8 local_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  long *local_2b0;
  long *local_2a8;
  undefined *local_2a0 [3];
  undefined1 local_288;
  undefined4 local_280;
  ulong local_278;
  ulong local_270;
  undefined *apuStack_268 [65];
  
  puVar5 = PTR_PTR_047d1a50;
  fStack_378 = param_3._8_4_;
  local_380 = param_3._0_4_;
  fStack_37c = param_3._4_4_;
  uVar14 = (ulong)param_7;
  if ((int)param_7 < 1) {
    uVar16 = 0;
    pvVar8 = (void *)0x0;
    uVar17 = 0x80000000;
    if (param_7 != 0) {
      pvVar11 = (void *)(-(ulong)(param_7 >> 0x1f) & 0xffffffc000000000 | uVar14 << 6);
      uVar16 = 0;
      uVar17 = 0x80000000;
      goto LAB_0116f23c;
    }
LAB_0116f2ac:
    local_280 = 0;
    local_2a0[1] = (undefined *)0xffffffff;
    local_2a0[2] = (undefined *)0x1;
    memset(&local_278,0xff,0x200);
    local_2a0[0] = PTR_DAT_047d9310 + 0x10;
    local_288 = 2;
    lVar13 = FUN_0116f850(*(undefined8 *)(param_4 + 0x1e0),param_5);
    if (lVar13 == 0) {
      local_2a8 = (long *)0x0;
LAB_0116f688:
      FUN_0116fc5c(param_5,&local_2a8);
      plVar1 = local_2a8;
      local_2b0 = local_2a8;
      if (local_2a8 == (long *)0x0) {
        FUN_0116fab8(param_4 + 0x1c0,param_5,&local_2b0);
      }
      else {
        if (local_2a8[1] != 0) {
          plVar2 = local_2a8 + 2;
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_0116fab8(param_4 + 0x1c0,param_5,&local_2b0);
        if (plVar1[1] != 0) {
          plVar2 = plVar1 + 2;
          do {
            lVar13 = *plVar2;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))();
          }
        }
      }
    }
    else {
      local_2a8 = *(long **)(*(long *)(lVar13 + 0x40) + 0x40);
      if (local_2a8 == (long *)0x0) goto LAB_0116f688;
      if (local_2a8[1] != 0) {
        plVar1 = local_2a8 + 2;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    auVar29 = NEON_fmov(0x3f800000,4);
    local_340 = 0xfb0001;
    local_350 = 0xffff;
    local_2f0 = 0x3a83126f;
    uStack_2e8 = 0x10000000000;
    auVar27 = NEON_ext(param_2,param_2,8,1);
    auVar21 = ZEXT816(0x3f800000);
    local_380 = local_380 - param_2._0_4_;
    fStack_37c = fStack_37c - param_2._4_4_;
    fStack_378 = fStack_378 - auVar27._0_4_;
    local_360 = 0;
    local_358 = (undefined **)0x0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_34c = 0;
    iVar18 = -(uint)(local_380 == 0.0);
    iVar23 = -(uint)(fStack_37c == 0.0);
    iVar25 = -(uint)(fStack_378 == 0.0);
    iVar26 = -(uint)(auVar21._0_4_ == 0.0);
    fVar19 = (float)CONCAT13((byte)((uint)local_380 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                             CONCAT12((byte)((uint)local_380 >> 0x10) &
                                      ~(byte)((uint)iVar18 >> 0x10),
                                      CONCAT11((byte)((uint)local_380 >> 8) &
                                               ~(byte)((uint)iVar18 >> 8),
                                               SUB41(local_380,0) & ~(byte)iVar18)));
    auVar20._0_8_ =
         CONCAT17((byte)((uint)fStack_37c >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                  CONCAT16((byte)((uint)fStack_37c >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                           CONCAT15((byte)((uint)fStack_37c >> 8) & ~(byte)((uint)iVar23 >> 8),
                                    CONCAT14(SUB41(fStack_37c,0) & ~(byte)iVar23,fVar19))));
    auVar20[8] = SUB41(fStack_378,0) & ~(byte)iVar25;
    auVar20[9] = (byte)((uint)fStack_378 >> 8) & ~(byte)((uint)iVar25 >> 8);
    auVar20[10] = (byte)((uint)fStack_378 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
    auVar20[0xb] = (byte)((uint)fStack_378 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
    auVar22._12_2_ = 0;
    auVar22._0_12_ = auVar20;
    auVar22[0xe] = auVar21[2] & ~(byte)((uint)iVar26 >> 0x10);
    auVar22[0xf] = auVar21[3] & ~(byte)((uint)iVar26 >> 0x18);
    auVar28._0_4_ = auVar29._0_4_ / fVar19;
    fVar24 = (float)((ulong)auVar20._0_8_ >> 0x20);
    auVar28._4_4_ = auVar29._4_4_ / fVar24;
    auVar28._8_4_ = auVar29._8_4_ / auVar20._8_4_;
    auVar28._12_4_ = auVar29._12_4_ / auVar22._12_4_;
    local_348 = 0;
    auVar29._8_4_ = 0x7f7fffee;
    auVar29._0_8_ = 0x7f7fffee7f7fffee;
    auVar29._12_4_ = 0x7f7fffee;
    local_2e0 = 0;
    iVar18 = -(uint)(fVar19 == 0.0);
    iVar23 = -(uint)(fVar24 == 0.0);
    iVar25 = -(uint)(auVar20._8_4_ == 0.0);
    iVar26 = -(uint)(auVar22._12_4_ == 0.0);
    local_328 = local_2a8;
    uStack_318 = (ulong)(uint)auVar27._0_4_;
    uStack_308 = auVar22._8_8_;
    auVar21[0] = ~(byte)iVar18;
    auVar21[1] = ~(byte)((uint)iVar18 >> 8);
    auVar21[2] = ~(byte)((uint)iVar18 >> 0x10);
    auVar21[3] = ~(byte)((uint)iVar18 >> 0x18);
    auVar21[4] = ~(byte)iVar23;
    auVar21[5] = ~(byte)((uint)iVar23 >> 8);
    auVar21[6] = ~(byte)((uint)iVar23 >> 0x10);
    auVar21[7] = ~(byte)((uint)iVar23 >> 0x18);
    auVar21[8] = ~(byte)iVar25;
    auVar21[9] = ~(byte)((uint)iVar25 >> 8);
    auVar21[10] = ~(byte)((uint)iVar25 >> 0x10);
    auVar21[0xb] = ~(byte)((uint)iVar25 >> 0x18);
    auVar21[0xc] = ~(byte)iVar26;
    auVar21[0xd] = ~(byte)((uint)iVar26 >> 8);
    auVar21[0xe] = ~(byte)((uint)iVar26 >> 0x10);
    auVar21[0xf] = ~(byte)((uint)iVar26 >> 0x18);
    auVar29 = auVar29 ^ (auVar29 ^ auVar28) & auVar21;
    local_2d8 = 0x7f7fffee;
    uStack_2f8 = auVar29._8_8_;
    local_300 = auVar29._0_8_;
    local_320 = param_2._0_8_;
    uStack_310 = auVar20._0_8_;
    nn::os::LockMutex((MutexType *)(param_4 + 0x120));
    local_360 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
    lVar13 = 0x30;
    do {
      *(ulong *)((long)local_2a0 + lVar13) = *(ulong *)((long)local_2a0 + lVar13) & 1;
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x228);
    if ((param_6 & 1) != 0) {
      local_278 = local_278 | 2;
    }
    local_270 = local_270 | param_6;
    if ((param_6 >> 1 & 1) != 0) {
      local_270 = local_270 | 2;
    }
    lVar13 = 7;
    do {
      if ((param_6 >> (lVar13 - 5U & 0x3f) & 1) != 0) {
        local_2a0[lVar13] = (undefined *)((ulong)local_2a0[lVar13] | 2);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x45);
    local_358 = local_2a0;
    local_360 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
    local_34c = 1;
    uVar7 = FUN_00da9c58(param_4,&local_360,PTR_DAT_047d19b0 + 0x200,pvVar8,uVar14,param_8);
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x120));
    if ((local_2a8 != (long *)0x0) && (local_2a8[1] != 0)) {
      plVar1 = local_2a8 + 2;
      do {
        lVar13 = *plVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*local_2a8 + 0x18))();
      }
    }
    if (uVar7 != 0) {
LAB_0116f744:
      if (uVar7 <= param_7) {
        param_7 = uVar7;
      }
      *param_1 = 0;
      param_1[1] = -0x8000000000000000;
      *(undefined4 *)(param_1 + 2) = 0;
      if ((int)param_7 < 1) {
        if (param_7 != 0) {
          lVar13 = 0;
          goto LAB_0116f780;
        }
      }
      else {
        FUN_0147ca38(param_1);
        lVar13 = (long)(int)param_1[1];
LAB_0116f780:
        local_370 = (ulong)param_7;
        pvVar11 = pvVar8;
        do {
          iVar18 = (int)lVar13;
          if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= lVar13) {
            FUN_0147ca38(param_1,lVar13 + 1);
            iVar18 = (int)param_1[1];
          }
          pvVar10 = (void *)(*param_1 + (long)iVar18 * 0x40);
          memcpy(pvVar10,pvVar11,0x34);
          puVar15 = (ulong *)((long)pvVar10 + 0x38);
          *puVar15 = 0;
          __s = (char *)(*(ulong *)((long)pvVar11 + 0x38) & 0xfffffffffffffffe);
          if (__s != (char *)0x0) {
            sVar9 = strlen(__s);
            pvVar10 = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5);
            memcpy(pvVar10,__s,(long)((int)sVar9 + 1));
            *puVar15 = (ulong)pvVar10 | 1;
          }
          pvVar11 = (void *)((long)pvVar11 + 0x40);
          *(int *)(param_1 + 1) = (int)lVar13 + 1;
          local_370 = local_370 - 1;
          lVar13 = lVar13 + 1;
        } while (local_370 != 0);
      }
      *(uint *)(param_1 + 2) = uVar7;
      goto LAB_0116f4e4;
    }
  }
  else {
    pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar14 << 6);
    pvVar11 = (void *)((long)pvVar8 + uVar14 * 0x40);
    uVar16 = param_7;
    uVar17 = param_7;
LAB_0116f23c:
    uVar12 = (long)pvVar11 + (-0x40 - (long)pvVar8);
    uVar7 = ((uint)(uVar12 >> 6) & 0x3ffffff) + 1;
    pvVar10 = pvVar8;
    if ((uVar7 & 7) != 0) {
      lVar13 = -((ulong)uVar7 & 7);
      do {
        *(undefined8 *)((long)pvVar10 + 0x38) = 0;
        pvVar10 = (void *)((long)pvVar10 + 0x40);
        bVar6 = lVar13 != -1;
        lVar13 = lVar13 + 1;
      } while (bVar6);
    }
    if (0x1bf < uVar12) {
      do {
        *(undefined8 *)((long)pvVar10 + 0x38) = 0;
        *(undefined8 *)((long)pvVar10 + 0x78) = 0;
        *(undefined8 *)((long)pvVar10 + 0xb8) = 0;
        *(undefined8 *)((long)pvVar10 + 0xf8) = 0;
        *(undefined8 *)((long)pvVar10 + 0x138) = 0;
        *(undefined8 *)((long)pvVar10 + 0x178) = 0;
        *(undefined8 *)((long)pvVar10 + 0x1b8) = 0;
        *(undefined8 *)((long)pvVar10 + 0x1f8) = 0;
        pvVar10 = (void *)((long)pvVar10 + 0x200);
      } while (pvVar11 != pvVar10);
    }
    if (param_7 != 1) goto LAB_0116f2ac;
    uVar14 = FUN_01171ea0(param_2,param_3,param_4,param_5,(ulong)param_6,pvVar8,param_8);
    if ((uVar14 & 1) != 0) {
      uVar7 = 1;
      goto LAB_0116f744;
    }
  }
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
LAB_0116f4e4:
  if (uVar16 != 0) {
    lVar13 = (long)(int)uVar16;
    uVar14 = *(ulong *)((long)pvVar8 + lVar13 * 0x40 + -8);
    if ((uVar14 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar14 - 1,0);
    }
    if ((void *)((long)pvVar8 + lVar13 * 0x40 + -0x40) != pvVar8) {
      uVar14 = *(ulong *)((long)pvVar8 + lVar13 * 0x40 + -0x48);
      if ((uVar14 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar14 - 1,0);
      }
      if ((void *)((long)pvVar8 + lVar13 * 0x40 + -0x80) != pvVar8) {
        uVar14 = *(ulong *)((long)pvVar8 + lVar13 * 0x40 + -0x88);
        if ((uVar14 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar14 - 1,0);
        }
        if ((void *)((long)pvVar8 + lVar13 * 0x40 + -0xc0) != pvVar8) {
          uVar14 = *(ulong *)((long)pvVar8 + lVar13 * 0x40 + -200);
          if ((uVar14 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar14 - 1,0);
          }
          puVar4 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar8 + lVar13 * 0x40 + -0x100) != pvVar8) {
            lVar13 = lVar13 << 6;
            do {
              uVar14 = *(ulong *)((long)pvVar8 + lVar13 + -0x108);
              if ((uVar14 & 1) != 0) {
                (**(code **)(puVar4 + 8))(0,uVar14 - 1,0);
              }
              lVar13 = lVar13 + -0x40;
            } while (lVar13 != 0x100);
          }
        }
      }
    }
  }
  if (((int)uVar17 < 0) || (pvVar8 == (void *)0x0)) {
    return;
  }
  (**(code **)(*(long *)puVar5 + 0x20))(puVar5,pvVar8,(ulong)uVar17 << 6);
  return;
}


