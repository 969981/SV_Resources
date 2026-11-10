/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fa694; name: FUN_001fa694
 */


void FUN_001fa694(long param_1)

{
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
  if (*(undefined **)(param_1 + 0x1c0) == PTR_FUN_047cba28) {
    return;
  }
  FUN_001faa08(param_1);
  return;
}


