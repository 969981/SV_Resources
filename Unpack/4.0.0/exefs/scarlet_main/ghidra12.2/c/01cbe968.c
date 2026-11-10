/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cbe968; name: FUN_01cbe968
 */


void FUN_01cbe968(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_01cbe9b4(&local_8);
    uVar1 = local_8;
  }
  local_8 = 0;
  *param_1 = uVar1;
  FUN_019a0174(&local_8);
  return;
}


