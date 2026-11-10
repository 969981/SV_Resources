/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b9b5c; name: FUN_028b9b5c
 */


void FUN_028b9b5c(long param_1)

{
  undefined8 local_8;
  
  FUN_00db2500(param_1 + 0x28);
  local_8 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_028b9b94(&local_8);
  return;
}


