/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb0cc0; name: FUN_00cb0cc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00cb0cc0(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  float fVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 auVar22 [16];
  long *local_90;
  undefined8 *local_88;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined1 uStack_78;
  undefined2 uStack_77;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30 [2];
  
  uVar7 = 0;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x1a) & 0xc) == 4)) {
    local_40 = NEON_fmov(0x3f800000,4);
    local_88 = &local_60;
    local_38 = 0xffffffff3f800000;
    local_30[0] = param_1 - (long)local_30;
    local_30[1] = 0;
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(param_1 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_58 = param_3[1];
    local_60 = *param_3;
    fVar5 = (float)local_60 * (float)local_60;
    fVar10 = (float)((ulong)local_60 >> 0x20);
    fVar10 = fVar10 * fVar10;
    uVar13 = (undefined1)((uint)fVar10 >> 8);
    uVar14 = (undefined1)((uint)fVar10 >> 0x10);
    uVar15 = (undefined1)((uint)fVar10 >> 0x18);
    fVar11 = (float)uStack_58 * (float)uStack_58;
    uVar16 = (undefined1)((uint)fVar11 >> 8);
    uVar17 = (undefined1)((uint)fVar11 >> 0x10);
    uVar18 = (undefined1)((uint)fVar11 >> 0x18);
    fVar12 = (float)((ulong)uStack_58 >> 0x20);
    fVar12 = fVar12 * fVar12;
    uVar19 = (undefined1)((uint)fVar12 >> 8);
    uVar20 = (undefined1)((uint)fVar12 >> 0x10);
    uVar21 = (undefined1)((uint)fVar12 >> 0x18);
    local_50 = param_3[2];
    auVar22[4] = SUB41(fVar10,0);
    auVar22._0_4_ = fVar5;
    auVar22[5] = uVar13;
    auVar22[6] = uVar14;
    auVar22[7] = uVar15;
    auVar22[8] = SUB41(fVar11,0);
    auVar22[9] = uVar16;
    auVar22[10] = uVar17;
    auVar22[0xb] = uVar18;
    auVar22[0xc] = SUB41(fVar12,0);
    auVar22[0xd] = uVar19;
    auVar22[0xe] = uVar20;
    auVar22[0xf] = uVar21;
    auVar4[4] = SUB41(fVar10,0);
    auVar4._0_4_ = fVar5;
    auVar4[5] = uVar13;
    auVar4[6] = uVar14;
    auVar4[7] = uVar15;
    auVar4[8] = SUB41(fVar11,0);
    auVar4[9] = uVar16;
    auVar4[10] = uVar17;
    auVar4[0xb] = uVar18;
    auVar4[0xc] = SUB41(fVar12,0);
    auVar4[0xd] = uVar19;
    auVar4[0xe] = uVar20;
    auVar4[0xf] = uVar21;
    auVar22 = NEON_ext(auVar22,auVar4,8,1);
    local_74 = 2;
    uStack_80 = 1;
    local_79 = 0;
    uStack_77 = 0;
    uStack_78 = 1;
    local_70 = 0;
    uStack_68 = 0;
    fVar11 = (float)param_3[3];
    local_48 = CONCAT44(0x40ffff,fVar11);
    bVar9 = 0x44;
    if (auVar22._0_4_ + fVar5 + fVar10 <= 7.6154333e-07) {
      bVar9 = 0x40;
    }
    local_48 = (ulong)CONCAT16(bVar9 | (((~-((float)local_50 == 0.0) & (byte)_DAT_03cab270) +
                                         (~-((float)((ulong)local_50 >> 0x20) == 0.0) &
                                         (byte)((ulong)_DAT_03cab270 >> 0x20)) +
                                         (~-(fVar11 == 0.0) & (byte)_UNK_03cab278) +
                                         (~-((float)((ulong)param_3[3] >> 0x20) == 0.0) &
                                         (byte)((ulong)_UNK_03cab278 >> 0x20)) & 7) != 0) << 1,
                               (undefined6)local_48);
    FUN_00cb0eb4(&local_90,&local_88);
    plVar1 = local_90;
    local_90 = (long *)0x0;
    plVar6 = (long *)*param_2;
    *param_2 = (long)plVar1;
    if (plVar6 != (long *)0x0) {
      if (plVar6[1] != 0) {
        plVar1 = plVar6 + 2;
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
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
        plVar1 = local_90 + 2;
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
          (**(code **)(*local_90 + 0x18))();
        }
      }
    }
    if (((local_30[0] != 0) &&
        (plVar1 = (long *)(local_30[0] + (long)local_30), plVar1 != (long *)0x0)) &&
       (*(long *)((long)local_30 + local_30[0] + 8) != 0)) {
      plVar6 = (long *)((long)local_30 + local_30[0] + 0x10);
      do {
        lVar8 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))();
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


