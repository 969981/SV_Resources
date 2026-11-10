/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078e568; name: FUN_0078e568
 */


void FUN_0078e568(int *param_1,void *param_2)

{
  if (*param_1 != 5) {
    FUN_0078e5ac(param_1);
    *param_1 = 5;
  }
  memcpy(param_2,param_1 + 6,0x10);
  return;
}


