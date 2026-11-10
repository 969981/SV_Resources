/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012af664; name: FUN_012af664
 */


void FUN_012af664(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar2;
  uVar1 = *(undefined1 *)(param_2 + 4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = uVar1;
  param_1[9] = 0;
  if ((code *)param_2[9] != (code *)0x0) {
    (*(code *)param_2[9])(param_2 + 10,param_1 + 10);
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_1[9] = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = uVar3;
    param_1[8] = uVar4;
    param_1[6] = uVar2;
    UNRECOVERED_JUMPTABLE = (code *)param_2[7];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      (*UNRECOVERED_JUMPTABLE)(param_2 + 10);
    }
  }
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  if ((code *)param_2[0x19] != (code *)0x0) {
    (*(code *)param_2[0x19])(param_2 + 0x1a,param_1 + 0x1a);
    uVar2 = param_2[0x16];
    uVar3 = param_2[0x17];
    param_1[0x19] = param_2[0x19];
    uVar4 = param_2[0x18];
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar4;
    param_1[0x16] = uVar2;
    UNRECOVERED_JUMPTABLE = (code *)param_2[0x17];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      (*UNRECOVERED_JUMPTABLE)(param_2 + 0x1a);
    }
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if ((code *)param_2[0x29] != (code *)0x0) {
    (*(code *)param_2[0x29])(param_2 + 0x2a,param_1 + 0x2a);
    uVar2 = param_2[0x27];
    param_1[0x29] = param_2[0x29];
    uVar3 = param_2[0x28];
    param_1[0x26] = param_2[0x26];
    param_1[0x27] = uVar2;
    param_1[0x28] = uVar3;
    UNRECOVERED_JUMPTABLE = (code *)param_2[0x27];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_2[0x28] = 0;
      param_2[0x29] = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      (*UNRECOVERED_JUMPTABLE)(param_2 + 0x2a);
    }
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if ((code *)param_2[0x39] != (code *)0x0) {
    (*(code *)param_2[0x39])(param_2 + 0x3a,param_1 + 0x3a);
    uVar2 = param_2[0x37];
    param_1[0x39] = param_2[0x39];
    uVar3 = param_2[0x38];
    param_1[0x36] = param_2[0x36];
    param_1[0x37] = uVar2;
    param_1[0x38] = uVar3;
    UNRECOVERED_JUMPTABLE = (code *)param_2[0x37];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_2[0x38] = 0;
      param_2[0x39] = 0;
      param_2[0x36] = 0;
      param_2[0x37] = 0;
      (*UNRECOVERED_JUMPTABLE)(param_2 + 0x3a);
    }
  }
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  if ((code *)param_2[0x49] != (code *)0x0) {
    (*(code *)param_2[0x49])(param_2 + 0x4a,param_1 + 0x4a);
    uVar2 = param_2[0x47];
    param_1[0x49] = param_2[0x49];
    uVar3 = param_2[0x48];
    param_1[0x46] = param_2[0x46];
    param_1[0x47] = uVar2;
    param_1[0x48] = uVar3;
    UNRECOVERED_JUMPTABLE = (code *)param_2[0x47];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_2[0x48] = 0;
      param_2[0x49] = 0;
      param_2[0x46] = 0;
      param_2[0x47] = 0;
                    /* WARNING: Could not recover jumptable at 0x012af850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2 + 0x4a);
      return;
    }
  }
  return;
}


