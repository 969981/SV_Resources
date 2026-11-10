/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f51324; name: FUN_01f51324
 */


void FUN_01f51324(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    FUN_00cbd7c0(param_1 + 4,param_2 + 0xc);
    *param_1 = 1;
  }
  return;
}


