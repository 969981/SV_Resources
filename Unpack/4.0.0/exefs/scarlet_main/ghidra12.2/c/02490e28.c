/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02490e28; name: FUN_02490e28
 */


undefined8
FUN_02490e28(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar7 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x02490e88:
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x02490e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(plVar7,param_4);
      return uVar5;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
      plVar7 = (long *)(lVar6 + lVar1 + -0x28);
      goto joined_r0x02490e88;
    }
    break;
  case 3:
    lVar6 = *(long *)(param_1 + 8);
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar6 + 0x1a);
      sVar9 = *(short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar8) {
            *psVar2 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02490f00;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02490f00:
          bVar8 = false;
        }
        if (bVar8) {
          plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
          if (*(long *)(lVar6 + 0x10) == 0) {
            return 0;
          }
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE =
                 *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar7 + lVar1));
          }
          uVar5 = (*UNRECOVERED_JUMPTABLE)((long *)((long)plVar7 + lVar1),param_4);
          (**(code **)(*plVar7 + 0x60))(plVar7);
          return uVar5;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    return 0;
  }
  return 0;
}


