/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011af230; name: FUN_011af230
 */


void FUN_011af230(long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
                 uint param_5,uint param_6,undefined4 param_7,byte *param_8)

{
  void *pvVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  void *__src;
  size_t sVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar23;
  int iVar24;
  undefined1 auVar21 [16];
  int iVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_330;
  float fStack_32c;
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
  undefined *local_2a0 [3];
  undefined1 local_288;
  undefined4 local_280;
  ulong local_278;
  ulong local_270;
  undefined *apuStack_268 [65];
  
  plVar14 = (long *)PTR_PTR_047d1a50;
  uVar9 = (ulong)param_6;
  local_330 = param_2._0_4_;
  fStack_32c = param_2._4_4_;
  if ((int)param_6 < 1) {
    uVar8 = 0;
    __src = (void *)0x0;
    uVar15 = 0x80000000;
    if (param_6 != 0) {
      pvVar6 = (void *)(-(ulong)(param_6 >> 0x1f) & 0xffffffc000000000 | uVar9 << 6);
      uVar15 = 0x80000000;
      uVar8 = 0;
      goto LAB_011af2a4;
    }
LAB_011af568:
    uVar4 = FUN_01091754(param_2._0_8_,param_3,param_4,param_5,__src,uVar9,param_7,param_8);
    if (uVar4 == 0) {
LAB_011af588:
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
      *(undefined4 *)(param_1 + 2) = 0;
      goto LAB_011af4b4;
    }
  }
  else {
    __src = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar9 << 6);
    pvVar6 = (void *)((long)__src + uVar9 * 0x40);
    uVar15 = param_6;
    uVar8 = param_6;
LAB_011af2a4:
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
    if (param_6 != 1) goto LAB_011af568;
    local_280 = 0;
    local_2a0[1] = (undefined *)0xffffffff;
    local_2a0[2] = (undefined *)0x1;
    memset(&local_278,0xff,0x200);
    auVar26 = NEON_fmov(0x3f800000,4);
    auVar21 = NEON_ext(param_2,param_2,8,1);
    auVar22 = ZEXT816(0x3f800000);
    local_330 = param_3._0_4_ - local_330;
    fStack_32c = param_3._4_4_ - fStack_32c;
    fVar17 = param_3._8_4_ - auVar21._0_4_;
    local_2a0[0] = PTR_DAT_047d9310 + 0x10;
    local_320 = 0;
    local_318 = (undefined **)0x0;
    uStack_2d8 = (ulong)(uint)auVar21._0_4_;
    iVar20 = -(uint)(local_330 == 0.0);
    iVar23 = -(uint)(fStack_32c == 0.0);
    iVar24 = -(uint)(fVar17 == 0.0);
    iVar25 = -(uint)(auVar22._0_4_ == 0.0);
    fVar16 = (float)CONCAT13((byte)((uint)local_330 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                             CONCAT12((byte)((uint)local_330 >> 0x10) &
                                      ~(byte)((uint)iVar20 >> 0x10),
                                      CONCAT11((byte)((uint)local_330 >> 8) &
                                               ~(byte)((uint)iVar20 >> 8),
                                               SUB41(local_330,0) & ~(byte)iVar20)));
    local_2d0 = CONCAT17((byte)((uint)fStack_32c >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                         CONCAT16((byte)((uint)fStack_32c >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                  CONCAT15((byte)((uint)fStack_32c >> 8) &
                                           ~(byte)((uint)iVar23 >> 8),
                                           CONCAT14(SUB41(fStack_32c,0) & ~(byte)iVar23,fVar16))));
    fVar18 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                      CONCAT11((byte)((uint)fVar17 >> 8) &
                                               ~(byte)((uint)iVar24 >> 8),
                                               SUB41(fVar17,0) & ~(byte)iVar24)));
    uStack_2c8 = CONCAT17(auVar22[3] & ~(byte)((uint)iVar25 >> 0x18),
                          CONCAT16(auVar22[2] & ~(byte)((uint)iVar25 >> 0x10),(uint6)(uint)fVar18));
    auVar27._0_4_ = auVar26._0_4_ / fVar16;
    fVar17 = (float)((ulong)local_2d0 >> 0x20);
    auVar27._4_4_ = auVar26._4_4_ / fVar17;
    auVar27._8_4_ = auVar26._8_4_ / fVar18;
    fVar19 = (float)((ulong)uStack_2c8 >> 0x20);
    auVar27._12_4_ = auVar26._12_4_ / fVar19;
    iVar20 = -(uint)(fVar16 == 0.0);
    iVar23 = -(uint)(fVar17 == 0.0);
    iVar24 = -(uint)(fVar18 == 0.0);
    iVar25 = -(uint)(fVar19 == 0.0);
    auVar26[0] = ~(byte)iVar20;
    auVar26[1] = ~(byte)((uint)iVar20 >> 8);
    auVar26[2] = ~(byte)((uint)iVar20 >> 0x10);
    auVar26[3] = ~(byte)((uint)iVar20 >> 0x18);
    auVar26[4] = ~(byte)iVar23;
    auVar26[5] = ~(byte)((uint)iVar23 >> 8);
    auVar26[6] = ~(byte)((uint)iVar23 >> 0x10);
    auVar26[7] = ~(byte)((uint)iVar23 >> 0x18);
    auVar26[8] = ~(byte)iVar24;
    auVar26[9] = ~(byte)((uint)iVar24 >> 8);
    auVar26[10] = ~(byte)((uint)iVar24 >> 0x10);
    auVar26[0xb] = ~(byte)((uint)iVar24 >> 0x18);
    auVar26[0xc] = ~(byte)iVar25;
    auVar26[0xd] = ~(byte)((uint)iVar25 >> 8);
    auVar26[0xe] = ~(byte)((uint)iVar25 >> 0x10);
    auVar26[0xf] = ~(byte)((uint)iVar25 >> 0x18);
    auVar21._8_4_ = 0x7f7fffee;
    auVar21._0_8_ = 0x7f7fffee7f7fffee;
    auVar21._12_4_ = 0x7f7fffee;
    auVar22._8_4_ = 0x7f7fffee;
    auVar22._0_8_ = 0x7f7fffee7f7fffee;
    auVar22._12_4_ = 0x7f7fffee;
    auVar22 = auVar22 ^ (auVar21 ^ auVar27) & auVar26;
    local_288 = 2;
    local_310 = 0xffff;
    local_30c = 0;
    local_308 = 0;
    local_300 = 0xfb0001;
    uStack_2b8 = auVar22._8_8_;
    uStack_2c0 = auVar22._0_8_;
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
    lVar7 = 0x30;
    do {
      *(ulong *)((long)local_2a0 + lVar7) = *(ulong *)((long)local_2a0 + lVar7) & 1;
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x228);
    if ((param_5 & 1) != 0) {
      local_278 = local_278 | 2;
    }
    local_270 = local_270 | param_5;
    if ((param_5 >> 1 & 1) != 0) {
      local_270 = local_270 | 2;
    }
    lVar7 = 7;
    do {
      if ((param_5 >> (lVar7 - 5U & 0x3f) & 1) != 0) {
        local_2a0[lVar7] = (undefined *)((ulong)local_2a0[lVar7] | 2);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x45);
    local_318 = local_2a0;
    local_320 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
    uVar4 = 1;
    local_30c = 1;
    uVar9 = FUN_00c7a2b0(param_4,&local_320,__src,param_7);
    nn::os::UnlockMutex((MutexType *)(param_4 + 0x120));
    if ((uVar9 & 1) == 0) goto LAB_011af588;
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
      goto LAB_011af5b0;
    }
  }
  else {
    FUN_00cee078(param_1,param_6);
    lVar7 = (long)(int)param_1[1];
LAB_011af5b0:
    uVar10 = (ulong)param_6;
    uVar9 = lVar7 + 1;
    iVar20 = (int)lVar7;
    if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= lVar7) {
      FUN_00cee078(param_1,uVar9);
      iVar20 = (int)param_1[1];
    }
    pvVar6 = (void *)(*param_1 + (long)iVar20 * 0x40);
    memcpy(pvVar6,__src,0x34);
    puVar13 = (ulong *)((long)pvVar6 + 0x38);
    *puVar13 = 0;
    pcVar2 = (char *)(*(ulong *)((long)__src + 0x38) & 0xfffffffffffffffe);
    if (pcVar2 != (char *)0x0) {
      sVar5 = strlen(pcVar2);
      sVar5 = (size_t)((int)sVar5 + 1);
      pvVar6 = (void *)(**(code **)(*plVar14 + 0x18))(plVar14,sVar5);
      memcpy(pvVar6,pcVar2,sVar5);
      *puVar13 = (ulong)pvVar6 | 1;
    }
    *(int *)(param_1 + 1) = (int)uVar9;
    if (uVar10 != 1) {
      if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (long)uVar9) {
        FUN_00cee078(param_1,lVar7 + 2);
        uVar9 = (ulong)*(uint *)(param_1 + 1);
      }
      pvVar6 = (void *)(*param_1 + (long)(int)uVar9 * 0x40);
      memcpy(pvVar6,(void *)((long)__src + 0x40),0x34);
      puVar13 = (ulong *)((long)pvVar6 + 0x38);
      *puVar13 = 0;
      pcVar2 = (char *)(*(ulong *)((long)__src + 0x78) & 0xfffffffffffffffe);
      if (pcVar2 != (char *)0x0) {
        sVar5 = strlen(pcVar2);
        sVar5 = (size_t)((int)sVar5 + 1);
        pvVar6 = (void *)(**(code **)(*plVar14 + 0x18))(plVar14,sVar5);
        memcpy(pvVar6,pcVar2,sVar5);
        *puVar13 = (ulong)pvVar6 | 1;
      }
      *(int *)(param_1 + 1) = (int)(lVar7 + 2);
      if (uVar10 != 2) {
        lVar11 = 0;
        puVar13 = (ulong *)((long)__src + 0xb8);
        do {
          uVar9 = lVar7 + lVar11 + 2;
          if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (long)uVar9) {
            FUN_00cee078(param_1,lVar7 + lVar11 + 3);
            uVar9 = (ulong)*(uint *)(param_1 + 1);
          }
          pvVar6 = (void *)(*param_1 + (long)(int)uVar9 * 0x40);
          memcpy(pvVar6,puVar13 + -7,0x34);
          puVar12 = (ulong *)((long)pvVar6 + 0x38);
          *puVar12 = 0;
          pcVar2 = (char *)(*puVar13 & 0xfffffffffffffffe);
          if (pcVar2 != (char *)0x0) {
            sVar5 = strlen(pcVar2);
            sVar5 = (size_t)((int)sVar5 + 1);
            pvVar6 = (void *)(**(code **)(*plVar14 + 0x18))(plVar14,sVar5);
            memcpy(pvVar6,pcVar2,sVar5);
            plVar14 = (long *)PTR_PTR_047d1a50;
            *puVar12 = (ulong)pvVar6 | 1;
          }
          iVar20 = (int)lVar11;
          lVar11 = lVar11 + 1;
          puVar13 = puVar13 + 8;
          *(int *)(param_1 + 1) = (int)lVar7 + iVar20 + 3;
        } while (uVar10 - 2 != lVar11);
      }
    }
  }
  *(uint *)(param_1 + 2) = uVar4;
LAB_011af4b4:
  if (uVar8 != 0) {
    lVar7 = (long)(int)uVar8;
    uVar9 = *(ulong *)((long)__src + lVar7 * 0x40 + -8);
    if ((uVar9 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
    }
    if ((void *)((long)__src + lVar7 * 0x40 + -0x40) != __src) {
      uVar9 = *(ulong *)((long)__src + lVar7 * 0x40 + -0x48);
      if ((uVar9 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
      }
      if ((void *)((long)__src + lVar7 * 0x40 + -0x80) != __src) {
        uVar9 = *(ulong *)((long)__src + lVar7 * 0x40 + -0x88);
        if ((uVar9 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
        }
        puVar3 = PTR_DAT_047d1a08;
        if ((void *)((long)__src + lVar7 * 0x40 + -0xc0) != __src) {
          lVar7 = lVar7 << 6;
          do {
            uVar9 = *(ulong *)((long)__src + lVar7 + -200);
            if ((uVar9 & 1) != 0) {
              (**(code **)(puVar3 + 8))(0,uVar9 - 1,0);
            }
            lVar7 = lVar7 + -0x40;
          } while (lVar7 != 0xc0);
        }
      }
    }
  }
  if ((-1 < (int)uVar15) && (__src != (void *)0x0)) {
    (**(code **)(*plVar14 + 0x20))(plVar14,__src,(ulong)uVar15 << 6);
  }
  return;
}


