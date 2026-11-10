/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0158937c; name: FUN_0158937c
 */


void FUN_0158937c(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined2 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_18;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 != '\x01') {
    if (cVar3 == '\x03') {
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar8) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01589470;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01589470:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar7 + 0x10) != 0) {
              local_18 = *(long *)(lVar7 + 0x10) + -0x28;
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE_00 =
                     *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_18 + lVar1));
              }
              (*UNRECOVERED_JUMPTABLE_00)((long *)(local_18 + lVar1),*param_4,*param_5);
              goto LAB_015894b0;
            }
            break;
          }
          sVar8 = sVar4;
        } while (sVar4 != 0);
      }
      local_18 = 0;
LAB_015894b0:
      FUN_01b69c38(&local_18);
      return;
    }
    if (cVar3 == '\x02') {
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 == 0)) {
        return;
      }
      plVar6 = (long *)(lVar7 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x01589410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar6,*param_4,*param_5);
      return;
    }
    if (cVar3 != '\0') {
      return;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x015893ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar6,*param_4,*param_5);
  return;
}


