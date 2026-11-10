/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00339f04; name: FUN_00339f04
 */


long FUN_00339f04(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x58);
  if (param_2 != 0) {
    lVar1 = ((ulong)((int)lVar1 + 0xf) & 0xfffffff0) + param_2;
  }
  return lVar1 + 0x50;
}


