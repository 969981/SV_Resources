/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275740c; name: FUN_0275740c
 */


void FUN_0275740c(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_02758020();
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    FUN_0275810c(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


