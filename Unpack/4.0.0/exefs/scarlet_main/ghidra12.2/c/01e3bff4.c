/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3bff4; name: FUN_01e3bff4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3bff4(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar7 [12];
  int iVar11;
  undefined1 auVar8 [16];
  int iVar6;
  int iVar12;
  int iVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float local_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 local_320 [56];
  ulong local_2e8;
  undefined8 local_2e0;
  undefined **ppuStack_2d8;
  undefined2 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined4 local_240;
  undefined1 auStack_238 [520];
  
  auVar8 = *param_2;
  local_330 = auVar8._0_4_;
  fStack_32c = auVar8._4_4_;
  fStack_328 = auVar8._8_4_;
  fStack_324 = auVar8._12_4_;
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar4 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar4;
  lVar4 = *(long *)(lVar4 + 0x70);
  local_330 = local_330 + (float)_DAT_03caba00;
  fStack_32c = fStack_32c + (float)((ulong)_DAT_03caba00 >> 0x20);
  fStack_328 = fStack_328 + (float)_UNK_03caba08;
  uVar2 = (ulong)_UNK_03caba08 >> 0x20;
  fVar5 = (float)_DAT_03cab8e0;
  uVar3 = (ulong)_DAT_03cab8e0 >> 0x20;
  fVar16 = (float)_UNK_03cab8e8;
  local_2e8 = 0;
  local_258 = 0xffffffff;
  uStack_250 = 1;
  local_240 = 0;
  memset(auStack_238,0xff,0x200);
  local_2a0 = CONCAT44(fStack_32c,local_330);
  auVar1._8_4_ = fStack_328;
  auVar1._0_8_ = local_2a0;
  auVar1._12_4_ = fStack_324 + (float)uVar2;
  local_248 = 2;
  local_2cc = 0;
  local_2c8 = 0;
  local_2d0 = 0xffff;
  local_2e0 = 0;
  ppuStack_2d8 = (undefined **)0x0;
  auVar14 = NEON_ext(auVar1,auVar1,8,1);
  uStack_298 = (ulong)(uint)auVar14._0_4_;
  auVar8 = ZEXT816(0x3f800000);
  local_330 = (local_330 + fVar5) - local_330;
  fStack_32c = (fStack_32c + (float)uVar3) - fStack_32c;
  fVar16 = (fStack_328 + fVar16) - auVar14._0_4_;
  iVar6 = -(uint)(local_330 == 0.0);
  iVar11 = -(uint)(fStack_32c == 0.0);
  iVar12 = -(uint)(fVar16 == 0.0);
  iVar13 = -(uint)(auVar8._0_4_ == 0.0);
  auVar14 = NEON_fmov(0x3f800000,4);
  fVar5 = (float)CONCAT13((byte)((uint)local_330 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                          CONCAT12((byte)((uint)local_330 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                   CONCAT11((byte)((uint)local_330 >> 8) & ~(byte)((uint)iVar6 >> 8)
                                            ,SUB41(local_330,0) & ~(byte)iVar6)));
  auVar7._0_8_ = CONCAT17((byte)((uint)fStack_32c >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                          CONCAT16((byte)((uint)fStack_32c >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT15((byte)((uint)fStack_32c >> 8) &
                                            ~(byte)((uint)iVar11 >> 8),
                                            CONCAT14(SUB41(fStack_32c,0) & ~(byte)iVar11,fVar5))));
  auVar7[8] = SUB41(fVar16,0) & ~(byte)iVar12;
  auVar7[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar12 >> 8);
  auVar7[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
  auVar7[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
  auVar9._12_2_ = 0;
  auVar9._0_12_ = auVar7;
  auVar9[0xe] = auVar8[2] & ~(byte)((uint)iVar13 >> 0x10);
  auVar9[0xf] = auVar8[3] & ~(byte)((uint)iVar13 >> 0x18);
  auVar15._0_4_ = auVar14._0_4_ / fVar5;
  fVar16 = (float)((ulong)auVar7._0_8_ >> 0x20);
  auVar15._4_4_ = auVar14._4_4_ / fVar16;
  auVar15._8_4_ = auVar14._8_4_ / auVar7._8_4_;
  auVar15._12_4_ = auVar14._12_4_ / auVar9._12_4_;
  iVar6 = -(uint)(fVar5 == 0.0);
  iVar11 = -(uint)(fVar16 == 0.0);
  iVar12 = -(uint)(auVar7._8_4_ == 0.0);
  iVar13 = -(uint)(auVar9._12_4_ == 0.0);
  uStack_288 = auVar9._8_8_;
  auVar10[0] = ~(byte)iVar6;
  auVar10[1] = ~(byte)((uint)iVar6 >> 8);
  auVar10[2] = ~(byte)((uint)iVar6 >> 0x10);
  auVar10[3] = ~(byte)((uint)iVar6 >> 0x18);
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
  auVar8._8_4_ = 0x7f7fffee;
  auVar8._0_8_ = 0x7f7fffee7f7fffee;
  auVar8._12_4_ = 0x7f7fffee;
  auVar14._8_4_ = 0x7f7fffee;
  auVar14._0_8_ = 0x7f7fffee7f7fffee;
  auVar14._12_4_ = 0x7f7fffee;
  auVar14 = auVar14 ^ (auVar8 ^ auVar15) & auVar10;
  uStack_278 = auVar14._8_8_;
  local_280 = auVar14._0_8_;
  local_270 = 0;
  local_260 = PTR_DAT_047d9310 + 0x10;
  local_2c0 = 0xfb0001;
  uStack_290 = auVar7._0_8_;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x120));
  local_2e0 = (**(code **)(**(long **)(lVar4 + 8) + 0x68))();
  ppuStack_2d8 = &local_260;
  FUN_00c7a2b0(lVar4,&local_2e0,local_320,0);
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x120));
  if ((local_2e8 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2e8 - 1,0);
  }
  return;
}


