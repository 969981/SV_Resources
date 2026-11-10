/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015815d4; name: FUN_015815d4
 */


void FUN_015815d4(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long local_18;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 == 0)) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(lVar6 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x01581650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4);
    return;
  }
  if (cVar3 != '\x03') {
    if (((cVar3 != '\x01') && (cVar3 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x01581618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4);
    return;
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar7) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_015816b8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015816b8:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          local_18 = *(long *)(lVar6 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_18 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE_00)(*param_4);
          goto LAB_01581670;
        }
        break;
      }
      sVar7 = sVar4;
    } while (sVar4 != 0);
  }
  local_18 = 0;
LAB_01581670:
  FUN_01d8ea54(&local_18);
  return;
}


