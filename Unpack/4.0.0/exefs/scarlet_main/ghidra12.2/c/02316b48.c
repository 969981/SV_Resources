/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02316b48; name: FUN_02316b48
 */


void FUN_02316b48(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined4 *param_5)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long local_8;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      plVar6 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x02316b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,*param_5);
      return;
    }
  default:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
      return;
    }
    plVar6 = (long *)(*(long *)(param_2 + 8) + lVar1);
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x02316bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar6,*param_5);
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar7 == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
      return;
    }
    plVar6 = (long *)(lVar7 + lVar1 + -0x28);
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x02316c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar6,*param_5);
    return;
  case 3:
    break;
  }
  lVar7 = *(long *)(param_2 + 8);
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
        if (cVar4 != '\0') goto LAB_02316cfc;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02316cfc:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_8 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)(param_1,(long *)(local_8 + lVar1),*param_5);
          FUN_02315ee0(&local_8);
          return;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_02315ee0(&local_8);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


