/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01970914; name: FUN_01970914
 */


void FUN_01970914(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,uint param_4,
                 uint param_5,undefined4 param_6,byte *param_7,long *param_8)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar16;
  int iVar17;
  undefined1 auVar14 [16];
  int iVar18;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  
  if ((int)(*(uint *)((long)param_8 + 0xc) & 0x7fffffff) < (int)param_5) {
    FUN_01970eb4(param_8,(long)(int)param_5);
  }
  iVar13 = (int)param_8[1];
  lVar8 = (long)iVar13;
  if (iVar13 < (int)param_5) {
    lVar4 = *param_8 + lVar8 * 0x40;
    lVar1 = *param_8 + (long)(int)param_5 * 0x40;
    *(uint *)(param_8 + 1) = param_5;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    if ((((lVar4 + 0x40 != lVar1) && (*(undefined8 *)(lVar4 + 0x78) = 0, lVar4 + 0x80 != lVar1)) &&
        (*(undefined8 *)(lVar4 + 0xb8) = 0, lVar4 + 0xc0 != lVar1)) &&
       (*(undefined8 *)(lVar4 + 0xf8) = 0, lVar4 + 0x100 != lVar1)) {
      lVar8 = (long)(int)param_5 * 0x40 + lVar8 * -0x40 + -0x100;
      puVar5 = (undefined8 *)(lVar4 + 0x138);
      do {
        lVar8 = lVar8 + -0x40;
        *puVar5 = 0;
        puVar5 = puVar5 + 8;
      } while (lVar8 != 0);
    }
  }
  else if ((int)param_5 < iVar13) {
    lVar7 = *param_8;
    lVar4 = lVar7 + (long)(int)param_5 * 0x40;
    lVar1 = lVar7 + lVar8 * 0x40;
    *(uint *)(param_8 + 1) = param_5;
    if ((*(ulong *)(lVar1 + -8) & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar1 + -8) - 1,0);
    }
    if (lVar1 + -0x40 != lVar4) {
      if ((*(ulong *)(lVar1 + -0x48) & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar1 + -0x48) - 1,0);
      }
      if (lVar1 + -0x80 != lVar4) {
        if ((*(ulong *)(lVar1 + -0x88) & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar1 + -0x88) - 1,0);
        }
        puVar2 = PTR_DAT_047d1a08;
        if (lVar1 + -0xc0 != lVar4) {
          puVar6 = (ulong *)(lVar7 + lVar8 * 0x40 + -200);
          lVar8 = (long)(int)param_5 * 0x40 + lVar8 * -0x40 + 0xc0;
          do {
            if ((*puVar6 & 1) != 0) {
              (**(code **)(puVar2 + 8))(0,*puVar6 - 1,0);
            }
            puVar6 = puVar6 + -8;
            lVar8 = lVar8 + 0x40;
          } while (lVar8 != 0);
        }
      }
    }
  }
  lVar8 = *param_8;
  if (param_5 == 1) {
    local_280 = 0;
    local_2a0[1] = (undefined *)0xffffffff;
    local_2a0[2] = (undefined *)0x1;
    memset(&local_278,0xff,0x200);
    auVar19 = NEON_fmov(0x3f800000,4);
    auVar14 = NEON_ext(param_1,param_1,8,1);
    auVar15 = ZEXT816(0x3f800000);
    fVar9 = param_2._0_4_ - param_1._0_4_;
    fVar10 = param_2._4_4_ - param_1._4_4_;
    fVar11 = param_2._8_4_ - auVar14._0_4_;
    local_2a0[0] = PTR_DAT_047d9310 + 0x10;
    local_320 = 0;
    local_318 = (undefined **)0x0;
    uStack_2d8 = (ulong)(uint)auVar14._0_4_;
    iVar13 = -(uint)(fVar9 == 0.0);
    iVar16 = -(uint)(fVar10 == 0.0);
    iVar17 = -(uint)(fVar11 == 0.0);
    iVar18 = -(uint)(auVar15._0_4_ == 0.0);
    fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                            CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                     CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                              SUB41(fVar9,0) & ~(byte)iVar13)));
    local_2d0 = CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                         CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                  CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                           CONCAT14(SUB41(fVar10,0) & ~(byte)iVar16,fVar9))));
    fVar11 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                             CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                      CONCAT11((byte)((uint)fVar11 >> 8) &
                                               ~(byte)((uint)iVar17 >> 8),
                                               SUB41(fVar11,0) & ~(byte)iVar17)));
    uStack_2c8 = CONCAT17(auVar15[3] & ~(byte)((uint)iVar18 >> 0x18),
                          CONCAT16(auVar15[2] & ~(byte)((uint)iVar18 >> 0x10),(uint6)(uint)fVar11));
    auVar20._0_4_ = auVar19._0_4_ / fVar9;
    fVar10 = (float)((ulong)local_2d0 >> 0x20);
    auVar20._4_4_ = auVar19._4_4_ / fVar10;
    auVar20._8_4_ = auVar19._8_4_ / fVar11;
    fVar12 = (float)((ulong)uStack_2c8 >> 0x20);
    auVar20._12_4_ = auVar19._12_4_ / fVar12;
    iVar13 = -(uint)(fVar9 == 0.0);
    iVar16 = -(uint)(fVar10 == 0.0);
    iVar17 = -(uint)(fVar11 == 0.0);
    iVar18 = -(uint)(fVar12 == 0.0);
    auVar19[0] = ~(byte)iVar13;
    auVar19[1] = ~(byte)((uint)iVar13 >> 8);
    auVar19[2] = ~(byte)((uint)iVar13 >> 0x10);
    auVar19[3] = ~(byte)((uint)iVar13 >> 0x18);
    auVar19[4] = ~(byte)iVar16;
    auVar19[5] = ~(byte)((uint)iVar16 >> 8);
    auVar19[6] = ~(byte)((uint)iVar16 >> 0x10);
    auVar19[7] = ~(byte)((uint)iVar16 >> 0x18);
    auVar19[8] = ~(byte)iVar17;
    auVar19[9] = ~(byte)((uint)iVar17 >> 8);
    auVar19[10] = ~(byte)((uint)iVar17 >> 0x10);
    auVar19[0xb] = ~(byte)((uint)iVar17 >> 0x18);
    auVar19[0xc] = ~(byte)iVar18;
    auVar19[0xd] = ~(byte)((uint)iVar18 >> 8);
    auVar19[0xe] = ~(byte)((uint)iVar18 >> 0x10);
    auVar19[0xf] = ~(byte)((uint)iVar18 >> 0x18);
    auVar14._8_4_ = 0x7f7fffee;
    auVar14._0_8_ = 0x7f7fffee7f7fffee;
    auVar14._12_4_ = 0x7f7fffee;
    auVar15._8_4_ = 0x7f7fffee;
    auVar15._0_8_ = 0x7f7fffee7f7fffee;
    auVar15._12_4_ = 0x7f7fffee;
    auVar15 = auVar15 ^ (auVar14 ^ auVar20) & auVar19;
    local_288 = 2;
    local_310 = 0xffff;
    local_30c = 0;
    local_308 = 0;
    local_300 = 0xfb0001;
    uStack_2b8 = auVar15._8_8_;
    uStack_2c0 = auVar15._0_8_;
    local_2b0 = (uint)*param_7;
    if (param_7[1] != 0) {
      local_2b0 = local_2b0 | 2;
    }
    if (param_7[2] != 0) {
      local_2b0 = local_2b0 | 4;
    }
    local_2e0 = param_1._0_8_;
    nn::os::LockMutex((MutexType *)(param_3 + 0x120));
    local_320 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
    lVar4 = 0x30;
    do {
      *(ulong *)((long)local_2a0 + lVar4) = *(ulong *)((long)local_2a0 + lVar4) & 1;
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x228);
    if ((param_4 & 1) != 0) {
      local_278 = local_278 | 2;
    }
    local_270 = local_270 | param_4;
    if ((param_4 >> 1 & 1) != 0) {
      local_270 = local_270 | 2;
    }
    lVar4 = 7;
    do {
      if ((param_4 >> (lVar4 - 5U & 0x3f) & 1) != 0) {
        local_2a0[lVar4] = (undefined *)((ulong)local_2a0[lVar4] | 2);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x45);
    local_318 = local_2a0;
    local_320 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
    local_30c = 1;
    uVar3 = FUN_00c7a2b0(param_3,&local_320,lVar8,param_6);
    nn::os::UnlockMutex((MutexType *)(param_3 + 0x120));
    uVar3 = uVar3 & 1;
  }
  else {
    uVar3 = FUN_01091754(param_1._0_8_,param_2,param_3,param_4,lVar8,param_5,param_6,param_7);
  }
  if (uVar3 <= param_5) {
    param_5 = uVar3;
  }
  *(uint *)(param_8 + 2) = uVar3;
  if ((int)(*(uint *)((long)param_8 + 0xc) & 0x7fffffff) < (int)param_5) {
    FUN_01970eb4(param_8,(long)(int)param_5);
  }
  iVar13 = (int)param_8[1];
  lVar8 = (long)iVar13;
  if (iVar13 < (int)param_5) {
    lVar4 = *param_8 + lVar8 * 0x40;
    lVar1 = *param_8 + (long)(int)param_5 * 0x40;
    *(uint *)(param_8 + 1) = param_5;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    if (((lVar4 + 0x40 != lVar1) && (*(undefined8 *)(lVar4 + 0x78) = 0, lVar4 + 0x80 != lVar1)) &&
       ((*(undefined8 *)(lVar4 + 0xb8) = 0, lVar4 + 0xc0 != lVar1 &&
        (*(undefined8 *)(lVar4 + 0xf8) = 0, lVar4 + 0x100 != lVar1)))) {
      lVar8 = (long)(int)param_5 * 0x40 + lVar8 * -0x40 + -0x100;
      puVar5 = (undefined8 *)(lVar4 + 0x138);
      do {
        lVar8 = lVar8 + -0x40;
        *puVar5 = 0;
        puVar5 = puVar5 + 8;
      } while (lVar8 != 0);
    }
  }
  else if ((int)param_5 < iVar13) {
    lVar7 = *param_8;
    lVar4 = lVar7 + lVar8 * 0x40;
    *(uint *)(param_8 + 1) = param_5;
    lVar1 = lVar7 + (long)(int)param_5 * 0x40;
    if ((*(ulong *)(lVar4 + -8) & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar4 + -8) - 1,0);
    }
    if (lVar4 + -0x40 != lVar1) {
      if ((*(ulong *)(lVar4 + -0x48) & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar4 + -0x48) - 1,0);
      }
      if (lVar4 + -0x80 != lVar1) {
        if ((*(ulong *)(lVar4 + -0x88) & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar4 + -0x88) - 1,0);
        }
        puVar2 = PTR_DAT_047d1a08;
        if (lVar4 + -0xc0 != lVar1) {
          puVar6 = (ulong *)(lVar7 + lVar8 * 0x40 + -200);
          lVar8 = (long)(int)param_5 * 0x40 + lVar8 * -0x40 + 0xc0;
          do {
            if ((*puVar6 & 1) != 0) {
              (**(code **)(puVar2 + 8))(0,*puVar6 - 1,0);
            }
            puVar6 = puVar6 + -8;
            lVar8 = lVar8 + 0x40;
          } while (lVar8 != 0);
        }
      }
    }
  }
  return;
}


