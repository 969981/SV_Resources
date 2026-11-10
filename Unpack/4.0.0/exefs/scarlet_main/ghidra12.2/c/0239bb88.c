/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0239bb88; name: FUN_0239bb88
 */


void FUN_0239bb88(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
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
  FUN_00d334b4(param_1 + 4,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[6] = uVar2;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00c96b7c(param_1 + 7,param_2 + 0x18);
  *param_1 = &LAB_0239a09c;
  param_1[1] = &LAB_0239a0a4;
  param_1[2] = &LAB_0239a0a8;
  param_1[3] = &LAB_0239a198;
  return;
}


