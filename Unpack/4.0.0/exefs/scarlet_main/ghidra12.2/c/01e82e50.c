/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e82e50; name: FUN_01e82e50
 */


void FUN_01e82e50(undefined8 *param_1,long param_2)

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
  FUN_01e79f5c(param_1 + 4,param_2);
  param_1[5] = *(undefined8 *)(param_2 + 8);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  param_1[7] = *(undefined8 *)(param_2 + 0x18);
  param_1[8] = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *param_1 = FUN_01e82ee8;
  param_1[1] = FUN_01e83584;
  param_1[9] = uVar2;
  param_1[2] = &LAB_01e849c0;
  param_1[3] = &LAB_01e84a2c;
  return;
}


