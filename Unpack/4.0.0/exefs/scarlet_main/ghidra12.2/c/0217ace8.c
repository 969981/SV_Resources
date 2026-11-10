/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0217ace8; name: FUN_0217ace8
 */


void FUN_0217ace8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = (code *)param_1[1];
  if (pcVar3 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar3)(param_1 + 4);
  }
  uVar4 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar4;
  param_1[6] = param_2[2];
  uVar4 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = param_2[6];
  param_1[9] = param_2[5];
  param_1[10] = uVar2;
  param_1[7] = uVar4;
  param_1[8] = uVar1;
  uVar4 = param_2[7];
  param_1[0xd] = 0;
  param_1[0xb] = uVar4;
  param_1[0xc] = 0;
  FUN_01161be4(param_1 + 0xc,param_2 + 8);
  uVar4 = param_2[0xb];
  param_1[0xe] = param_2[10];
  param_1[0xf] = uVar4;
  *param_1 = thunk_FUN_0217ade0;
  param_1[1] = FUN_0217ae28;
  param_1[2] = &LAB_0217f6f4;
  param_1[3] = &LAB_0217f758;
  return;
}


