/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184c838; name: FUN_0184c838
 */


void FUN_0184c838(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_1[4] = uVar4;
  param_1[5] = param_2[1];
  uVar4 = param_2[2];
  param_2[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = uVar4;
  param_1[7] = 0;
  uVar4 = param_2[6];
  uVar1 = param_2[7];
  uVar2 = param_2[9];
  param_1[0xc] = param_2[8];
  param_1[0xd] = uVar2;
  param_1[10] = uVar4;
  param_1[0xb] = uVar1;
  param_1[7] = param_2[3];
  param_1[8] = param_2[4];
  param_1[9] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *param_1 = &LAB_017abf9c;
  param_1[1] = &LAB_021eacf4;
  param_1[2] = FUN_021eb710;
  param_1[3] = &LAB_02b6f0ec;
  return;
}


