/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f3c90; name: FUN_021f3c90
 */


uint FUN_021f3c90(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e97b78(*(undefined8 *)(param_1 + 0x70));
  if (iVar1 - 1U < 0x17) {
    return 0x5bca51U >> (ulong)(iVar1 - 1U & 0x1f) & 1;
  }
  return 0;
}


