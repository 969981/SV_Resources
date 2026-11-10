/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf2638; name: FUN_00cf2638
 */


long FUN_00cf2638(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar1 + 0xa8) == *(long *)(lVar1 + 0xa0)) {
    return *(long *)(*(long *)(lVar1 + 0xd8) + (param_2 & 0xff) * 0x20);
  }
  return *(long *)(lVar1 + 0xa0) + (param_2 & 0xff) * 0x20;
}


