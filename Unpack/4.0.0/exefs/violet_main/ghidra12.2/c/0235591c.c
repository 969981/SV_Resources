/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0235591c; name: FUN_0235591c
 */


void FUN_0235591c(undefined1 *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
  lVar6 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_48 = (long *)*param_4;
      local_40 = param_4[1];
      local_38 = param_4[2];
      local_30 = (long *)param_4[3];
      param_4[3] = 0;
      local_28 = param_4[4];
      plVar9 = (long *)param_4[6];
      param_4[6] = 0;
      (*param_2)(plVar5,&local_48);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x20))();
      }
    }
    return;
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 8) + lVar6);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_48 = (long *)*param_4;
      local_40 = param_4[1];
      local_38 = param_4[2];
      local_30 = (long *)param_4[3];
      param_4[3] = 0;
      local_28 = param_4[4];
      plVar9 = (long *)param_4[6];
      param_4[6] = 0;
      (*param_2)(plVar5,&local_48);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x20))();
      }
    }
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
      plVar5 = (long *)(lVar7 + lVar6 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar5);
      }
      local_48 = (long *)*param_4;
      local_40 = param_4[1];
      local_38 = param_4[2];
      local_30 = (long *)param_4[3];
      param_4[3] = 0;
      local_28 = param_4[4];
      plVar9 = (long *)param_4[6];
      param_4[6] = 0;
      (*param_2)(plVar5,&local_48);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x20))();
      }
    }
    return;
  case 3:
    break;
  default:
    return;
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
        if (cVar3 != '\0') goto LAB_02355b98;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02355b98:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_28 = *(long *)(lVar6 + 0x10) + -0x28;
          local_60 = *param_4;
          uStack_58 = param_4[1];
          local_50 = param_4[2];
          plVar5 = (long *)param_4[3];
          param_4[3] = 0;
          local_40 = param_4[4];
          local_38 = param_4[5];
          plVar9 = (long *)param_4[6];
          param_4[6] = 0;
          local_48 = plVar5;
          local_30 = plVar9;
          FUN_02355c34(&local_28,param_2,(int)param_3,&local_60);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))(plVar9);
          }
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          goto LAB_02355c08;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  local_28 = 0;
LAB_02355c08:
  FUN_02353c24(&local_28);
  return;
}


