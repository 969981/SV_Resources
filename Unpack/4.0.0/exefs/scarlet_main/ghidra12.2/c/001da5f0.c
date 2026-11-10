/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001da5f0; name: FUN_001da5f0
 */


undefined8 FUN_001da5f0(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x3ff) >> 2 & 1) == 0) {
    if ((((*(byte *)(param_2 + 0x66c) >> 2 & 1) != 0) ||
        (*(long **)(param_2 + 0x4a8) == (long *)0x0)) || (**(long **)(param_2 + 0x4a8) != param_1))
    {
      return 0;
    }
    *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) | 4;
  }
  return 1;
}


