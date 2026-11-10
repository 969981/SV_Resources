/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02670310; name: FUN_02670310
 */


void FUN_02670310(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined4 *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x02670354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,*param_5);
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
    plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x026703c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar2,*param_5);
    return;
  case 2:
    break;
  case 3:
    FUN_0267003c(&local_38,param_2 + 8);
    if (local_38 == 0) {
      FUN_0266fe08(&local_38);
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
    }
    else {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_38 + lVar1));
      }
      (*UNRECOVERED_JUMPTABLE)(param_1,(long *)(local_38 + lVar1),*param_5);
      FUN_0266fe08(&local_38);
    }
    return;
  }
  if ((*(long *)(param_2 + 8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  plVar2 = (long *)(lVar3 + lVar1 + -0x28);
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x02670414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,*param_5);
  return;
}


