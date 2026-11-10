/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ceda1c; name: FUN_00ceda1c
 */


void FUN_00ceda1c(long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 ulong param_5,uint param_6,undefined4 param_7,byte *param_8)

{
  void *pvVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  void *__src;
  size_t sVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar22;
  int iVar23;
  undefined1 auVar20 [16];
  int iVar24;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float local_340;
  float fStack_33c;
  uint local_328;
  undefined8 local_320;
  undefined **local_318;
  undefined2 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2e0;
  ulong uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  uint local_2b0;
  undefined *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined4 local_280;
  ulong auStack_278 [67];
  
  plVar13 = (long *)PTR_PTR_047d1a50;
  uVar8 = (ulong)param_6;
  local_340 = param_2._0_4_;
  fStack_33c = param_2._4_4_;
  if ((int)param_6 < 1) {
    __src = (void *)0x0;
    local_328 = 0;
    uVar4 = local_328;
    local_328 = 0;
    uVar14 = 0x80000000;
    if (param_6 != 0) {
      pvVar6 = (void *)(-(ulong)(param_6 >> 0x1f) & 0xffffffc000000000 | uVar8 << 6);
      uVar14 = 0x80000000;
      local_328 = uVar4;
      goto LAB_00ceda90;
    }
LAB_00cedff0:
    uVar4 = FUN_00cf1f38(param_2._0_8_,param_3,param_4,param_5 & 0xffffffff,__src,uVar8,param_7,
                         param_8);
    if (uVar4 == 0) {
LAB_00cee010:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
      *(undefined4 *)(param_1 + 2) = 0;
      goto LAB_00cedc88;
    }
  }
  else {
    __src = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar8 << 6);
    pvVar6 = (void *)((long)__src + uVar8 * 0x40);
    uVar14 = param_6;
    local_328 = param_6;
LAB_00ceda90:
    *(undefined8 *)((long)__src + 0x38) = 0;
    if ((((void *)((long)__src + 0x40U) != pvVar6) &&
        (*(undefined8 *)((long)__src + 0x78) = 0, (void *)((long)__src + 0x80U) != pvVar6)) &&
       (*(undefined8 *)((long)__src + 0xb8) = 0, (void *)((long)__src + 0xc0U) != pvVar6)) {
      *(undefined8 *)((long)__src + 0xf8) = 0;
      for (pvVar1 = (void *)((long)__src + 0x100); pvVar1 != pvVar6;
          pvVar1 = (void *)((long)pvVar1 + 0x40)) {
        *(undefined8 *)((long)pvVar1 + 0x38) = 0;
      }
    }
    if (param_6 != 1) goto LAB_00cedff0;
    local_280 = 0;
    local_298 = 0xffffffff;
    uStack_290 = 1;
    memset(auStack_278,0xff,0x200);
    auVar25 = NEON_fmov(0x3f800000,4);
    auVar20 = NEON_ext(param_2,param_2,8,1);
    auVar21 = ZEXT816(0x3f800000);
    local_340 = param_3._0_4_ - local_340;
    fStack_33c = param_3._4_4_ - fStack_33c;
    fVar16 = param_3._8_4_ - auVar20._0_4_;
    local_2a0 = PTR_DAT_047d9310 + 0x10;
    local_320 = 0;
    local_318 = (undefined **)0x0;
    uStack_2d8 = (ulong)(uint)auVar20._0_4_;
    iVar19 = -(uint)(local_340 == 0.0);
    iVar22 = -(uint)(fStack_33c == 0.0);
    iVar23 = -(uint)(fVar16 == 0.0);
    iVar24 = -(uint)(auVar21._0_4_ == 0.0);
    fVar15 = (float)CONCAT13((byte)((uint)local_340 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                             CONCAT12((byte)((uint)local_340 >> 0x10) &
                                      ~(byte)((uint)iVar19 >> 0x10),
                                      CONCAT11((byte)((uint)local_340 >> 8) &
                                               ~(byte)((uint)iVar19 >> 8),
                                               SUB41(local_340,0) & ~(byte)iVar19)));
    local_2d0 = CONCAT17((byte)((uint)fStack_33c >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                         CONCAT16((byte)((uint)fStack_33c >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                  CONCAT15((byte)((uint)fStack_33c >> 8) &
                                           ~(byte)((uint)iVar22 >> 8),
                                           CONCAT14(SUB41(fStack_33c,0) & ~(byte)iVar22,fVar15))));
    fVar17 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                             CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                      CONCAT11((byte)((uint)fVar16 >> 8) &
                                               ~(byte)((uint)iVar23 >> 8),
                                               SUB41(fVar16,0) & ~(byte)iVar23)));
    uStack_2c8 = CONCAT17(auVar21[3] & ~(byte)((uint)iVar24 >> 0x18),
                          CONCAT16(auVar21[2] & ~(byte)((uint)iVar24 >> 0x10),(uint6)(uint)fVar17));
    auVar26._0_4_ = auVar25._0_4_ / fVar15;
    fVar16 = (float)((ulong)local_2d0 >> 0x20);
    auVar26._4_4_ = auVar25._4_4_ / fVar16;
    auVar26._8_4_ = auVar25._8_4_ / fVar17;
    fVar18 = (float)((ulong)uStack_2c8 >> 0x20);
    auVar26._12_4_ = auVar25._12_4_ / fVar18;
    iVar19 = -(uint)(fVar15 == 0.0);
    iVar22 = -(uint)(fVar16 == 0.0);
    iVar23 = -(uint)(fVar17 == 0.0);
    iVar24 = -(uint)(fVar18 == 0.0);
    auVar25[0] = ~(byte)iVar19;
    auVar25[1] = ~(byte)((uint)iVar19 >> 8);
    auVar25[2] = ~(byte)((uint)iVar19 >> 0x10);
    auVar25[3] = ~(byte)((uint)iVar19 >> 0x18);
    auVar25[4] = ~(byte)iVar22;
    auVar25[5] = ~(byte)((uint)iVar22 >> 8);
    auVar25[6] = ~(byte)((uint)iVar22 >> 0x10);
    auVar25[7] = ~(byte)((uint)iVar22 >> 0x18);
    auVar25[8] = ~(byte)iVar23;
    auVar25[9] = ~(byte)((uint)iVar23 >> 8);
    auVar25[10] = ~(byte)((uint)iVar23 >> 0x10);
    auVar25[0xb] = ~(byte)((uint)iVar23 >> 0x18);
    auVar25[0xc] = ~(byte)iVar24;
    auVar25[0xd] = ~(byte)((uint)iVar24 >> 8);
    auVar25[0xe] = ~(byte)((uint)iVar24 >> 0x10);
    auVar25[0xf] = ~(byte)((uint)iVar24 >> 0x18);
    auVar20._8_4_ = 0x7f7fffee;
    auVar20._0_8_ = 0x7f7fffee7f7fffee;
    auVar20._12_4_ = 0x7f7fffee;
    auVar21._8_4_ = 0x7f7fffee;
    auVar21._0_8_ = 0x7f7fffee7f7fffee;
    auVar21._12_4_ = 0x7f7fffee;
    auVar21 = auVar21 ^ (auVar20 ^ auVar26) & auVar25;
    local_288 = 2;
    local_310 = 0xffff;
    local_30c = 0;
    local_308 = 0;
    local_300 = 0xfb0001;
    uStack_2b8 = auVar21._8_8_;
    uStack_2c0 = auVar21._0_8_;
    local_2b0 = (uint)*param_8;
    if (param_8[1] != 0) {
      local_2b0 = local_2b0 | 2;
    }
    if (param_8[2] != 0) {
      local_2b0 = local_2b0 | 4;
    }
    local_2e0 = param_2._0_8_;
    nn::os::LockMutex((MutexType *)(param_4 + 0x120));
    local_320 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
    iVar19 = (int)param_5;
    if (-1 < iVar19) {
      lVar7 = 0;
      do {
        *(ulong *)((long)auStack_278 + lVar7 + 8) = *(ulong *)((long)auStack_278 + lVar7 + 8) & 1;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0x1f8);
      auStack_278[1] = auStack_278[1] | 1L << (param_5 & 0x3f);
      auStack_278[iVar19] = auStack_278[iVar19] | 2;
      local_320 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
      local_30c = 1;
    }
    local_318 = &local_2a0;
    uVar8 = FUN_00c7a2b0(param_4,&local_320,__src,param_7);
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x120));
    if ((uVar8 & 1) == 0) goto LAB_00cee010;
    uVar4 = 1;
  }
  if (uVar4 <= param_6) {
    param_6 = uVar4;
  }
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((int)param_6 < 1) {
    if (param_6 != 0) {
      lVar7 = 0;
      goto LAB_00cedd4c;
    }
  }
  else {
    FUN_00cee078(param_1,param_6);
    lVar7 = (long)(int)param_1[1];
LAB_00cedd4c:
    uVar9 = (ulong)param_6;
    uVar8 = lVar7 + 1;
    iVar19 = (int)lVar7;
    if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= lVar7) {
      FUN_00cee078(param_1,uVar8);
      iVar19 = (int)param_1[1];
    }
    pvVar6 = (void *)(*param_1 + (long)iVar19 * 0x40);
    memcpy(pvVar6,__src,0x34);
    puVar12 = (ulong *)((long)pvVar6 + 0x38);
    *puVar12 = 0;
    pcVar2 = (char *)(*(ulong *)((long)__src + 0x38) & 0xfffffffffffffffe);
    if (pcVar2 != (char *)0x0) {
      sVar5 = strlen(pcVar2);
      sVar5 = (size_t)((int)sVar5 + 1);
      pvVar6 = (void *)(**(code **)(*plVar13 + 0x18))(plVar13,sVar5);
      memcpy(pvVar6,pcVar2,sVar5);
      *puVar12 = (ulong)pvVar6 | 1;
    }
    *(int *)(param_1 + 1) = (int)uVar8;
    if (uVar9 != 1) {
      if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (long)uVar8) {
        FUN_00cee078(param_1,lVar7 + 2);
        uVar8 = (ulong)*(uint *)(param_1 + 1);
      }
      pvVar6 = (void *)(*param_1 + (long)(int)uVar8 * 0x40);
      memcpy(pvVar6,(void *)((long)__src + 0x40),0x34);
      puVar12 = (ulong *)((long)pvVar6 + 0x38);
      *puVar12 = 0;
      pcVar2 = (char *)(*(ulong *)((long)__src + 0x78) & 0xfffffffffffffffe);
      if (pcVar2 != (char *)0x0) {
        sVar5 = strlen(pcVar2);
        sVar5 = (size_t)((int)sVar5 + 1);
        pvVar6 = (void *)(**(code **)(*plVar13 + 0x18))(plVar13,sVar5);
        memcpy(pvVar6,pcVar2,sVar5);
        *puVar12 = (ulong)pvVar6 | 1;
      }
      *(int *)(param_1 + 1) = (int)(lVar7 + 2);
      if (uVar9 != 2) {
        lVar10 = 0;
        puVar12 = (ulong *)((long)__src + 0xb8);
        do {
          uVar8 = lVar7 + lVar10 + 2;
          if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (long)uVar8) {
            FUN_00cee078(param_1,lVar7 + lVar10 + 3);
            uVar8 = (ulong)*(uint *)(param_1 + 1);
          }
          pvVar6 = (void *)(*param_1 + (long)(int)uVar8 * 0x40);
          memcpy(pvVar6,puVar12 + -7,0x34);
          puVar11 = (ulong *)((long)pvVar6 + 0x38);
          *puVar11 = 0;
          pcVar2 = (char *)(*puVar12 & 0xfffffffffffffffe);
          if (pcVar2 != (char *)0x0) {
            sVar5 = strlen(pcVar2);
            sVar5 = (size_t)((int)sVar5 + 1);
            pvVar6 = (void *)(**(code **)(*plVar13 + 0x18))(plVar13,sVar5);
            memcpy(pvVar6,pcVar2,sVar5);
            plVar13 = (long *)PTR_PTR_047d1a50;
            *puVar11 = (ulong)pvVar6 | 1;
          }
          iVar19 = (int)lVar10;
          lVar10 = lVar10 + 1;
          puVar12 = puVar12 + 8;
          *(int *)(param_1 + 1) = (int)lVar7 + iVar19 + 3;
        } while (uVar9 - 2 != lVar10);
      }
    }
  }
  *(uint *)(param_1 + 2) = uVar4;
LAB_00cedc88:
  if (local_328 != 0) {
    lVar7 = (long)(int)local_328;
    uVar8 = *(ulong *)((long)__src + lVar7 * 0x40 + -8);
    if ((uVar8 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
    }
    if ((void *)((long)__src + lVar7 * 0x40 + -0x40) != __src) {
      uVar8 = *(ulong *)((long)__src + lVar7 * 0x40 + -0x48);
      if ((uVar8 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
      }
      if ((void *)((long)__src + lVar7 * 0x40 + -0x80) != __src) {
        uVar8 = *(ulong *)((long)__src + lVar7 * 0x40 + -0x88);
        if ((uVar8 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
        }
        puVar3 = PTR_DAT_047d1a08;
        if ((void *)((long)__src + lVar7 * 0x40 + -0xc0) != __src) {
          lVar7 = lVar7 << 6;
          do {
            uVar8 = *(ulong *)((long)__src + lVar7 + -200);
            if ((uVar8 & 1) != 0) {
              (**(code **)(puVar3 + 8))(0,uVar8 - 1,0);
            }
            lVar7 = lVar7 + -0x40;
          } while (lVar7 != 0xc0);
        }
      }
    }
  }
  if ((-1 < (int)uVar14) && (__src != (void *)0x0)) {
    (**(code **)(*plVar13 + 0x20))(plVar13,__src,(ulong)uVar14 << 6);
  }
  return;
}


