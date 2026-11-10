/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181c3b8; name: FUN_0181c3b8
 */


void FUN_0181c3b8(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 == 0)) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x0181c454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7);
    return;
  }
  if (cVar3 != '\x03') {
    if (cVar3 == '\x01') {
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0181c484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7);
      return;
    }
    if ((cVar3 != '\0') || (*(long *)(param_1 + 8) == 0)) {
      return;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x0181c408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7);
    return;
  }
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0181c4e0;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0181c4e0:
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
        (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7);
                    /* WARNING: Could not recover jumptable at 0x0181c540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x60))(plVar6);
        return;
      }
      sVar8 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


