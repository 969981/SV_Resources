/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01268b50; name: FUN_01268b50
 */


void FUN_01268b50(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

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
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar6 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x01268b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if (cVar3 == '\x03') {
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
            if (cVar3 != '\0') goto LAB_01268c3c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01268c3c:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar6 + 0x10) != 0) {
              local_18 = *(long *)(lVar6 + 0x10) + -0x28;
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
              }
              (*UNRECOVERED_JUMPTABLE)();
              goto LAB_01268bf4;
            }
            break;
          }
          sVar7 = sVar4;
        } while (sVar4 != 0);
      }
      local_18 = 0;
LAB_01268bf4:
      FUN_01a36678(&local_18);
      return;
    }
    if (cVar3 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x01268bd4. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x01268bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}


