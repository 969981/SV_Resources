/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0202b2b4; name: FUN_0202b2b4
 */


undefined4 FUN_0202b2b4(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x78) + 300);
}


