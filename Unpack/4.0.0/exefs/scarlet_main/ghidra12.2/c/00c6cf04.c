/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6cf04; name: FUN_00c6cf04
 */


void FUN_00c6cf04(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 200) != 0) {
    FUN_00885458(*(long *)(param_1 + 200),param_2);
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    return;
  }
  FUN_00885458(*(long *)(param_1 + 0xd0),param_2);
  return;
}


