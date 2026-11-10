/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b9f214; name: FUN_01b9f214
 */


undefined1  [16] FUN_01b9f214(undefined1 *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar6 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) == 0) {
      auVar12 = ZEXT816(0);
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_40 = *param_4;
      uStack_38 = param_4[1];
      local_30 = param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      auVar12 = (*param_2)(plVar5,&local_40);
      uVar16 = auVar12._8_8_;
      uVar10 = auVar12._0_8_;
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
        auVar12._8_8_ = uVar16;
        auVar12._0_8_ = uVar10;
      }
    }
    return auVar12;
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      auVar13 = ZEXT816(0);
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_40 = *param_4;
      uStack_38 = param_4[1];
      local_30 = param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      auVar13 = (*param_2)(plVar5,&local_40);
      uVar16 = auVar13._8_8_;
      uVar10 = auVar13._0_8_;
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
        auVar13._8_8_ = uVar16;
        auVar13._0_8_ = uVar10;
      }
    }
    return auVar13;
  case 2:
    auVar14 = ZEXT816(0);
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), auVar14 = ZEXT816(0), lVar7 != 0)) {
      plVar5 = (long *)(lVar7 + lVar6 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_40 = *param_4;
      uStack_38 = param_4[1];
      local_30 = param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      auVar14 = (*param_2)(plVar5,&local_40);
      uVar16 = auVar14._8_8_;
      uVar10 = auVar14._0_8_;
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
        auVar14._8_8_ = uVar16;
        auVar14._0_8_ = uVar10;
      }
    }
    return auVar14;
  case 3:
    break;
  default:
    return ZEXT816(0);
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01b9f460;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01b9f460:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_40 = *param_4;
          uStack_38 = param_4[1];
          local_30 = param_4[2];
          plVar5 = (long *)param_4[3];
          param_4[3] = 0;
          local_28 = plVar5;
          uVar9 = FUN_01b9f4d4((long)register0x00000008 + -8,param_2,(int)param_3,&local_40);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          FUN_00c7f318((long)register0x00000008 + -8);
          uVar11 = (ulong)uVar9;
          goto LAB_01b9f41c;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  FUN_00c7f318((long)register0x00000008 + -8);
  uVar11 = 0;
LAB_01b9f41c:
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar11;
  return auVar15;
}


