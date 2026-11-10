/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025db75c; name: FUN_025db75c
 */


void FUN_025db75c(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
        }
                    /* WARNING: Could not recover jumptable at 0x025db7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(plVar6,param_4,*param_5);
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 == 0)) {
        return;
      }
      plVar6 = (long *)(lVar5 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x025db7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar6,param_4,*param_5);
      return;
    case 3:
      lVar5 = *(long *)(param_1 + 8);
      if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar5 + 0x1a);
        sVar8 = *(short *)(lVar5 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar8) {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_025db854;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_025db854:
            bVar7 = false;
          }
          if (bVar7) {
            plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
            if (*(long *)(lVar5 + 0x10) == 0) {
              return;
            }
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE_00 =
                   *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)((long)plVar6 + lVar1));
            }
            (*UNRECOVERED_JUMPTABLE_00)((long *)((long)plVar6 + lVar1),param_4,*param_5);
                    /* WARNING: Could not recover jumptable at 0x025db8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x60))(plVar6);
            return;
          }
          sVar8 = sVar3;
        } while (sVar3 != 0);
      }
      return;
    }
  }
  return;
}


