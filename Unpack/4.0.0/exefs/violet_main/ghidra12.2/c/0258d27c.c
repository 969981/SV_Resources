/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0258d27c; name: FUN_0258d27c
 */


void FUN_0258d27c(long *param_1,undefined1 *param_2,code *param_3,ulong param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_8;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
      plVar6 = (long *)(*param_3)();
      plVar6 = (long *)*plVar6;
      *param_1 = (long)plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0258d30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
      plVar6 = (long *)(*param_3)();
      plVar6 = (long *)*plVar6;
      *param_1 = (long)plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0258d368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar7 == 0)) {
      *param_1 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        param_3 = *(code **)(param_3 + *(long *)(lVar7 + lVar1 + -0x28));
      }
      plVar6 = (long *)(*param_3)();
      plVar6 = (long *)*plVar6;
      *param_1 = (long)plVar6;
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0258d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x18))();
        return;
      }
    }
    return;
  case 3:
    break;
  default:
    *param_1 = 0;
    return;
  }
  lVar7 = *(long *)(param_2 + 8);
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
        if (cVar4 != '\0') goto LAB_0258d44c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0258d44c:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_8 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + lVar1));
          }
          plVar6 = (long *)(*param_3)();
          plVar6 = (long *)*plVar6;
          *param_1 = (long)plVar6;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x18))();
          }
          FUN_0258d4a8(&local_8);
          return;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_0258d4a8(&local_8);
  *param_1 = 0;
  return;
}


