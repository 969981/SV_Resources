/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016621c8; name: FUN_016621c8
 */


ulong FUN_016621c8(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  long local_8;
  
  cVar3 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar9 == 0)) {
      return 0;
    }
    plVar7 = (long *)(lVar9 + lVar1 + -0x28);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x01662270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*UNRECOVERED_JUMPTABLE_00)(*param_6,*param_7,plVar7,param_4,*param_5);
    return uVar8;
  }
  if (cVar3 != '\x03') {
    if (((cVar3 != '\x01') && (cVar3 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
      return 0;
    }
    plVar7 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x01662220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*UNRECOVERED_JUMPTABLE_00)(*param_6,*param_7,plVar7,param_4,*param_5);
    return uVar8;
  }
  lVar9 = *(long *)(param_1 + 8);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar10) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_016622e4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_016622e4:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar9 + 0x10) != 0) {
          local_8 = *(long *)(lVar9 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_8 + lVar1));
          }
          uVar6 = (*UNRECOVERED_JUMPTABLE_00)
                            (*param_6,*param_7,(long *)(local_8 + lVar1),param_4,*param_5);
          FUN_022f6958(&local_8);
          return (ulong)(uVar6 & 1);
        }
        break;
      }
      sVar10 = sVar4;
    } while (sVar4 != 0);
  }
  local_8 = 0;
  FUN_022f6958(&local_8);
  return 0;
}


