/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b7a9c; name: FUN_029b7a9c
 */


void FUN_029b7a9c(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_029b7d28();
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    FUN_029b7e18(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


