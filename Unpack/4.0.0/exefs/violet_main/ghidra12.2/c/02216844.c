/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02216844; name: FUN_02216844
 */


undefined4
FUN_02216844(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 param_4,
            ulong param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [12];
  int iVar12;
  undefined1 auVar10 [16];
  int iVar13;
  int iVar14;
  undefined1 auVar11 [16];
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  float local_370;
  float fStack_36c;
  undefined8 local_350;
  undefined **local_348;
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
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  long *local_298;
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
  lVar6 = FUN_0116f850(*(undefined8 *)(param_3 + 0x1e0),param_4);
  if (lVar6 == 0) {
    local_48 = (long *)0x0;
  }
  else {
    local_48 = *(long **)(*(long *)(lVar6 + 0x40) + 0x40);
    if (local_48 != (long *)0x0) {
      if (local_48[1] != 0) {
        plVar1 = local_48 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_022168f4;
    }
  }
  FUN_0116fc5c(param_4,&local_48);
  plVar1 = local_48;
  local_298 = local_48;
  if (local_48 == (long *)0x0) {
    FUN_0116fab8(param_3 + 0x1c0,param_4,&local_298);
  }
  else {
    if (local_48[1] != 0) {
      plVar2 = local_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0116fab8(param_3 + 0x1c0,param_4,&local_298);
    if (plVar1[1] != 0) {
      plVar2 = plVar1 + 2;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
LAB_022168f4:
  auVar18 = NEON_fmov(0x3f800000,4);
  local_330 = 0xfb0001;
  local_340 = 0xffff;
  local_2e0 = 0x3a83126f;
  uStack_2d8 = 0x10000000000;
  auVar15 = NEON_ext(param_1,param_1,8,1);
  auVar10 = ZEXT816(0x3f800000);
  local_370 = param_2._0_4_;
  fStack_36c = param_2._4_4_;
  local_370 = local_370 - param_1._0_4_;
  fStack_36c = fStack_36c - param_1._4_4_;
  fVar17 = param_2._8_4_ - auVar15._0_4_;
  local_350 = 0;
  local_348 = (undefined **)0x0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_33c = 0;
  iVar7 = -(uint)(local_370 == 0.0);
  iVar12 = -(uint)(fStack_36c == 0.0);
  iVar13 = -(uint)(fVar17 == 0.0);
  iVar14 = -(uint)(auVar10._0_4_ == 0.0);
  fVar8 = (float)CONCAT13((byte)((uint)local_370 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                          CONCAT12((byte)((uint)local_370 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                   CONCAT11((byte)((uint)local_370 >> 8) & ~(byte)((uint)iVar7 >> 8)
                                            ,SUB41(local_370,0) & ~(byte)iVar7)));
  auVar9._0_8_ = CONCAT17((byte)((uint)fStack_36c >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT16((byte)((uint)fStack_36c >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT15((byte)((uint)fStack_36c >> 8) &
                                            ~(byte)((uint)iVar12 >> 8),
                                            CONCAT14(SUB41(fStack_36c,0) & ~(byte)iVar12,fVar8))));
  auVar9[8] = SUB41(fVar17,0) & ~(byte)iVar13;
  auVar9[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar13 >> 8);
  auVar9[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
  auVar9[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
  auVar11._12_2_ = 0;
  auVar11._0_12_ = auVar9;
  auVar11[0xe] = auVar10[2] & ~(byte)((uint)iVar14 >> 0x10);
  auVar11[0xf] = auVar10[3] & ~(byte)((uint)iVar14 >> 0x18);
  auVar16._0_4_ = auVar18._0_4_ / fVar8;
  fVar17 = (float)((ulong)auVar9._0_8_ >> 0x20);
  auVar16._4_4_ = auVar18._4_4_ / fVar17;
  auVar16._8_4_ = auVar18._8_4_ / auVar9._8_4_;
  auVar16._12_4_ = auVar18._12_4_ / auVar11._12_4_;
  local_338 = 0;
  auVar18._8_4_ = 0x7f7fffee;
  auVar18._0_8_ = 0x7f7fffee7f7fffee;
  auVar18._12_4_ = 0x7f7fffee;
  local_2d0 = 0;
  iVar7 = -(uint)(fVar8 == 0.0);
  iVar12 = -(uint)(fVar17 == 0.0);
  iVar13 = -(uint)(auVar9._8_4_ == 0.0);
  iVar14 = -(uint)(auVar11._12_4_ == 0.0);
  local_318 = local_48;
  uStack_308 = (ulong)(uint)auVar15._0_4_;
  uStack_2f8 = auVar11._8_8_;
  auVar10[0] = ~(byte)iVar7;
  auVar10[1] = ~(byte)((uint)iVar7 >> 8);
  auVar10[2] = ~(byte)((uint)iVar7 >> 0x10);
  auVar10[3] = ~(byte)((uint)iVar7 >> 0x18);
  auVar10[4] = ~(byte)iVar12;
  auVar10[5] = ~(byte)((uint)iVar12 >> 8);
  auVar10[6] = ~(byte)((uint)iVar12 >> 0x10);
  auVar10[7] = ~(byte)((uint)iVar12 >> 0x18);
  auVar10[8] = ~(byte)iVar13;
  auVar10[9] = ~(byte)((uint)iVar13 >> 8);
  auVar10[10] = ~(byte)((uint)iVar13 >> 0x10);
  auVar10[0xb] = ~(byte)((uint)iVar13 >> 0x18);
  auVar10[0xc] = ~(byte)iVar14;
  auVar10[0xd] = ~(byte)((uint)iVar14 >> 8);
  auVar10[0xe] = ~(byte)((uint)iVar14 >> 0x10);
  auVar10[0xf] = ~(byte)((uint)iVar14 >> 0x18);
  auVar18 = auVar18 ^ (auVar18 ^ auVar16) & auVar10;
  local_2c8 = 0x7f7fffee;
  uStack_2e8 = auVar18._8_8_;
  local_2f0 = auVar18._0_8_;
  local_310 = param_1._0_8_;
  uStack_300 = auVar9._0_8_;
  nn::os::LockMutex((MutexType *)(param_3 + 0x120));
  local_350 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  iVar7 = (int)param_5;
  if (-1 < iVar7) {
    lVar6 = 0;
    do {
      *(ulong *)((long)auStack_268 + lVar6 + 8) = *(ulong *)((long)auStack_268 + lVar6 + 8) & 1;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x1f8);
    auStack_268[1] = auStack_268[1] | 1L << (param_5 & 0x3f);
    auStack_268[iVar7] = auStack_268[iVar7] | 2;
    local_350 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
    local_33c = 1;
  }
  local_348 = &local_290;
  uVar5 = FUN_00da9c58(param_3,&local_350,PTR_DAT_047d19b0 + 0x200,param_6,param_7,param_8);
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x120));
  if ((local_48 != (long *)0x0) && (local_48[1] != 0)) {
    plVar1 = local_48 + 2;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  return uVar5;
}


