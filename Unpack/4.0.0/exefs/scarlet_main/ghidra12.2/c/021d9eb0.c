/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d9eb0; name: FUN_021d9eb0
 */


void FUN_021d9eb0(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(long *)(param_1 + 0x30) = 0;
  }
  return;
}


