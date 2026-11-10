/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0201e294; name: FUN_0201e294
 */


void FUN_0201e294(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x548) = param_2;
  }
  return;
}


