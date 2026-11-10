/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023170d8; name: FUN_023170d8
 */


void FUN_023170d8(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 param_4,
                 undefined8 param_5,char *param_6,undefined4 *param_7)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_18;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
        }
                    /* WARNING: Could not recover jumptable at 0x02317130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(plVar6,param_4,param_5,*param_6,*param_7);
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 == 0)) {
        return;
      }
      plVar6 = (long *)(lVar7 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x02317190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar6,param_4,param_5,*param_6,*param_7);
      return;
    case 3:
      lVar7 = *(long *)(param_1 + 8);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar8) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_023171fc;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_023171fc:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar7 + 0x10) != 0) {
              local_18 = *(long *)(lVar7 + 0x10) + -0x28;
              if ((param_3 & 1) != 0) {
                UNRECOVERED_JUMPTABLE_00 =
                     *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_18 + lVar1));
              }
              (*UNRECOVERED_JUMPTABLE_00)
                        ((long *)(local_18 + lVar1),param_4,param_5,*param_6 != '\0',*param_7);
              goto LAB_023171b0;
            }
            break;
          }
          sVar8 = sVar3;
        } while (sVar3 != 0);
      }
      local_18 = 0;
LAB_023171b0:
      FUN_02315ee0(&local_18);
      return;
    }
  }
  return;
}


