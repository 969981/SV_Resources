/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfa5b0; name: FUN_01cfa5b0
 */


void FUN_01cfa5b0(undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01cf7e20();
  param_1[3] = uVar1;
  if ((*param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = *(undefined8 *)(param_2 + 8);
    param_1[2] = uVar2;
    *param_1 = uVar1;
    return;
  }
  FUN_01cfa86c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  return;
}


