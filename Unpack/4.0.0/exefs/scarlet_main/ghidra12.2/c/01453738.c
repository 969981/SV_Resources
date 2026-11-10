/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01453738; name: FUN_01453738
 */


void FUN_01453738(long param_1,ushort param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 < 0x86) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x78) + (ulong)param_2 * 8 + 8);
    if (lVar1 != 0) {
      FUN_01453760(lVar1,param_3);
      return;
    }
  }
  return;
}


