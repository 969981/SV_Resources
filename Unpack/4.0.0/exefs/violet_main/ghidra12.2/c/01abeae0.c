/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01abeae0; name: FUN_01abeae0
 */


uint FUN_01abeae0(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 *param_4,
                 ulong param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined1 auVar11 [12];
  int iVar16;
  undefined1 auVar12 [16];
  float fVar10;
  int iVar18;
  int iVar19;
  undefined1 auVar13 [16];
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar20 [16];
  float local_360;
  float fStack_35c;
  undefined8 local_340;
  undefined **ppuStack_338;
  undefined2 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined4 local_320;
  long *local_308;
  float local_300;
  float fStack_2fc;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
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
  local_290 = PTR_DAT_047d9310 + 0x10;
  local_278 = 2;
  local_340 = *param_4;
  ppuStack_338 = (undefined **)(ulong)*(uint *)(param_4 + 1);
  FUN_00e81a84(&local_48,&local_340);
  local_360 = param_1._0_4_;
  fStack_35c = param_1._4_4_;
  local_340 = 0;
  ppuStack_338 = (undefined **)0x0;
  local_320 = 0xfb0001;
  uStack_2f8 = (ulong)(uint)param_1._8_4_;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = 0x7f7fffee;
  auVar12 = ZEXT816(0x3f800000);
  fVar4 = param_2._0_4_ - local_360;
  fVar5 = param_2._4_4_ - fStack_35c;
  fVar6 = param_2._8_4_ - param_1._8_4_;
  local_2a0 = 0;
  uStack_298 = 0;
  auVar20 = NEON_fmov(0x3f800000,4);
  iVar9 = -(uint)(fVar4 == 0.0);
  iVar16 = -(uint)(fVar5 == 0.0);
  iVar18 = -(uint)(fVar6 == 0.0);
  iVar19 = -(uint)(auVar12._0_4_ == 0.0);
  fVar10 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                           CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                    CONCAT11((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                             SUB41(fVar4,0) & ~(byte)iVar9)));
  auVar11._0_8_ =
       CONCAT17((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                CONCAT16((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                         CONCAT15((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                  CONCAT14(SUB41(fVar5,0) & ~(byte)iVar16,fVar10))));
  auVar11[8] = SUB41(fVar6,0) & ~(byte)iVar18;
  auVar11[9] = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar18 >> 8);
  auVar11[10] = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
  auVar11[0xb] = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
  auVar13._12_2_ = 0;
  auVar13._0_12_ = auVar11;
  auVar13[0xe] = auVar12[2] & ~(byte)((uint)iVar19 >> 0x10);
  auVar13[0xf] = auVar12[3] & ~(byte)((uint)iVar19 >> 0x18);
  fVar17 = (float)((ulong)auVar11._0_8_ >> 0x20);
  fVar4 = auVar20._4_4_ / fVar17;
  fVar5 = auVar20._8_4_ / auVar11._8_4_;
  fVar6 = auVar20._12_4_ / auVar13._12_4_;
  local_2d0 = 0x3a83126f;
  auVar15._8_4_ = 0x7f7fffee;
  auVar15._0_8_ = 0x7f7fffee7f7fffee;
  auVar15._12_4_ = 0x7f7fffee;
  iVar9 = -(uint)(fVar10 == 0.0);
  iVar16 = -(uint)(fVar17 == 0.0);
  iVar18 = -(uint)(auVar11._8_4_ == 0.0);
  iVar19 = -(uint)(auVar13._12_4_ == 0.0);
  local_300 = local_360;
  fStack_2fc = fStack_35c;
  uStack_2e8 = auVar13._8_8_;
  auVar14[0] = ~(byte)iVar9;
  auVar14[1] = ~(byte)((uint)iVar9 >> 8);
  auVar14[2] = ~(byte)((uint)iVar9 >> 0x10);
  auVar14[3] = ~(byte)((uint)iVar9 >> 0x18);
  auVar14[4] = ~(byte)iVar16;
  auVar14[5] = ~(byte)((uint)iVar16 >> 8);
  auVar14[6] = ~(byte)((uint)iVar16 >> 0x10);
  auVar14[7] = ~(byte)((uint)iVar16 >> 0x18);
  auVar14[8] = ~(byte)iVar18;
  auVar14[9] = ~(byte)((uint)iVar18 >> 8);
  auVar14[10] = ~(byte)((uint)iVar18 >> 0x10);
  auVar14[0xb] = ~(byte)((uint)iVar18 >> 0x18);
  auVar14[0xc] = ~(byte)iVar19;
  auVar14[0xd] = ~(byte)((uint)iVar19 >> 8);
  auVar14[0xe] = ~(byte)((uint)iVar19 >> 0x10);
  auVar14[0xf] = ~(byte)((uint)iVar19 >> 0x18);
  auVar12[4] = SUB41(fVar4,0);
  auVar12._0_4_ = auVar20._0_4_ / fVar10;
  auVar12[5] = (char)((uint)fVar4 >> 8);
  auVar12[6] = (char)((uint)fVar4 >> 0x10);
  auVar12[7] = (char)((uint)fVar4 >> 0x18);
  auVar12[8] = SUB41(fVar5,0);
  auVar12[9] = (char)((uint)fVar5 >> 8);
  auVar12[10] = (char)((uint)fVar5 >> 0x10);
  auVar12[0xb] = (char)((uint)fVar5 >> 0x18);
  auVar12[0xc] = SUB41(fVar6,0);
  auVar12[0xd] = (char)((uint)fVar6 >> 8);
  auVar12[0xe] = (char)((uint)fVar6 >> 0x10);
  auVar12[0xf] = (char)((uint)fVar6 >> 0x18);
  auVar15 = auVar15 ^ (auVar15 ^ auVar12) & auVar14;
  local_330 = 0xffff;
  local_32c = 0;
  local_328 = 0;
  local_308 = local_48;
  local_2c8 = 0x10000000000;
  uStack_2c0 = 0;
  uStack_2d8 = auVar15._8_8_;
  local_2e0 = auVar15._0_8_;
  uStack_2f0 = auVar11._0_8_;
  nn::os::LockMutex((MutexType *)(param_3 + 0x120));
  local_340 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  iVar9 = (int)param_5;
  if (-1 < iVar9) {
    lVar8 = 0;
    do {
      *(ulong *)((long)auStack_268 + lVar8 + 8) = *(ulong *)((long)auStack_268 + lVar8 + 8) & 1;
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x1f8);
    auStack_268[1] = auStack_268[1] | 1L << (param_5 & 0x3f);
    auStack_268[iVar9] = auStack_268[iVar9] | 2;
    local_340 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
    local_32c = 1;
  }
  ppuStack_338 = &local_290;
  uVar7 = FUN_0147c524(param_3,&local_340,PTR_DAT_047d19b0 + 0x200,param_6,param_7);
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x120));
  if ((local_48 != (long *)0x0) && (local_48[1] != 0)) {
    plVar1 = local_48 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
  }
  return uVar7 & 1;
}


