/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01abe524; name: FUN_01abe524
 */


void FUN_01abe524(long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 undefined8 *param_5,ulong param_6,uint param_7,undefined4 param_8)

{
  long *plVar1;
  char *__s;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  size_t sVar10;
  void *pvVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong *puVar18;
  int iVar19;
  undefined1 auVar21 [12];
  int iVar26;
  undefined1 auVar22 [16];
  float fVar20;
  int iVar28;
  int iVar29;
  undefined1 auVar23 [16];
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar30 [16];
  uint local_354;
  undefined8 local_350;
  undefined **ppuStack_348;
  undefined2 local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined4 local_330;
  long *local_318;
  undefined8 local_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined4 local_280;
  ulong auStack_278 [65];
  long *local_70 [2];
  
  uVar16 = (ulong)param_7;
  iVar17 = (int)param_6;
  if ((int)param_7 < 1) {
    uVar15 = 0;
    pvVar9 = (void *)0x0;
    if (param_7 != 0) {
      local_354 = 0x80000000;
      pvVar12 = (void *)(-(ulong)(param_7 >> 0x1f) & 0xffffffc000000000 | uVar16 << 6);
      uVar15 = 0;
      goto LAB_01abe594;
    }
    local_354 = 0x80000000;
LAB_01abe604:
    local_280 = 0;
    local_298 = 0xffffffff;
    uStack_290 = 1;
    memset(auStack_278,0xff,0x200);
    local_2a0 = PTR_DAT_047d9310 + 0x10;
    local_288 = 2;
    local_350 = *param_5;
    ppuStack_348 = (undefined **)(ulong)*(uint *)(param_5 + 1);
    FUN_00e81a84(local_70,&local_350);
    auVar30 = NEON_fmov(0x3f800000,4);
    local_330 = 0xfb0001;
    local_2c8 = 0x7f7fffee;
    local_2e0 = 0x3a83126f;
    uStack_308 = param_2._8_8_ & 0xffffffff;
    local_350 = 0;
    ppuStack_348 = (undefined **)0x0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    auVar22 = ZEXT816(0x3f800000);
    fVar3 = param_3._0_4_ - param_2._0_4_;
    fVar4 = param_3._4_4_ - param_2._4_4_;
    fVar5 = param_3._8_4_ - param_2._8_4_;
    local_340 = 0xffff;
    iVar19 = -(uint)(fVar3 == 0.0);
    iVar26 = -(uint)(fVar4 == 0.0);
    iVar28 = -(uint)(fVar5 == 0.0);
    iVar29 = -(uint)(auVar22._0_4_ == 0.0);
    fVar20 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                             CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                      CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar19 >> 8)
                                               ,SUB41(fVar3,0) & ~(byte)iVar19)));
    auVar21._0_8_ =
         CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                  CONCAT16((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                           CONCAT15((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                    CONCAT14(SUB41(fVar4,0) & ~(byte)iVar26,fVar20))));
    auVar21[8] = SUB41(fVar5,0) & ~(byte)iVar28;
    auVar21[9] = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar28 >> 8);
    auVar21[10] = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
    auVar21[0xb] = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
    auVar23._12_2_ = 0;
    auVar23._0_12_ = auVar21;
    auVar23[0xe] = auVar22[2] & ~(byte)((uint)iVar29 >> 0x10);
    auVar23[0xf] = auVar22[3] & ~(byte)((uint)iVar29 >> 0x18);
    local_2d8 = 0x10000000000;
    uStack_2d0 = 0;
    local_33c = 0;
    fVar27 = (float)((ulong)auVar21._0_8_ >> 0x20);
    fVar3 = auVar30._4_4_ / fVar27;
    fVar4 = auVar30._8_4_ / auVar21._8_4_;
    fVar5 = auVar30._12_4_ / auVar23._12_4_;
    local_338 = 0;
    auVar25._8_4_ = 0x7f7fffee;
    auVar25._0_8_ = 0x7f7fffee7f7fffee;
    auVar25._12_4_ = 0x7f7fffee;
    local_318 = local_70[0];
    iVar19 = -(uint)(fVar20 == 0.0);
    iVar26 = -(uint)(fVar27 == 0.0);
    iVar28 = -(uint)(auVar21._8_4_ == 0.0);
    iVar29 = -(uint)(auVar23._12_4_ == 0.0);
    uStack_2f8 = auVar23._8_8_;
    auVar24[0] = ~(byte)iVar19;
    auVar24[1] = ~(byte)((uint)iVar19 >> 8);
    auVar24[2] = ~(byte)((uint)iVar19 >> 0x10);
    auVar24[3] = ~(byte)((uint)iVar19 >> 0x18);
    auVar24[4] = ~(byte)iVar26;
    auVar24[5] = ~(byte)((uint)iVar26 >> 8);
    auVar24[6] = ~(byte)((uint)iVar26 >> 0x10);
    auVar24[7] = ~(byte)((uint)iVar26 >> 0x18);
    auVar24[8] = ~(byte)iVar28;
    auVar24[9] = ~(byte)((uint)iVar28 >> 8);
    auVar24[10] = ~(byte)((uint)iVar28 >> 0x10);
    auVar24[0xb] = ~(byte)((uint)iVar28 >> 0x18);
    auVar24[0xc] = ~(byte)iVar29;
    auVar24[0xd] = ~(byte)((uint)iVar29 >> 8);
    auVar24[0xe] = ~(byte)((uint)iVar29 >> 0x10);
    auVar24[0xf] = ~(byte)((uint)iVar29 >> 0x18);
    auVar22[4] = SUB41(fVar3,0);
    auVar22._0_4_ = auVar30._0_4_ / fVar20;
    auVar22[5] = (char)((uint)fVar3 >> 8);
    auVar22[6] = (char)((uint)fVar3 >> 0x10);
    auVar22[7] = (char)((uint)fVar3 >> 0x18);
    auVar22[8] = SUB41(fVar4,0);
    auVar22[9] = (char)((uint)fVar4 >> 8);
    auVar22[10] = (char)((uint)fVar4 >> 0x10);
    auVar22[0xb] = (char)((uint)fVar4 >> 0x18);
    auVar22[0xc] = SUB41(fVar5,0);
    auVar22[0xd] = (char)((uint)fVar5 >> 8);
    auVar22[0xe] = (char)((uint)fVar5 >> 0x10);
    auVar22[0xf] = (char)((uint)fVar5 >> 0x18);
    auVar25 = auVar25 ^ (auVar25 ^ auVar22) & auVar24;
    uStack_2e8 = auVar25._8_8_;
    local_2f0 = auVar25._0_8_;
    local_310 = param_2._0_8_;
    uStack_300 = auVar21._0_8_;
    nn::os::LockMutex((MutexType *)(param_4 + 0x120));
    local_350 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
    if (-1 < iVar17) {
      lVar14 = 0;
      do {
        *(ulong *)((long)auStack_278 + lVar14 + 8) = *(ulong *)((long)auStack_278 + lVar14 + 8) & 1;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0x1f8);
      auStack_278[1] = auStack_278[1] | 1L << (param_6 & 0x3f);
      auStack_278[iVar17] = auStack_278[iVar17] | 2;
      local_350 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
      local_33c = 1;
    }
    ppuStack_348 = &local_2a0;
    uVar8 = FUN_00da9c58(param_4,&local_350,PTR_DAT_047d19b0 + 0x200,pvVar9,uVar16,param_8);
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x120));
    if ((local_70[0] != (long *)0x0) && (local_70[0][1] != 0)) {
      plVar1 = local_70[0] + 2;
      do {
        lVar14 = *plVar1;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*local_70[0] + 0x18))(local_70[0]);
      }
    }
    if (uVar8 != 0) {
LAB_01abe9c8:
      if (uVar8 <= param_7) {
        param_7 = uVar8;
      }
      *param_1 = 0;
      param_1[1] = -0x8000000000000000;
      *(undefined4 *)(param_1 + 2) = 0;
      if ((int)param_7 < 1) {
        if (param_7 != 0) {
          lVar14 = 0;
          goto LAB_01abea04;
        }
      }
      else {
        FUN_0147ca38(param_1,param_7);
        lVar14 = (long)(int)param_1[1];
LAB_01abea04:
        uVar16 = (ulong)param_7;
        pvVar12 = pvVar9;
        do {
          iVar17 = (int)lVar14;
          if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= lVar14) {
            FUN_0147ca38(param_1);
            iVar17 = (int)param_1[1];
          }
          pvVar11 = (void *)(*param_1 + (long)iVar17 * 0x40);
          memcpy(pvVar11,pvVar12,0x34);
          puVar18 = (ulong *)((long)pvVar11 + 0x38);
          *puVar18 = 0;
          __s = (char *)(*(ulong *)((long)pvVar12 + 0x38) & 0xfffffffffffffffe);
          if (__s != (char *)0x0) {
            sVar10 = strlen(__s);
            sVar10 = (size_t)((int)sVar10 + 1);
            pvVar11 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                        (PTR_PTR_047d1a50,sVar10);
            memcpy(pvVar11,__s,sVar10);
            *puVar18 = (ulong)pvVar11 | 1;
          }
          uVar16 = uVar16 - 1;
          pvVar12 = (void *)((long)pvVar12 + 0x40);
          *(int *)(param_1 + 1) = (int)lVar14 + 1;
          lVar14 = lVar14 + 1;
        } while (uVar16 != 0);
      }
      *(uint *)(param_1 + 2) = uVar8;
      goto LAB_01abe81c;
    }
  }
  else {
    pvVar9 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar16 << 6);
    pvVar12 = (void *)((long)pvVar9 + uVar16 * 0x40);
    local_354 = param_7;
    uVar15 = param_7;
LAB_01abe594:
    uVar13 = (long)pvVar12 + (-0x40 - (long)pvVar9);
    uVar8 = ((uint)(uVar13 >> 6) & 0x3ffffff) + 1;
    pvVar11 = pvVar9;
    if ((uVar8 & 7) != 0) {
      lVar14 = -((ulong)uVar8 & 7);
      do {
        *(undefined8 *)((long)pvVar11 + 0x38) = 0;
        pvVar11 = (void *)((long)pvVar11 + 0x40);
        bVar7 = lVar14 != -1;
        lVar14 = lVar14 + 1;
      } while (bVar7);
    }
    if (0x1bf < uVar13) {
      do {
        *(undefined8 *)((long)pvVar11 + 0x38) = 0;
        *(undefined8 *)((long)pvVar11 + 0x78) = 0;
        *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
        *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
        *(undefined8 *)((long)pvVar11 + 0x138) = 0;
        *(undefined8 *)((long)pvVar11 + 0x178) = 0;
        *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
        *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
        pvVar11 = (void *)((long)pvVar11 + 0x200);
      } while (pvVar12 != pvVar11);
    }
    if (param_7 != 1) goto LAB_01abe604;
    uVar16 = FUN_01abeae0(param_2,param_3[0],param_4,param_5,param_6 & 0xffffffff,pvVar9,param_8);
    if ((uVar16 & 1) != 0) {
      uVar8 = 1;
      goto LAB_01abe9c8;
    }
  }
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
LAB_01abe81c:
  if (uVar15 != 0) {
    lVar14 = (long)(int)uVar15;
    uVar16 = *(ulong *)((long)pvVar9 + lVar14 * 0x40 + -8);
    if ((uVar16 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar16 - 1,0);
    }
    if ((void *)((long)pvVar9 + lVar14 * 0x40 + -0x40) != pvVar9) {
      uVar16 = *(ulong *)((long)pvVar9 + lVar14 * 0x40 + -0x48);
      if ((uVar16 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar16 - 1,0);
      }
      if ((void *)((long)pvVar9 + lVar14 * 0x40 + -0x80) != pvVar9) {
        uVar16 = *(ulong *)((long)pvVar9 + lVar14 * 0x40 + -0x88);
        if ((uVar16 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar16 - 1,0);
        }
        if ((void *)((long)pvVar9 + lVar14 * 0x40 + -0xc0) != pvVar9) {
          uVar16 = *(ulong *)((long)pvVar9 + lVar14 * 0x40 + -200);
          if ((uVar16 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar16 - 1,0);
          }
          puVar6 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar9 + lVar14 * 0x40 + -0x100) != pvVar9) {
            lVar14 = lVar14 << 6;
            do {
              uVar16 = *(ulong *)((long)pvVar9 + lVar14 + -0x108);
              if ((uVar16 & 1) != 0) {
                (**(code **)(puVar6 + 8))(0,uVar16 - 1,0);
              }
              lVar14 = lVar14 + -0x40;
            } while (lVar14 != 0x100);
          }
        }
      }
    }
  }
  if (((int)local_354 < 0) || (pvVar9 == (void *)0x0)) {
    return;
  }
  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,pvVar9,(ulong)local_354 << 6);
  return;
}


