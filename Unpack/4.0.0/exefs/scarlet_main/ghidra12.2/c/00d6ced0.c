/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6ced0; name: FUN_00d6ced0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6ced0(undefined1 param_1 [16],long param_2,float *param_3,float *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 extraout_q0 [16];
  float fVar20;
  undefined1 auVar21 [12];
  float fVar28;
  undefined1 auVar22 [16];
  undefined8 uVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  float local_410;
  float fStack_40c;
  float fStack_408;
  undefined1 auStack_3e0 [4];
  float local_3dc;
  ulong local_3a8;
  uint local_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  ulong local_368;
  undefined4 local_360;
  uint uStack_35c;
  undefined8 uStack_358;
  undefined1 local_350 [16];
  ulong local_328;
  undefined8 local_320;
  undefined **ppuStack_318;
  undefined2 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined *local_2a0 [3];
  undefined1 local_288;
  undefined4 local_280;
  undefined1 auStack_278 [8];
  ulong local_270 [66];
  
  puVar6 = PTR_DAT_047d8c00;
  fVar20 = *(float *)(param_2 + 0xe4);
  if (fVar20 <= 1.0) {
    fVar20 = 1.0;
  }
  local_3a8 = 0;
  local_328 = 0;
  auVar30._0_4_ = param_1._0_4_ + 0.0;
  auVar30._4_4_ = param_1._4_4_ + fVar20 * 0.5 + 1.0;
  auVar30._8_4_ = param_1._8_4_ + 0.0;
  auVar30._12_4_ = param_1._12_4_ + 0.0;
  fVar15 = (float)((ulong)_DAT_04837ba0 >> 0x20);
  fVar28 = auVar30._4_4_ - fVar15;
  auVar22._0_8_ = CONCAT44(fVar28,auVar30._0_4_ - (float)_DAT_04837ba0);
  auVar22._8_4_ = auVar30._8_4_ - (float)uRam0000000004837ba8;
  fVar18 = (float)((ulong)uRam0000000004837ba8 >> 0x20);
  auVar22._12_4_ = auVar30._12_4_ - fVar18;
  local_368 = 0;
  fVar20 = (float)_DAT_04837ba0 + auVar30._0_4_;
  fVar15 = fVar15 + auVar30._4_4_;
  fVar16 = (float)uRam0000000004837ba8 + auVar30._8_4_;
  fVar18 = fVar18 + auVar30._12_4_;
  uVar29 = auVar22._8_8_;
  auVar31 = auVar22;
  auVar24 = auVar30;
  if ((*PTR_DAT_047d8c00 & 1) == 0) {
    iVar34 = __cxa_guard_acquire(PTR_DAT_047d8c00);
    auVar24._4_4_ = auVar30._4_4_;
    auVar24._0_4_ = auVar30._0_4_;
    auVar24._8_4_ = auVar30._8_4_;
    auVar24._12_4_ = auVar30._12_4_;
    auVar31._8_8_ = uVar29;
    auVar31._0_8_ = auVar22._0_8_;
    if (iVar34 != 0) {
      FUN_00100190(extraout_q0,auVar31,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
  }
  puVar8 = PTR_DAT_047d8c10;
  puVar7 = PTR_DAT_047d8c08;
  lVar11 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar11;
  local_2a0[0] = (undefined *)((ulong)local_2a0[0] & 0xffffffffff000000);
  uVar9 = FUN_00d6fedc(auVar24,auVar31,*(undefined8 *)(lVar11 + 0x70),0x60042,&local_360,1,local_2a0
                      );
  if (((*puVar6 & 1) == 0) && (iVar34 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar34 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar11 = *(long *)puVar7;
  *(long *)puVar8 = lVar11;
  auVar3._4_4_ = auVar30._4_4_;
  auVar3._0_4_ = auVar30._0_4_;
  auVar3._8_4_ = auVar30._8_4_;
  auVar3._12_4_ = auVar30._12_4_;
  auVar4._4_4_ = fVar15;
  auVar4._0_4_ = fVar20;
  auVar4._8_4_ = fVar16;
  auVar4._12_4_ = fVar18;
  local_2a0[0] = (undefined *)((ulong)local_2a0[0] & 0xffffffffff000000);
  uVar10 = FUN_00d6fedc(auVar3,auVar4,*(undefined8 *)(lVar11 + 0x70),0x60042,&local_3a0,1,local_2a0)
  ;
  uVar19 = -(uint)((uVar10 & 1) != 0);
  iVar34 = -(uint)((uVar9 & 1) != 0);
  fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ local_3a0) & uVar19);
  fVar15 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ uStack_39c) & uVar19);
  uVar17 = (uint)fVar16 ^ ((uint)fVar16 ^ uStack_398) & uVar19;
  uVar19 = (uint)fVar18 ^ ((uint)fVar18 ^ uStack_394) & uVar19;
  auVar5._8_8_ = uVar29;
  auVar5._0_8_ = auVar22._0_8_;
  auVar23._4_4_ = iVar34;
  auVar23._0_4_ = iVar34;
  auVar23._8_4_ = iVar34;
  auVar23._12_4_ = iVar34;
  auVar13._4_4_ = uStack_35c;
  auVar13._0_4_ = local_360;
  auVar13._8_8_ = uStack_358;
  auVar13 = auVar13 ^ (auVar13 ^ auVar5) & ~auVar23;
  fStack_408 = auVar13._8_4_;
  local_410 = auVar13._0_4_;
  fStack_40c = auVar13._4_4_;
  if (((*puVar6 & 1) == 0) && (iVar34 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar34 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar11 = *(long *)puVar7;
  *(long *)puVar8 = lVar11;
  lVar12 = *(long *)(lVar11 + 0x70);
  local_280 = 0;
  local_2a0[1] = (undefined *)0xffffffff;
  local_2a0[2] = (undefined *)0x1;
  memset(auStack_278,0xff,0x200);
  local_2e0 = CONCAT44(fVar15,fVar20);
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar20;
  auVar2._8_4_ = uVar17;
  auVar1._4_4_ = fVar15;
  auVar1._0_4_ = fVar20;
  auVar1._8_4_ = uVar17;
  auVar31 = NEON_fmov(0x3f800000,4);
  local_288 = 2;
  local_30c = 0;
  local_308 = 0;
  local_320 = 0;
  ppuStack_318 = (undefined **)0x0;
  auVar1._12_4_ = uVar19;
  auVar2._12_4_ = uVar19;
  auVar24 = NEON_ext(auVar1,auVar2,8,1);
  auVar14._8_4_ = 0x7f7fffee;
  auVar14._0_8_ = 0x7f7fffee7f7fffee;
  auVar14._12_4_ = 0x7f7fffee;
  local_310 = 0xffff;
  local_410 = local_410 - fVar20;
  fStack_40c = fStack_40c - fVar15;
  fStack_408 = fStack_408 - auVar24._0_4_;
  iVar34 = -(uint)(local_410 == 0.0);
  iVar35 = -(uint)(fStack_40c == 0.0);
  iVar36 = -(uint)(fStack_408 == 0.0);
  fVar20 = (float)CONCAT13((byte)((uint)local_410 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                           CONCAT12((byte)((uint)local_410 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                    CONCAT11((byte)((uint)local_410 >> 8) &
                                             ~(byte)((uint)iVar34 >> 8),
                                             SUB41(local_410,0) & ~(byte)iVar34)));
  auVar21._0_8_ =
       CONCAT17((byte)((uint)fStack_40c >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                CONCAT16((byte)((uint)fStack_40c >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                         CONCAT15((byte)((uint)fStack_40c >> 8) & ~(byte)((uint)iVar35 >> 8),
                                  CONCAT14(SUB41(fStack_40c,0) & ~(byte)iVar35,fVar20))));
  auVar21[8] = SUB41(fStack_408,0) & ~(byte)iVar36;
  auVar21[9] = (byte)((uint)fStack_408 >> 8) & ~(byte)((uint)iVar36 >> 8);
  auVar21[10] = (byte)((uint)fStack_408 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
  auVar21[0xb] = (byte)((uint)fStack_408 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
  auVar25._12_2_ = 0;
  auVar25._0_12_ = auVar21;
  auVar25[0xe] = 0x80;
  auVar25[0xf] = 0x3f;
  auVar32._0_4_ = auVar31._0_4_ / fVar20;
  fVar15 = (float)((ulong)auVar21._0_8_ >> 0x20);
  auVar32._4_4_ = auVar31._4_4_ / fVar15;
  auVar32._8_4_ = auVar31._8_4_ / auVar21._8_4_;
  auVar32._12_4_ = auVar31._12_4_ / auVar25._12_4_;
  iVar34 = -(uint)(fVar20 == 0.0);
  iVar35 = -(uint)(fVar15 == 0.0);
  iVar36 = -(uint)(auVar21._8_4_ == 0.0);
  iVar37 = -(uint)(auVar25._12_4_ == 0.0);
  uStack_2d8 = (ulong)(uint)auVar24._0_4_;
  uStack_2c8 = auVar25._8_8_;
  auVar26[0] = ~(byte)iVar34;
  auVar26[1] = ~(byte)((uint)iVar34 >> 8);
  auVar26[2] = ~(byte)((uint)iVar34 >> 0x10);
  auVar26[3] = ~(byte)((uint)iVar34 >> 0x18);
  auVar26[4] = ~(byte)iVar35;
  auVar26[5] = ~(byte)((uint)iVar35 >> 8);
  auVar26[6] = ~(byte)((uint)iVar35 >> 0x10);
  auVar26[7] = ~(byte)((uint)iVar35 >> 0x18);
  auVar26[8] = ~(byte)iVar36;
  auVar26[9] = ~(byte)((uint)iVar36 >> 8);
  auVar26[10] = ~(byte)((uint)iVar36 >> 0x10);
  auVar26[0xb] = ~(byte)((uint)iVar36 >> 0x18);
  auVar26[0xc] = ~(byte)iVar37;
  auVar26[0xd] = ~(byte)((uint)iVar37 >> 8);
  auVar26[0xe] = ~(byte)((uint)iVar37 >> 0x10);
  auVar26[0xf] = ~(byte)((uint)iVar37 >> 0x18);
  auVar14 = auVar14 ^ (auVar14 ^ auVar32) & auVar26;
  uStack_2b8 = auVar14._8_8_;
  local_2c0 = auVar14._0_8_;
  local_2b0 = 0;
  local_2a0[0] = PTR_DAT_047d9310 + 0x10;
  local_300 = 0xfb0001;
  uStack_2d0 = auVar21._0_8_;
  nn::os::LockMutex((MutexType *)(lVar12 + 0x120));
  local_320 = (**(code **)(**(long **)(lVar12 + 8) + 0x68))();
  lVar11 = 0x30;
  do {
    *(ulong *)((long)local_2a0 + lVar11) = *(ulong *)((long)local_2a0 + lVar11) & 1;
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x228);
  local_270[0] = local_270[0] | 4;
  local_270[1] = local_270[1] | 2;
  local_320 = (**(code **)(**(long **)(lVar12 + 8) + 0x68))();
  local_30c = 1;
  ppuStack_318 = local_2a0;
  uVar10 = FUN_00c7a2b0(lVar12,&local_320,auStack_3e0,1);
  nn::os::UnlockMutex((MutexType *)(lVar12 + 0x120));
  fVar20 = (float)(uStack_35c ^ (uStack_35c ^ (uint)fVar28) & ~-(uint)((uVar9 & 1) != 0));
  *param_3 = fVar20;
  if ((uVar10 & 1) == 0) {
    local_3dc = fVar20 + -1.0;
  }
  *param_4 = local_3dc;
  if (param_5 != (undefined8 *)0x0) {
    iVar34 = -(uint)((uVar9 & 1) != 0);
    auVar27._4_4_ = iVar34;
    auVar27._0_4_ = iVar34;
    auVar27._8_4_ = iVar34;
    auVar27._12_4_ = iVar34;
    auVar33._8_8_ = _UNK_03cabe68;
    auVar33._0_8_ = _DAT_03cabe60;
    local_350 = local_350 ^ (local_350 ^ auVar33) & ~auVar27;
    param_5[1] = local_350._8_8_;
    *param_5 = local_350._0_8_;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  puVar6 = PTR_DAT_047d1a08;
  if ((local_3a8 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_3a8 - 1,0);
  }
  if ((local_368 & 1) != 0) {
    (**(code **)(puVar6 + 8))(0,local_368 - 1,0);
  }
  if ((local_328 & 1) != 0) {
    (**(code **)(puVar6 + 8))(0,local_328 - 1,0);
  }
  return;
}


