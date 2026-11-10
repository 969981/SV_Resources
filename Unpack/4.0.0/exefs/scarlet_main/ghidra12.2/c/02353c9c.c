/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02353c9c; name: FUN_02353c9c
 */


undefined8 FUN_02353c9c(undefined1 *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  lVar7 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_40 = *param_4;
      local_38 = param_4[1];
      local_30 = (long *)param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      uVar6 = (*param_2)(plVar5,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    return uVar6;
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_40 = *param_4;
      local_38 = param_4[1];
      local_30 = (long *)param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      uVar6 = (*param_2)(plVar5,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    return uVar6;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 == 0)) {
      uVar6 = 0;
    }
    else {
      plVar5 = (long *)(lVar8 + lVar7 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_40 = *param_4;
      local_38 = param_4[1];
      local_30 = (long *)param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      uVar6 = (*param_2)(plVar5,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    return uVar6;
  case 3:
    break;
  default:
    return 0;
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02353ed4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02353ed4:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_28 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
          local_48 = *param_4;
          local_40 = param_4[1];
          local_38 = param_4[2];
          plVar5 = (long *)param_4[3];
          param_4[3] = 0;
          local_30 = plVar5;
          uVar6 = FUN_02353f5c(&local_28,param_2,(int)param_3,&local_48);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          FUN_02353c24(&local_28);
          return uVar6;
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  local_28 = (long *)0x0;
  FUN_02353c24(&local_28);
  return 0;
}


