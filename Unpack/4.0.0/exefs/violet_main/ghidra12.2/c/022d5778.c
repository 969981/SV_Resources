/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022d5778; name: FUN_022d5778
 */


void FUN_022d5778(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,
                 undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x022d57c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5,plVar6,*param_6);
    return;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 == 0)) {
      return;
    }
    plVar6 = (long *)(lVar7 + lVar1 + -0x28);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x022d5818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5,plVar6,*param_6);
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
        if (cVar4 != '\0') goto LAB_022d5884;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_022d5884:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_18 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_18 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5,(long *)(local_18 + lVar1),*param_6);
          goto LAB_022d5838;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_18 = 0;
LAB_022d5838:
  FUN_022d5578(&local_18);
  return;
}


