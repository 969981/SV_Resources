/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01273b00; name: FUN_01273b00
 */


void FUN_01273b00(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

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
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x01273b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if (cVar3 == '\x03') {
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
            if (cVar3 != '\0') goto LAB_01273be0;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01273be0:
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
            (*UNRECOVERED_JUMPTABLE)();
                    /* WARNING: Could not recover jumptable at 0x01273c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x60))(plVar6);
            return;
          }
          sVar8 = sVar4;
        } while (sVar4 != 0);
      }
      return;
    }
    if (cVar3 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x01273b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    else if ((cVar3 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x01273b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}


