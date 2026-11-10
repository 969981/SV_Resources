/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293fc6c; name: FUN_0293fc6c
 */


void FUN_0293fc6c(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  
  bVar1 = FUN_02983784(param_1,*param_3,*(undefined8 *)(param_3 + 2));
  *param_2 = bVar1 & 1;
  return;
}


