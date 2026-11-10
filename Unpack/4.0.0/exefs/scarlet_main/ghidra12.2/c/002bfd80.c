/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bfd80; name: FUN_002bfd80
 */


void FUN_002bfd80(long param_1)

{
  if (*(long *)(param_1 + 0xa0) == 0) {
    return;
  }
  FUN_0036f390(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18));
  return;
}


