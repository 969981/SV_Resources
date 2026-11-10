/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199e680; name: thunk_FUN_0011f610
 */


void thunk_FUN_0011f610(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + -2) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x0011f62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -0x10))(param_1 - (ulong)*(byte *)(param_1 + -1));
    return;
  }
  free((void *)(param_1 - (ulong)*(byte *)(param_1 + -1)));
  return;
}


