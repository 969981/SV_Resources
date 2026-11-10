/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9aa90; name: FUN_01d9aa90
 */


void FUN_01d9aa90(char *param_1,char *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == '\0') || (*param_1 == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  if ((*param_2 == '\0') || (*param_2 == '\x01')) {
    FUN_01d9af84(uVar1,*(undefined8 *)(param_2 + 8));
    return;
  }
  FUN_01d9af84(uVar1,0);
  return;
}


