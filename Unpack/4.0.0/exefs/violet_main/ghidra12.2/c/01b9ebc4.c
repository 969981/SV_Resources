/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b9ebc4; name: FUN_01b9ebc4
 */


undefined4 FUN_01b9ebc4(undefined1 *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  long local_8;
  
  lVar7 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_40 = *param_4;
      uStack_38 = param_4[1];
      local_30 = param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      uVar5 = (*param_2)(plVar6,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    return uVar5;
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar7);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_40 = *param_4;
      uStack_38 = param_4[1];
      local_30 = param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      uVar5 = (*param_2)(plVar6,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    return uVar5;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 == 0)) {
      uVar5 = 0;
    }
    else {
      plVar6 = (long *)(lVar8 + lVar7 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_40 = *param_4;
      uStack_38 = param_4[1];
      local_30 = param_4[2];
      local_28 = (long *)param_4[3];
      param_4[3] = 0;
      uVar5 = (*param_2)(plVar6,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    return uVar5;
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
        if (cVar3 != '\0') goto LAB_01b9ee10;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01b9ee10:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_8 = *(long *)(lVar7 + 0x10) + -0x28;
          local_40 = *param_4;
          uStack_38 = param_4[1];
          local_30 = param_4[2];
          plVar6 = (long *)param_4[3];
          param_4[3] = 0;
          local_28 = plVar6;
          uVar5 = FUN_01b9ee84(&local_8,param_2,(int)param_3,&local_40);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          FUN_00c7f318(&local_8);
          return uVar5;
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  local_8 = 0;
  FUN_00c7f318(&local_8);
  return 0;
}


