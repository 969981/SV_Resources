/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027ec32c; name: FUN_027ec32c
 */


void FUN_027ec32c(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  
  FUN_0191e33c();
  *param_1 = &PTR_FUN_045e3788;
  param_1[4] = &PTR_LAB_045e3800;
  param_1[5] = &DAT_045e3850;
  uVar1 = *param_2;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((code *)param_3[3] != (code *)0x0) {
    (*(code *)param_3[3])(param_3 + 4,param_1 + 0xe);
    uVar2 = param_3[1];
    param_1[0xd] = param_3[3];
    uVar3 = param_3[2];
    param_1[10] = *param_3;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
    UNRECOVERED_JUMPTABLE = (code *)param_3[1];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      (*UNRECOVERED_JUMPTABLE)(param_3 + 4);
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  if ((code *)param_4[3] != (code *)0x0) {
    (*(code *)param_4[3])(param_4 + 4,param_1 + 0x1e);
    uVar2 = param_4[1];
    param_1[0x1d] = param_4[3];
    uVar3 = param_4[2];
    param_1[0x1a] = *param_4;
    param_1[0x1b] = uVar2;
    param_1[0x1c] = uVar3;
    UNRECOVERED_JUMPTABLE = (code *)param_4[1];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_4[2] = 0;
      param_4[3] = 0;
      *param_4 = 0;
      param_4[1] = 0;
      (*UNRECOVERED_JUMPTABLE)(param_4 + 4);
    }
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if ((code *)param_5[3] != (code *)0x0) {
    (*(code *)param_5[3])(param_5 + 4,param_1 + 0x2e);
    uVar2 = param_5[1];
    param_1[0x2d] = param_5[3];
    uVar3 = param_5[2];
    param_1[0x2a] = *param_5;
    param_1[0x2b] = uVar2;
    param_1[0x2c] = uVar3;
    UNRECOVERED_JUMPTABLE = (code *)param_5[1];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_5[2] = 0;
      param_5[3] = 0;
      *param_5 = 0;
      param_5[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x027ec4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_5 + 4);
      return;
    }
  }
  return;
}


