/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00515df0; name: FUN_00515df0
 */


long FUN_00515df0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(param_1 + 0x18);
  return lVar1 / 1000000 + *(long *)(param_1 + 0x10) * 1000 +
         (ulong)(lVar1 < -999999 && 0 < lVar1 % 1000000);
}


