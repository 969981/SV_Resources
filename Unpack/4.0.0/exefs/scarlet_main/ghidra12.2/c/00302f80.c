/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00302f80; name: FUN_00302f80
 */


undefined8 FUN_00302f80(long *param_1,long param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return 1;
}


