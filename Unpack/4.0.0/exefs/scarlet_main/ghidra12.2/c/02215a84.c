/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02215a84; name: FUN_02215a84
 */


undefined4
FUN_02215a84(undefined1 param_1 [16],long param_2,ulong param_3,ulong param_4,undefined8 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar11;
  int iVar12;
  undefined1 auVar9 [16];
  int iVar13;
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 local_340;
  undefined **local_338;
  undefined2 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  long local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined4 local_270;
  ulong auStack_268 [65];
  
  local_270 = 0;
  local_288 = 0xffffffff;
  uStack_280 = 1;
  memset(auStack_268,0xff,0x200);
  local_290 = PTR_DAT_047d9310 + 0x10;
  local_278 = 2;
  nn::os::LockMutex((MutexType *)(param_2 + 0x120));
  lVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x118))
                    (*(long **)(param_2 + 8),param_3 & 0xffffffff | 0x8000000000000000);
  local_340 = 0;
  local_338 = (undefined **)0x0;
  auVar9 = ZEXT816(0x3f800000);
  local_320 = 0xfb0001;
  local_330 = *(undefined2 *)(lVar2 + 0x8a);
  auVar14 = NEON_fmov(0x3f800000,4);
  local_32c = *(undefined4 *)(lVar2 + 0x8c);
  local_328 = *(undefined8 *)(lVar2 + 0x98);
  local_308 = *(undefined8 *)(lVar2 + 0x78);
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2d0 = 0x3a83126f;
  local_2c4 = 0x100;
  local_2cc = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_2b8 = 0x7f7fffee;
  uStack_2f8 = *(undefined8 *)(lVar2 + 0x38);
  local_300 = *(undefined8 *)(lVar2 + 0x30);
  fVar4 = param_1._0_4_ - (float)local_300;
  fVar5 = param_1._4_4_ - (float)((ulong)local_300 >> 0x20);
  fVar6 = param_1._8_4_ - (float)uStack_2f8;
  iVar8 = -(uint)(fVar4 == 0.0);
  iVar11 = -(uint)(fVar5 == 0.0);
  iVar12 = -(uint)(fVar6 == 0.0);
  iVar13 = -(uint)(auVar9._0_4_ == 0.0);
  fVar4 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                          CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                   CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                            SUB41(fVar4,0) & ~(byte)iVar8)));
  local_2f0 = CONCAT17((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                       CONCAT16((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                CONCAT15((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                         CONCAT14(SUB41(fVar5,0) & ~(byte)iVar11,fVar4))));
  fVar6 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT11((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                            SUB41(fVar6,0) & ~(byte)iVar12)));
  uStack_2e8 = CONCAT17(auVar9[3] & ~(byte)((uint)iVar13 >> 0x18),
                        CONCAT16(auVar9[2] & ~(byte)((uint)iVar13 >> 0x10),(uint6)(uint)fVar6));
  auVar15._0_4_ = auVar14._0_4_ / fVar4;
  fVar5 = (float)((ulong)local_2f0 >> 0x20);
  auVar15._4_4_ = auVar14._4_4_ / fVar5;
  auVar15._8_4_ = auVar14._8_4_ / fVar6;
  fVar7 = (float)((ulong)uStack_2e8 >> 0x20);
  auVar15._12_4_ = auVar14._12_4_ / fVar7;
  iVar8 = -(uint)(fVar4 == 0.0);
  iVar11 = -(uint)(fVar5 == 0.0);
  iVar12 = -(uint)(fVar6 == 0.0);
  iVar13 = -(uint)(fVar7 == 0.0);
  auVar10[0] = ~(byte)iVar8;
  auVar10[1] = ~(byte)((uint)iVar8 >> 8);
  auVar10[2] = ~(byte)((uint)iVar8 >> 0x10);
  auVar10[3] = ~(byte)((uint)iVar8 >> 0x18);
  auVar10[4] = ~(byte)iVar11;
  auVar10[5] = ~(byte)((uint)iVar11 >> 8);
  auVar10[6] = ~(byte)((uint)iVar11 >> 0x10);
  auVar10[7] = ~(byte)((uint)iVar11 >> 0x18);
  auVar10[8] = ~(byte)iVar12;
  auVar10[9] = ~(byte)((uint)iVar12 >> 8);
  auVar10[10] = ~(byte)((uint)iVar12 >> 0x10);
  auVar10[0xb] = ~(byte)((uint)iVar12 >> 0x18);
  auVar10[0xc] = ~(byte)iVar13;
  auVar10[0xd] = ~(byte)((uint)iVar13 >> 8);
  auVar10[0xe] = ~(byte)((uint)iVar13 >> 0x10);
  auVar10[0xf] = ~(byte)((uint)iVar13 >> 0x18);
  auVar9._8_4_ = 0x7f7fffee;
  auVar9._0_8_ = 0x7f7fffee7f7fffee;
  auVar9._12_4_ = 0x7f7fffee;
  auVar14._8_4_ = 0x7f7fffee;
  auVar14._0_8_ = 0x7f7fffee7f7fffee;
  auVar14._12_4_ = 0x7f7fffee;
  auVar14 = auVar14 ^ (auVar9 ^ auVar15) & auVar10;
  uStack_2d8 = auVar14._8_8_;
  uStack_2e0 = auVar14._0_8_;
  local_2c0 = lVar2;
  local_340 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  iVar8 = (int)param_4;
  if (-1 < iVar8) {
    lVar3 = 0;
    do {
      *(ulong *)((long)auStack_268 + lVar3 + 8) = *(ulong *)((long)auStack_268 + lVar3 + 8) & 1;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x1f8);
    auStack_268[1] = auStack_268[1] | 1L << (param_4 & 0x3f);
    auStack_268[iVar8] = auStack_268[iVar8] | 2;
    local_340 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
    local_32c = 1;
  }
  local_338 = &local_290;
  uVar1 = FUN_00da9c58(param_2,&local_340,lVar2,param_5,param_6,param_7);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x120));
  return uVar1;
}


