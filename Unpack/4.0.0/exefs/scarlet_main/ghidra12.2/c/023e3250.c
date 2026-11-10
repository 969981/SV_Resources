/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023e3250; name: FUN_023e3250
 */


void FUN_023e3250(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  uVar3 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar3;
  uVar3 = param_2[2];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = uVar3;
  FUN_00c43ef0(param_1 + 7,param_2 + 3);
  param_1[9] = param_2[5];
  param_1[10] = param_2[6];
  param_1[0xb] = param_2[7];
  plVar1 = (long *)param_2[8];
  param_1[0xc] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  uVar3 = param_2[10];
  param_1[0xd] = param_2[9];
  param_1[0xe] = uVar3;
  *param_1 = thunk_FUN_023e331c;
  param_1[1] = FUN_023e3364;
  param_1[2] = &LAB_023e3fec;
  param_1[3] = &LAB_023e4074;
  return;
}


