/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003c3a20; name: FUN_003c3a20
 */


bool FUN_003c3a20(long param_1)

{
  if (((*(int *)(param_1 + 0x7d8) == 1) && (*(int *)(param_1 + 0x38) != 0)) &&
     (*(int *)(param_1 + 0x5c) == 0x2e)) {
    return *(int *)(param_1 + 0x5a0) != 2;
  }
  return false;
}


