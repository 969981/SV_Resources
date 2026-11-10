/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147bf38; name: FUN_0147bf38
 */


void FUN_0147bf38(long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 undefined8 param_5,uint param_6,uint param_7,undefined4 param_8)

{
  long *plVar1;
  char *__s;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  size_t sVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  undefined1 auVar18 [12];
  int iVar21;
  float fVar22;
  undefined1 auVar19 [16];
  int iVar23;
  int iVar24;
  undefined1 auVar20 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_390;
  float fStack_38c;
  float fStack_388;
  float local_380;
  float fStack_37c;
  uint local_368;
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
  long *local_2a8;
  undefined *apuStack_2a0 [3];
  undefined1 local_288;
  undefined4 local_280;
  ulong local_278;
  ulong local_270;
  undefined *apuStack_268 [65];
  
  plVar13 = (long *)PTR_PTR_047d1a50;
  uVar12 = (ulong)param_7;
  fStack_388 = param_3._8_4_;
  local_390 = param_3._0_4_;
  fStack_38c = param_3._4_4_;
  local_380 = param_2._0_4_;
  fStack_37c = param_2._4_4_;
  if ((int)param_7 < 1) {
    pvVar6 = (void *)0x0;
    uVar15 = 0x80000000;
    local_368 = 0;
    uVar5 = local_368;
    local_368 = 0;
    if (param_7 != 0) {
      pvVar9 = (void *)(-(ulong)(param_7 >> 0x1f) & 0xffffffc000000000 | uVar12 << 6);
      uVar15 = 0x80000000;
      local_368 = uVar5;
      goto LAB_0147bfac;
    }
LAB_0147c4ec:
    uVar5 = FUN_0147cc30(param_2,param_3,param_4,param_5,(ulong)param_6,pvVar6,uVar12,param_8);
    if (uVar5 != 0) {
LAB_0147c300:
      if (uVar5 <= param_7) {
        param_7 = uVar5;
      }
      *param_1 = 0;
      param_1[1] = -0x8000000000000000;
      *(undefined4 *)(param_1 + 2) = 0;
      if ((int)param_7 < 1) {
        if (param_7 != 0) {
          lVar11 = 0;
          goto LAB_0147c3a8;
        }
      }
      else {
        FUN_0147ca38(param_1,param_7);
        lVar11 = (long)(int)param_1[1];
LAB_0147c3a8:
        uVar12 = (ulong)param_7;
        pvVar9 = pvVar6;
        do {
          iVar16 = (int)lVar11;
          if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= lVar11) {
            FUN_0147ca38(param_1,lVar11 + 1);
            iVar16 = (int)param_1[1];
          }
          pvVar8 = (void *)(*param_1 + (long)iVar16 * 0x40);
          memcpy(pvVar8,pvVar9,0x34);
          puVar14 = (ulong *)((long)pvVar8 + 0x38);
          *puVar14 = 0;
          __s = (char *)(*(ulong *)((long)pvVar9 + 0x38) & 0xfffffffffffffffe);
          if (__s != (char *)0x0) {
            sVar7 = strlen(__s);
            sVar7 = (size_t)((int)sVar7 + 1);
            pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar7)
            ;
            memcpy(pvVar8,__s,sVar7);
            *puVar14 = (ulong)pvVar8 | 1;
          }
          *(int *)(param_1 + 1) = (int)lVar11 + 1;
          uVar12 = uVar12 - 1;
          pvVar9 = (void *)((long)pvVar9 + 0x40);
          lVar11 = lVar11 + 1;
          plVar13 = (long *)PTR_PTR_047d1a50;
        } while (uVar12 != 0);
      }
      *(uint *)(param_1 + 2) = uVar5;
      goto LAB_0147c21c;
    }
  }
  else {
    pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar12 << 6);
    pvVar9 = (void *)((long)pvVar6 + uVar12 * 0x40);
    uVar15 = param_7;
    local_368 = param_7;
LAB_0147bfac:
    uVar10 = (long)pvVar9 + (-0x40 - (long)pvVar6);
    uVar5 = ((uint)(uVar10 >> 6) & 0x3ffffff) + 1;
    pvVar8 = pvVar6;
    if ((uVar5 & 7) != 0) {
      lVar11 = -((ulong)uVar5 & 7);
      do {
        *(undefined8 *)((long)pvVar8 + 0x38) = 0;
        pvVar8 = (void *)((long)pvVar8 + 0x40);
        bVar4 = lVar11 != -1;
        lVar11 = lVar11 + 1;
      } while (bVar4);
    }
    if (0x1bf < uVar10) {
      do {
        *(undefined8 *)((long)pvVar8 + 0x38) = 0;
        *(undefined8 *)((long)pvVar8 + 0x78) = 0;
        *(undefined8 *)((long)pvVar8 + 0xb8) = 0;
        *(undefined8 *)((long)pvVar8 + 0xf8) = 0;
        *(undefined8 *)((long)pvVar8 + 0x138) = 0;
        *(undefined8 *)((long)pvVar8 + 0x178) = 0;
        *(undefined8 *)((long)pvVar8 + 0x1b8) = 0;
        *(undefined8 *)((long)pvVar8 + 0x1f8) = 0;
        pvVar8 = (void *)((long)pvVar8 + 0x200);
      } while (pvVar9 != pvVar8);
    }
    if (param_7 != 1) goto LAB_0147c4ec;
    local_280 = 0;
    apuStack_2a0[1] = (undefined *)0xffffffff;
    apuStack_2a0[2] = (undefined *)0x1;
    memset(&local_278,0xff,0x200);
    apuStack_2a0[0] = PTR_DAT_047d9310 + 0x10;
    local_2a8 = (long *)0x0;
    local_288 = 2;
    FUN_00cb1ce0(param_5,&local_2a8);
    local_320 = param_2._0_8_;
    auVar27 = NEON_fmov(0x3f800000,4);
    local_340 = 0xfb0001;
    local_350 = 0xffff;
    local_2f0 = 0x3a83126f;
    uStack_2e8 = 0x10000000000;
    auVar25 = NEON_ext(param_2,param_2,8,1);
    auVar19 = ZEXT816(0x3f800000);
    local_390 = local_390 - local_380;
    fStack_38c = fStack_38c - fStack_37c;
    fStack_388 = fStack_388 - auVar25._0_4_;
    local_360 = 0;
    local_358 = (undefined **)0x0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_34c = 0;
    iVar16 = -(uint)(local_390 == 0.0);
    iVar21 = -(uint)(fStack_38c == 0.0);
    iVar23 = -(uint)(fStack_388 == 0.0);
    iVar24 = -(uint)(auVar19._0_4_ == 0.0);
    fVar17 = (float)CONCAT13((byte)((uint)local_390 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                             CONCAT12((byte)((uint)local_390 >> 0x10) &
                                      ~(byte)((uint)iVar16 >> 0x10),
                                      CONCAT11((byte)((uint)local_390 >> 8) &
                                               ~(byte)((uint)iVar16 >> 8),
                                               SUB41(local_390,0) & ~(byte)iVar16)));
    auVar18._0_8_ =
         CONCAT17((byte)((uint)fStack_38c >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                  CONCAT16((byte)((uint)fStack_38c >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                           CONCAT15((byte)((uint)fStack_38c >> 8) & ~(byte)((uint)iVar21 >> 8),
                                    CONCAT14(SUB41(fStack_38c,0) & ~(byte)iVar21,fVar17))));
    auVar18[8] = SUB41(fStack_388,0) & ~(byte)iVar23;
    auVar18[9] = (byte)((uint)fStack_388 >> 8) & ~(byte)((uint)iVar23 >> 8);
    auVar18[10] = (byte)((uint)fStack_388 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
    auVar18[0xb] = (byte)((uint)fStack_388 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
    auVar20._12_2_ = 0;
    auVar20._0_12_ = auVar18;
    auVar20[0xe] = auVar19[2] & ~(byte)((uint)iVar24 >> 0x10);
    auVar20[0xf] = auVar19[3] & ~(byte)((uint)iVar24 >> 0x18);
    auVar26._0_4_ = auVar27._0_4_ / fVar17;
    fVar22 = (float)((ulong)auVar18._0_8_ >> 0x20);
    auVar26._4_4_ = auVar27._4_4_ / fVar22;
    auVar26._8_4_ = auVar27._8_4_ / auVar18._8_4_;
    auVar26._12_4_ = auVar27._12_4_ / auVar20._12_4_;
    local_348 = 0;
    auVar27._8_4_ = 0x7f7fffee;
    auVar27._0_8_ = 0x7f7fffee7f7fffee;
    auVar27._12_4_ = 0x7f7fffee;
    local_2e0 = 0;
    iVar16 = -(uint)(fVar17 == 0.0);
    iVar21 = -(uint)(fVar22 == 0.0);
    iVar23 = -(uint)(auVar18._8_4_ == 0.0);
    iVar24 = -(uint)(auVar20._12_4_ == 0.0);
    local_328 = local_2a8;
    uStack_318 = (ulong)(uint)auVar25._0_4_;
    uStack_308 = auVar20._8_8_;
    auVar19[0] = ~(byte)iVar16;
    auVar19[1] = ~(byte)((uint)iVar16 >> 8);
    auVar19[2] = ~(byte)((uint)iVar16 >> 0x10);
    auVar19[3] = ~(byte)((uint)iVar16 >> 0x18);
    auVar19[4] = ~(byte)iVar21;
    auVar19[5] = ~(byte)((uint)iVar21 >> 8);
    auVar19[6] = ~(byte)((uint)iVar21 >> 0x10);
    auVar19[7] = ~(byte)((uint)iVar21 >> 0x18);
    auVar19[8] = ~(byte)iVar23;
    auVar19[9] = ~(byte)((uint)iVar23 >> 8);
    auVar19[10] = ~(byte)((uint)iVar23 >> 0x10);
    auVar19[0xb] = ~(byte)((uint)iVar23 >> 0x18);
    auVar19[0xc] = ~(byte)iVar24;
    auVar19[0xd] = ~(byte)((uint)iVar24 >> 8);
    auVar19[0xe] = ~(byte)((uint)iVar24 >> 0x10);
    auVar19[0xf] = ~(byte)((uint)iVar24 >> 0x18);
    auVar27 = auVar27 ^ (auVar27 ^ auVar26) & auVar19;
    local_2d8 = 0x7f7fffee;
    uStack_2f8 = auVar27._8_8_;
    local_300 = auVar27._0_8_;
    uStack_310 = auVar18._0_8_;
    nn::os::LockMutex((MutexType *)(param_4 + 0x120));
    local_360 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
    lVar11 = 0x30;
    do {
      *(ulong *)((long)apuStack_2a0 + lVar11) = *(ulong *)((long)apuStack_2a0 + lVar11) & 1;
      lVar11 = lVar11 + 8;
    } while (lVar11 != 0x228);
    if ((param_6 & 1) != 0) {
      local_278 = local_278 | 2;
    }
    local_270 = local_270 | param_6;
    if ((param_6 >> 1 & 1) != 0) {
      local_270 = local_270 | 2;
    }
    lVar11 = 7;
    do {
      if ((param_6 >> (lVar11 - 5U & 0x3f) & 1) != 0) {
        apuStack_2a0[lVar11] = (undefined *)((ulong)apuStack_2a0[lVar11] | 2);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x45);
    local_358 = apuStack_2a0;
    local_360 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
    local_34c = 1;
    uVar12 = FUN_0147c524(param_4,&local_360,PTR_DAT_047d19b0 + 0x200,pvVar6,param_8);
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x120));
    if ((local_2a8 != (long *)0x0) && (local_2a8[1] != 0)) {
      plVar1 = local_2a8 + 2;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*local_2a8 + 0x18))();
      }
    }
    if ((uVar12 & 1) != 0) {
      uVar5 = 1;
      goto LAB_0147c300;
    }
  }
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
LAB_0147c21c:
  if (local_368 != 0) {
    lVar11 = (long)(int)local_368;
    uVar12 = *(ulong *)((long)pvVar6 + lVar11 * 0x40 + -8);
    if ((uVar12 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
    }
    if ((void *)((long)pvVar6 + lVar11 * 0x40 + -0x40) != pvVar6) {
      uVar12 = *(ulong *)((long)pvVar6 + lVar11 * 0x40 + -0x48);
      if ((uVar12 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
      }
      if ((void *)((long)pvVar6 + lVar11 * 0x40 + -0x80) != pvVar6) {
        uVar12 = *(ulong *)((long)pvVar6 + lVar11 * 0x40 + -0x88);
        if ((uVar12 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
        }
        if ((void *)((long)pvVar6 + lVar11 * 0x40 + -0xc0) != pvVar6) {
          uVar12 = *(ulong *)((long)pvVar6 + lVar11 * 0x40 + -200);
          if ((uVar12 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
          }
          puVar3 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar6 + lVar11 * 0x40 + -0x100) != pvVar6) {
            lVar11 = lVar11 << 6;
            do {
              uVar12 = *(ulong *)((long)pvVar6 + lVar11 + -0x108);
              if ((uVar12 & 1) != 0) {
                (**(code **)(puVar3 + 8))(0,uVar12 - 1,0);
              }
              lVar11 = lVar11 + -0x40;
            } while (lVar11 != 0x100);
          }
        }
      }
    }
  }
  if (((int)uVar15 < 0) || (pvVar6 == (void *)0x0)) {
    return;
  }
  (**(code **)(*plVar13 + 0x20))(plVar13,pvVar6,(ulong)uVar15 << 6);
  return;
}


