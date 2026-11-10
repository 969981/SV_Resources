/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01155f84; name: FUN_01155f84
 */


void FUN_01155f84(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_01e266fc();
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    FUN_01e267e4(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


