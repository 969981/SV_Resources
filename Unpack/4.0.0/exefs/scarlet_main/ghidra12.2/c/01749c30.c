/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01749c30; name: FUN_01749c30
 */


undefined8
FUN_01749c30(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long local_28;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 == 0)) {
      return 0;
    }
    plVar3 = (long *)(lVar5 + lVar1 + -0x28);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x01749cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,plVar3,param_4,*param_6);
    return uVar4;
  }
  if (cVar2 == '\x03') {
    FUN_026170c4(&local_28,param_1 + 8);
    if (local_28 == 0) {
      uVar4 = 0;
    }
    else {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_28 + lVar1));
      }
      uVar4 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,(long *)(local_28 + lVar1),param_4,*param_6);
    }
    FUN_017a7f80(&local_28);
    return uVar4;
  }
  if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
    return 0;
  }
  plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x01749c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,plVar3,param_4,*param_6);
  return uVar4;
}


