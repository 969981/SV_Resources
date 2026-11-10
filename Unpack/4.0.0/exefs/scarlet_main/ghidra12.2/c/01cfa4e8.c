/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfa4e8; name: FUN_01cfa4e8
 */


void FUN_01cfa4e8(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == '\x01') {
    FUN_01cfa6b4(param_1,param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_01cfa668(param_1,*(undefined8 *)(param_2 + 8));
    return;
  }
  uVar1 = FUN_01cf7e20();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar1;
  return;
}


