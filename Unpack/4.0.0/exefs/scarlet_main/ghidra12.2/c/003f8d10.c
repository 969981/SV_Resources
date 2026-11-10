/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f8d10; name: FUN_003f8d10
 */


undefined8 FUN_003f8d10(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x28);
  }
  if (*param_1 == 0) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x30);
  }
  return 0;
}


