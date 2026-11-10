/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0256e980; name: FUN_0256e980
 */


void FUN_0256e980(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE_00,ulong param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9)

{
  long *plVar1;
  
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0x8000000000000000;
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0256ea20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_6,plVar1,*param_5,*param_7,*param_8,*param_9);
    return;
  }
  if (*param_2 != '\0') {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0256e9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(*param_6,plVar1,*param_5,*param_7,*param_8,*param_9);
  return;
}


