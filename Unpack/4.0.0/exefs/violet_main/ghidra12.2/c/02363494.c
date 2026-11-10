/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02363494; name: FUN_02363494
 */


void FUN_02363494(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
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
                    /* WARNING: Could not recover jumptable at 0x023634f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_4,param_4[2],param_4[4],param_4[6]);
    return;
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x02363520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_4,param_4[2],param_4[4],param_4[6]);
    return;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 == 0)) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x02363554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_4,param_4[2],param_4[4],param_4[6]);
    return;
  case 3:
    break;
  default:
    return;
  }
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_023635b0;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_023635b0:
        bVar7 = false;
      }
      if (bVar7) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) == 0) {
          return;
        }
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar6 + lVar1));
        }
        (*UNRECOVERED_JUMPTABLE)(*param_4,param_4[2],param_4[4],param_4[6]);
                    /* WARNING: Could not recover jumptable at 0x02363608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x60))(plVar6);
        return;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


