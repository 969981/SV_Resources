/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d7ee34; name: FUN_01d7ee34
 */


void FUN_01d7ee34(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x01d7ee78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5);
    return;
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x01d7eeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5);
    return;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 == 0)) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar6 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x01d7eeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5);
    return;
  case 3:
    break;
  default:
    return;
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d7ef54;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d7ef54:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_18 = *(long *)(lVar6 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5);
          goto LAB_01d7ef0c;
        }
        break;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
LAB_01d7ef0c:
  FUN_01a36678(&local_18);
  return;
}


