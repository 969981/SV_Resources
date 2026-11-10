/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255b1d8; name: FUN_0255b1d8
 */


void FUN_0255b1d8(undefined1 *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar6);
    }
    local_18 = param_4[3];
    local_28 = param_4[1];
    local_30 = *param_4;
    local_20 = param_4[2];
    (*param_2)(plVar6,&local_30);
    return;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 != 0)) {
      plVar6 = (long *)(lVar7 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      local_18 = param_4[3];
      local_28 = param_4[1];
      local_30 = *param_4;
      local_20 = param_4[2];
      (*param_2)(plVar6,&local_30);
    }
    return;
  case 3:
    break;
  default:
    return;
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0255b348;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0255b348:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_38 = *(long *)(lVar7 + 0x10) + -0x28;
          local_18 = param_4[3];
          local_28 = param_4[1];
          local_30 = *param_4;
          local_20 = param_4[2];
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(local_38 + lVar1));
          }
          (*param_2)((long *)(local_38 + lVar1),&local_30);
          goto LAB_0255b2fc;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_38 = 0;
LAB_0255b2fc:
  FUN_02556068(&local_38);
  return;
}


