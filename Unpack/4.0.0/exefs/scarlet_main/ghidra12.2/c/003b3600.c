/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b3600; name: FUN_003b3600
 */


long FUN_003b3600(long param_1)

{
  long lVar1;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x5d0) == 0)) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x1b8);
  if (lVar1 != 0) {
    FUN_00485cf0(lVar1);
  }
  return lVar1;
}


