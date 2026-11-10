/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02216328; name: FUN_02216328
 */


undefined4
FUN_02216328(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 param_4,
            ulong param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  int iVar11;
  undefined1 auVar8 [12];
  int iVar10;
  undefined1 auVar9 [16];
  int iVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  float local_350;
  float fStack_34c;
  undefined8 local_340;
  undefined **local_338;
  undefined2 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  long *local_308;
  undefined8 local_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
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
  long *local_48;
  
  local_270 = 0;
  local_288 = 0xffffffff;
  uStack_280 = 1;
  memset(auStack_268,0xff,0x200);
  local_48 = (long *)0x0;
  local_290 = PTR_DAT_047d9310 + 0x10;
  local_278 = 2;
  FUN_00cb4960(param_4,&local_48);
  local_320 = 0xfb0001;
  local_330 = 0xffff;
  local_2d0 = 0x3a83126f;
  uStack_2c8 = 0x10000000000;
  auVar13 = NEON_ext(param_1,param_1,8,1);
  uStack_2f8 = (ulong)(uint)auVar13._0_4_;
  auVar9 = ZEXT816(0x3f800000);
  local_350 = param_2._0_4_;
  fStack_34c = param_2._4_4_;
  local_350 = local_350 - param_1._0_4_;
  fStack_34c = fStack_34c - param_1._4_4_;
  fVar15 = param_2._8_4_ - auVar13._0_4_;
  local_340 = 0;
  local_338 = (undefined **)0x0;
  auVar16 = NEON_fmov(0x3f800000,4);
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  iVar6 = -(uint)(local_350 == 0.0);
  iVar10 = -(uint)(fStack_34c == 0.0);
  iVar11 = -(uint)(fVar15 == 0.0);
  iVar12 = -(uint)(auVar9._0_4_ == 0.0);
  fVar7 = (float)CONCAT13((byte)((uint)local_350 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                          CONCAT12((byte)((uint)local_350 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                   CONCAT11((byte)((uint)local_350 >> 8) & ~(byte)((uint)iVar6 >> 8)
                                            ,SUB41(local_350,0) & ~(byte)iVar6)));
  auVar8._0_8_ = CONCAT17((byte)((uint)fStack_34c >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                          CONCAT16((byte)((uint)fStack_34c >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                                   CONCAT15((byte)((uint)fStack_34c >> 8) &
                                            ~(byte)((uint)iVar10 >> 8),
                                            CONCAT14(SUB41(fStack_34c,0) & ~(byte)iVar10,fVar7))));
  auVar8[8] = SUB41(fVar15,0) & ~(byte)iVar11;
  auVar8[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar11 >> 8);
  auVar8[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
  auVar8[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
  auVar13._12_2_ = 0;
  auVar13._0_12_ = auVar8;
  auVar13[0xe] = auVar9[2] & ~(byte)((uint)iVar12 >> 0x10);
  auVar13[0xf] = auVar9[3] & ~(byte)((uint)iVar12 >> 0x18);
  auVar14._0_4_ = auVar16._0_4_ / fVar7;
  fVar15 = (float)((ulong)auVar8._0_8_ >> 0x20);
  auVar14._4_4_ = auVar16._4_4_ / fVar15;
  auVar14._8_4_ = auVar16._8_4_ / auVar8._8_4_;
  auVar14._12_4_ = auVar16._12_4_ / auVar13._12_4_;
  local_32c = 0;
  auVar16._8_4_ = 0x7f7fffee;
  auVar16._0_8_ = 0x7f7fffee7f7fffee;
  auVar16._12_4_ = 0x7f7fffee;
  local_328 = 0;
  iVar6 = -(uint)(fVar7 == 0.0);
  iVar10 = -(uint)(fVar15 == 0.0);
  iVar11 = -(uint)(auVar8._8_4_ == 0.0);
  iVar12 = -(uint)(auVar13._12_4_ == 0.0);
  local_2c0 = 0;
  uStack_2e8 = auVar13._8_8_;
  auVar9[0] = ~(byte)iVar6;
  auVar9[1] = ~(byte)((uint)iVar6 >> 8);
  auVar9[2] = ~(byte)((uint)iVar6 >> 0x10);
  auVar9[3] = ~(byte)((uint)iVar6 >> 0x18);
  auVar9[4] = ~(byte)iVar10;
  auVar9[5] = ~(byte)((uint)iVar10 >> 8);
  auVar9[6] = ~(byte)((uint)iVar10 >> 0x10);
  auVar9[7] = ~(byte)((uint)iVar10 >> 0x18);
  auVar9[8] = ~(byte)iVar11;
  auVar9[9] = ~(byte)((uint)iVar11 >> 8);
  auVar9[10] = ~(byte)((uint)iVar11 >> 0x10);
  auVar9[0xb] = ~(byte)((uint)iVar11 >> 0x18);
  auVar9[0xc] = ~(byte)iVar12;
  auVar9[0xd] = ~(byte)((uint)iVar12 >> 8);
  auVar9[0xe] = ~(byte)((uint)iVar12 >> 0x10);
  auVar9[0xf] = ~(byte)((uint)iVar12 >> 0x18);
  auVar16 = auVar16 ^ (auVar16 ^ auVar14) & auVar9;
  local_308 = local_48;
  uStack_2d8 = auVar16._8_8_;
  local_2e0 = auVar16._0_8_;
  local_2b8 = 0x7f7fffee;
  local_300 = param_1._0_8_;
  uStack_2f0 = auVar8._0_8_;
  nn::os::LockMutex((MutexType *)(param_3 + 0x120));
  local_340 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  iVar6 = (int)param_5;
  if (-1 < iVar6) {
    lVar5 = 0;
    do {
      *(ulong *)((long)auStack_268 + lVar5 + 8) = *(ulong *)((long)auStack_268 + lVar5 + 8) & 1;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x1f8);
    auStack_268[1] = auStack_268[1] | 1L << (param_5 & 0x3f);
    auStack_268[iVar6] = auStack_268[iVar6] | 2;
    local_340 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
    local_32c = 1;
  }
  local_338 = &local_290;
  uVar4 = FUN_00da9c58(param_3,&local_340,PTR_DAT_047d19b0 + 0x200,param_6,param_7,param_8);
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x120));
  if ((local_48 != (long *)0x0) && (local_48[1] != 0)) {
    plVar1 = local_48 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  return uVar4;
}


