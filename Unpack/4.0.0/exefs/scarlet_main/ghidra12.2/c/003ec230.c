/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec230; name: FUN_003ec230
 */


void FUN_003ec230(long param_1,int param_2)

{
  if ((param_2 == 0) || (*(int *)(param_1 + 8) == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}


