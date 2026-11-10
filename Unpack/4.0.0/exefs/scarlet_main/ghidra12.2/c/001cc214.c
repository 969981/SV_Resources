/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cc214; name: FUN_001cc214
 */


void FUN_001cc214(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_001ed3c8();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_001ec308(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


