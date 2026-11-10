/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01171ea0; name: FUN_01171ea0
 */


uint FUN_01171ea0(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 param_4,
                 uint param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
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
  float local_360;
  float fStack_35c;
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
  long *local_290;
  long *local_288;
  undefined *local_280 [3];
  undefined1 local_268;
  undefined4 local_260;
  ulong local_258;
  ulong local_250;
  undefined *apuStack_248 [63];
  
  local_260 = 0;
  local_280[1] = (undefined *)0xffffffff;
  local_280[2] = (undefined *)0x1;
  memset(&local_258,0xff,0x200);
  local_280[0] = PTR_DAT_047d9310 + 0x10;
  local_268 = 2;
  lVar6 = FUN_0116f850(*(undefined8 *)(param_3 + 0x1e0),param_4);
  if (lVar6 == 0) {
    local_288 = (long *)0x0;
  }
  else {
    local_288 = *(long **)(*(long *)(lVar6 + 0x40) + 0x40);
    if (local_288 != (long *)0x0) {
      if (local_288[1] != 0) {
        plVar1 = local_288 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_01171f48;
    }
  }
  FUN_0116fc5c(param_4,&local_288);
  plVar1 = local_288;
  local_290 = local_288;
  if (local_288 == (long *)0x0) {
    FUN_0116fab8(param_3 + 0x1c0,param_4,&local_290);
  }
  else {
    if (local_288[1] != 0) {
      plVar2 = local_288 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0116fab8(param_3 + 0x1c0,param_4,&local_290);
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
LAB_01171f48:
  auVar18 = NEON_fmov(0x3f800000,4);
  local_320 = 0xfb0001;
  local_330 = 0xffff;
  local_2d0 = 0x3a83126f;
  uStack_2c8 = 0x10000000000;
  auVar15 = NEON_ext(param_1,param_1,8,1);
  auVar10 = ZEXT816(0x3f800000);
  local_360 = param_2._0_4_;
  fStack_35c = param_2._4_4_;
  local_360 = local_360 - param_1._0_4_;
  fStack_35c = fStack_35c - param_1._4_4_;
  fVar17 = param_2._8_4_ - auVar15._0_4_;
  local_340 = 0;
  local_338 = (undefined **)0x0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_32c = 0;
  iVar7 = -(uint)(local_360 == 0.0);
  iVar12 = -(uint)(fStack_35c == 0.0);
  iVar13 = -(uint)(fVar17 == 0.0);
  iVar14 = -(uint)(auVar10._0_4_ == 0.0);
  fVar8 = (float)CONCAT13((byte)((uint)local_360 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                          CONCAT12((byte)((uint)local_360 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                   CONCAT11((byte)((uint)local_360 >> 8) & ~(byte)((uint)iVar7 >> 8)
                                            ,SUB41(local_360,0) & ~(byte)iVar7)));
  auVar9._0_8_ = CONCAT17((byte)((uint)fStack_35c >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                          CONCAT16((byte)((uint)fStack_35c >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                   CONCAT15((byte)((uint)fStack_35c >> 8) &
                                            ~(byte)((uint)iVar12 >> 8),
                                            CONCAT14(SUB41(fStack_35c,0) & ~(byte)iVar12,fVar8))));
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
  local_328 = 0;
  auVar18._8_4_ = 0x7f7fffee;
  auVar18._0_8_ = 0x7f7fffee7f7fffee;
  auVar18._12_4_ = 0x7f7fffee;
  local_2c0 = 0;
  iVar7 = -(uint)(fVar8 == 0.0);
  iVar12 = -(uint)(fVar17 == 0.0);
  iVar13 = -(uint)(auVar9._8_4_ == 0.0);
  iVar14 = -(uint)(auVar11._12_4_ == 0.0);
  local_308 = local_288;
  uStack_2f8 = (ulong)(uint)auVar15._0_4_;
  uStack_2e8 = auVar11._8_8_;
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
  local_2b8 = 0x7f7fffee;
  uStack_2d8 = auVar18._8_8_;
  local_2e0 = auVar18._0_8_;
  local_300 = param_1._0_8_;
  uStack_2f0 = auVar9._0_8_;
  nn::os::LockMutex((MutexType *)(param_3 + 0x120));
  local_340 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  lVar6 = 0x30;
  do {
    *(ulong *)((long)local_280 + lVar6) = *(ulong *)((long)local_280 + lVar6) & 1;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x228);
  if ((param_5 & 1) != 0) {
    local_258 = local_258 | 2;
  }
  local_250 = local_250 | param_5;
  if ((param_5 >> 1 & 1) != 0) {
    local_250 = local_250 | 2;
  }
  lVar6 = 7;
  do {
    if ((param_5 >> (lVar6 - 5U & 0x3f) & 1) != 0) {
      local_280[lVar6] = (undefined *)((ulong)local_280[lVar6] | 2);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x45);
  local_338 = local_280;
  local_340 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  local_32c = 1;
  uVar5 = FUN_0147c524(param_3,&local_340,PTR_DAT_047d19b0 + 0x200,param_6,param_7);
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x120));
  if ((local_288 != (long *)0x0) && (local_288[1] != 0)) {
    plVar1 = local_288 + 2;
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
      (**(code **)(*local_288 + 0x18))();
    }
  }
  return uVar5 & 1;
}


