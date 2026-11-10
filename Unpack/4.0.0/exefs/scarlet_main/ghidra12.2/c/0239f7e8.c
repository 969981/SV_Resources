/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0239f7e8; name: FUN_0239f7e8
 */


void FUN_0239f7e8(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = uVar2;
  param_1[9] = 0;
  param_1[4] = uVar4;
  param_1[5] = uVar1;
  param_1[8] = 0;
  FUN_00d334b4(param_1 + 8,param_2 + 4);
  uVar4 = param_2[6];
  param_2[6] = 0;
  param_1[10] = uVar4;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  FUN_00c96b7c(param_1 + 0xb,param_2 + 7);
  *param_1 = &LAB_0239fb38;
  param_1[1] = &LAB_0239fb40;
  param_1[2] = &LAB_0239fb48;
  param_1[3] = &LAB_0239fc4c;
  return;
}


