/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c77cc; name: FUN_001c77cc
 */


void FUN_001c77cc(long param_1)

{
  if ((*(long **)(param_1 + 0x530) == (long *)0x0) || (**(long **)(param_1 + 0x530) == 0)) {
    FUN_001c76b8(param_1);
    return;
  }
  FUN_001fabf4();
  *(byte *)(param_1 + 0x538) = *(byte *)(param_1 + 0x538) | 1;
  FUN_001c7744(param_1 + 0x510);
  return;
}


