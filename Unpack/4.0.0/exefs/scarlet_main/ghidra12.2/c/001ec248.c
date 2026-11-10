/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ec248; name: FUN_001ec248
 */


void FUN_001ec248(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_001ec308(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_001ec308(param_1);
  return;
}


