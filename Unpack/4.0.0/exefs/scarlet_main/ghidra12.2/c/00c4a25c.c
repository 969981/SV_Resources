/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4a25c; name: FUN_00c4a25c
 */


void FUN_00c4a25c(undefined8 *param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)param_1[1];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 4);
  }
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,param_1 + 4);
    uVar1 = param_2[1];
    param_1[3] = param_2[3];
    uVar2 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    UNRECOVERED_JUMPTABLE = (code *)param_2[1];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00c4a2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2 + 4);
      return;
    }
  }
  return;
}


