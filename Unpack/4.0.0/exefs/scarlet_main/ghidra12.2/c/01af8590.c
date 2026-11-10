/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af8590; name: FUN_01af8590
 */


void FUN_01af8590(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_01af86c4(&local_8);
    uVar1 = local_8;
  }
  local_8 = 0;
  *param_1 = uVar1;
  FUN_0169eca0(&local_8);
  return;
}


