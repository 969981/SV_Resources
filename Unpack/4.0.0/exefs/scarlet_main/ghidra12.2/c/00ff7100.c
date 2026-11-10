/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff7100; name: FUN_00ff7100
 */


void FUN_00ff7100(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long local_8;
  
  cVar3 = *param_2;
  lVar1 = (long)param_4 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_2 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar6 != 0)) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar6 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x00ff7130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if (cVar3 == '\x03') {
      lVar6 = *(long *)(param_2 + 8);
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
            if (cVar3 != '\0') goto LAB_00ff7208;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00ff7208:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar6 + 0x10) != 0) {
              local_8 = *(long *)(lVar6 + 0x10) + -0x28;
              if ((param_4 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1));
              }
              (*UNRECOVERED_JUMPTABLE)(param_1);
              FUN_01b8ea78(&local_8);
              return;
            }
            break;
          }
          sVar7 = sVar4;
        } while (sVar4 != 0);
      }
      local_8 = 0;
      FUN_01b8ea78(&local_8);
      *param_1 = &PTR_LAB_04525290;
      param_1[1] = 0;
      return;
    }
    if (cVar3 == '\x01') {
      if (*(long *)(param_2 + 8) != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x00ff7184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    else if ((cVar3 == '\0') && (*(long *)(param_2 + 8) != 0)) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x00ff7160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  *param_1 = &PTR_LAB_04525290;
  param_1[1] = 0;
  return;
}


