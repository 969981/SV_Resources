/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb7ac4; name: FUN_01eb7ac4
 */


void FUN_01eb7ac4(undefined8 *param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x01eb7b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2 + 4);
      return;
    }
  }
  return;
}


