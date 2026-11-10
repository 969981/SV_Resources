/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016831d8; name: FUN_016831d8
 */


ulong FUN_016831d8(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 == 0)) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(lVar6 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x01683258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(*param_4);
    return uVar5;
  }
  if (cVar3 != '\x03') {
    if (((cVar3 != '\x01') && (cVar3 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x0168321c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE_00)(*param_4);
    return uVar5;
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar9) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_016832bc;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_016832bc:
        bVar8 = false;
      }
      if (bVar8) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        if (*(long *)(lVar6 + 0x10) == 0) {
          return 0;
        }
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)((long)plVar7 + lVar1));
        }
        uVar5 = (*UNRECOVERED_JUMPTABLE_00)(*param_4);
        (**(code **)(*plVar7 + 0x60))(plVar7);
        return uVar5 & 0xffffffff;
      }
      sVar9 = sVar4;
    } while (sVar4 != 0);
  }
  return 0;
}


