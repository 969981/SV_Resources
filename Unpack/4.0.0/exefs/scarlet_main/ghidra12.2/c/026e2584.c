/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e2584; name: FUN_026e2584
 */


void FUN_026e2584(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_02642a0c(param_1 + 4,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *param_1 = &LAB_026e27fc;
  param_1[1] = &LAB_026e280c;
  param_1[10] = uVar2;
  param_1[2] = &LAB_026e2894;
  param_1[3] = &LAB_026e2984;
  return;
}


