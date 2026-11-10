/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e5f3c; name: FUN_014e5f3c
 */


undefined1 FUN_014e5f3c(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x21) {
    uVar1 = param_2;
  }
  return *(undefined1 *)(param_1 + (ulong)uVar1 + 0x572);
}


