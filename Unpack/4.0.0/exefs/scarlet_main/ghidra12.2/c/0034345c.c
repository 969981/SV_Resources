/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034345c; name: FUN_0034345c
 */


void FUN_0034345c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 extraout_w1;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  FUN_0038e500(1);
  *(undefined4 *)(param_1 + 4) = extraout_w1;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  param_1[5] = *param_1;
  return;
}


