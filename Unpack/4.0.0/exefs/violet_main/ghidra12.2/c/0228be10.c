/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228be10; name: FUN_0228be10
 */


undefined1  [16] FUN_0228be10(undefined1 *param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  undefined1 auVar9 [16];
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return ZEXT816(0);
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar6);
    }
    auVar9 = (*param_2)(plVar6,param_4);
    return auVar9;
  case 2:
    auVar9 = ZEXT816(0);
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), auVar9 = ZEXT816(0), lVar7 != 0)) {
      plVar6 = (long *)(lVar7 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar6);
      }
      auVar9 = (*param_2)(0,plVar6,param_4);
    }
    return auVar9;
  case 3:
    break;
  default:
    return ZEXT816(0);
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
        if (cVar4 != '\0') goto LAB_0228bf28;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0228bf28:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_18 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(local_18 + lVar1));
          }
          auVar9 = (*param_2)(0,(long *)(local_18 + lVar1),param_4);
          FUN_02289a20(&local_18);
          return auVar9;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
  FUN_02289a20(&local_18);
  return ZEXT816(0);
}


