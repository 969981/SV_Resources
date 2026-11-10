/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002730c8; name: FUN_002730c8
 */


void FUN_002730c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  FUN_00271250(lVar1);
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


