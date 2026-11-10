/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a77a8; name: FUN_024a77a8
 */


long FUN_024a77a8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xb) {
    lVar1 = param_1;
  }
  else {
    lVar1 = FUN_024a77f8(param_2);
  }
  FUN_024a7830(*(long *)(param_1 + 0xf8),
               *(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x100) * 0x18,lVar1);
  return lVar1;
}


