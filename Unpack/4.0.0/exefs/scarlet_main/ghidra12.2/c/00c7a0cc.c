/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c7a0cc; name: FUN_00c7a0cc
 */


uint FUN_00c7a0cc(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,ulong param_4,
                 undefined8 param_5,undefined4 param_6,byte *param_7)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar11;
  int iVar12;
  undefined1 auVar8 [16];
  int iVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined8 local_300;
  undefined **local_2f8;
  undefined2 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2c0;
  ulong uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  uint local_290;
  undefined *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined4 local_260;
  ulong auStack_258 [65];
  
  local_260 = 0;
  local_278 = 0xffffffff;
  uStack_270 = 1;
  memset(auStack_258,0xff,0x200);
  auVar8 = NEON_ext(param_1,param_1,8,1);
  auVar10 = ZEXT816(0x3f800000);
  fVar3 = param_2._0_4_ - param_1._0_4_;
  fVar4 = param_2._4_4_ - param_1._4_4_;
  fVar5 = param_2._8_4_ - auVar8._0_4_;
  uStack_2b8 = (ulong)(uint)auVar8._0_4_;
  auVar8 = NEON_fmov(0x3f800000,4);
  iVar7 = -(uint)(fVar3 == 0.0);
  iVar11 = -(uint)(fVar4 == 0.0);
  iVar12 = -(uint)(fVar5 == 0.0);
  iVar13 = -(uint)(auVar10._0_4_ == 0.0);
  fVar3 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                          CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                   CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                            SUB41(fVar3,0) & ~(byte)iVar7)));
  local_2b0 = CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                       CONCAT16((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                CONCAT15((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                         CONCAT14(SUB41(fVar4,0) & ~(byte)iVar11,fVar3))));
  fVar5 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                            SUB41(fVar5,0) & ~(byte)iVar12)));
  uStack_2a8 = CONCAT17(auVar10[3] & ~(byte)((uint)iVar13 >> 0x18),
                        CONCAT16(auVar10[2] & ~(byte)((uint)iVar13 >> 0x10),(uint6)(uint)fVar5));
  auVar14._0_4_ = auVar8._0_4_ / fVar3;
  fVar4 = (float)((ulong)local_2b0 >> 0x20);
  auVar14._4_4_ = auVar8._4_4_ / fVar4;
  auVar14._8_4_ = auVar8._8_4_ / fVar5;
  fVar6 = (float)((ulong)uStack_2a8 >> 0x20);
  auVar14._12_4_ = auVar8._12_4_ / fVar6;
  iVar7 = -(uint)(fVar3 == 0.0);
  iVar11 = -(uint)(fVar4 == 0.0);
  iVar12 = -(uint)(fVar5 == 0.0);
  iVar13 = -(uint)(fVar6 == 0.0);
  local_2ec = 0;
  local_2e8 = 0;
  local_300 = 0;
  local_2f8 = (undefined **)0x0;
  auVar9[0] = ~(byte)iVar7;
  auVar9[1] = ~(byte)((uint)iVar7 >> 8);
  auVar9[2] = ~(byte)((uint)iVar7 >> 0x10);
  auVar9[3] = ~(byte)((uint)iVar7 >> 0x18);
  auVar9[4] = ~(byte)iVar11;
  auVar9[5] = ~(byte)((uint)iVar11 >> 8);
  auVar9[6] = ~(byte)((uint)iVar11 >> 0x10);
  auVar9[7] = ~(byte)((uint)iVar11 >> 0x18);
  auVar9[8] = ~(byte)iVar12;
  auVar9[9] = ~(byte)((uint)iVar12 >> 8);
  auVar9[10] = ~(byte)((uint)iVar12 >> 0x10);
  auVar9[0xb] = ~(byte)((uint)iVar12 >> 0x18);
  auVar9[0xc] = ~(byte)iVar13;
  auVar9[0xd] = ~(byte)((uint)iVar13 >> 8);
  auVar9[0xe] = ~(byte)((uint)iVar13 >> 0x10);
  auVar9[0xf] = ~(byte)((uint)iVar13 >> 0x18);
  local_280 = PTR_DAT_047d9310 + 0x10;
  auVar8._8_4_ = 0x7f7fffee;
  auVar8._0_8_ = 0x7f7fffee7f7fffee;
  auVar8._12_4_ = 0x7f7fffee;
  auVar10._8_4_ = 0x7f7fffee;
  auVar10._0_8_ = 0x7f7fffee7f7fffee;
  auVar10._12_4_ = 0x7f7fffee;
  auVar10 = auVar10 ^ (auVar8 ^ auVar14) & auVar9;
  local_268 = 2;
  local_2f0 = 0xffff;
  local_2e0 = 0xfb0001;
  uStack_298 = auVar10._8_8_;
  uStack_2a0 = auVar10._0_8_;
  local_290 = (uint)*param_7;
  if (param_7[1] != 0) {
    local_290 = local_290 | 2;
  }
  if (param_7[2] != 0) {
    local_290 = local_290 | 4;
  }
  local_2c0 = param_1._0_8_;
  nn::os::LockMutex((MutexType *)(param_3 + 0x120));
  local_300 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  iVar7 = (int)param_4;
  if (-1 < iVar7) {
    lVar2 = 0;
    do {
      *(ulong *)((long)auStack_258 + lVar2 + 8) = *(ulong *)((long)auStack_258 + lVar2 + 8) & 1;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x1f8);
    auStack_258[1] = auStack_258[1] | 1L << (param_4 & 0x3f);
    auStack_258[iVar7] = auStack_258[iVar7] | 2;
    local_300 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
    local_2ec = 1;
  }
  local_2f8 = &local_280;
  uVar1 = FUN_00c7a2b0(param_3,&local_300,param_5,param_6);
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x120));
  return uVar1 & 1;
}


