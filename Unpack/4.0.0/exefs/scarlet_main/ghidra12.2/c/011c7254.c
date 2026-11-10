/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c7254; name: FUN_011c7254
 */


void FUN_011c7254(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  if ((code *)param_3[3] != (code *)0x0) {
    (*(code *)param_3[3])(param_3 + 4,param_1 + 8);
    uVar2 = param_3[1];
    param_1[7] = param_3[3];
    uVar3 = param_3[2];
    param_1[4] = *param_3;
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    UNRECOVERED_JUMPTABLE = (code *)param_3[1];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x011c7310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3 + 4);
      return;
    }
  }
  return;
}


