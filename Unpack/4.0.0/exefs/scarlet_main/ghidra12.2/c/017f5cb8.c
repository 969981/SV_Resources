/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f5cb8; name: FUN_017f5cb8
 */


ulong FUN_017f5cb8(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  long local_8;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar8 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x017f5ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE)();
      return uVar7;
    }
  }
  else {
    if (cVar3 == '\x03') {
      lVar8 = *(long *)(param_1 + 8);
      if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar8 + 0x1a);
        sVar9 = *(short *)(lVar8 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar9) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_017f5dac;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_017f5dac:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar8 + 0x10) != 0) {
              local_8 = *(long *)(lVar8 + 0x10) + -0x28;
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1));
              }
              uVar6 = (*UNRECOVERED_JUMPTABLE)();
              FUN_02330148(&local_8);
              return (ulong)(uVar6 & 1);
            }
            break;
          }
          sVar9 = sVar4;
        } while (sVar4 != 0);
      }
      local_8 = 0;
      FUN_02330148(&local_8);
      return 0;
    }
    if (cVar3 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x017f5d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE)();
        return uVar7;
      }
    }
    else if ((cVar3 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x017f5d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE)();
      return uVar7;
    }
  }
  return 0;
}


