/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b4510; name: FUN_003b4510
 */


long FUN_003b4510(long param_1)

{
  long lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(long *)(param_1 + 0x128), lVar1 == 0 &&
      ((*(long *)(param_1 + 0x660) == 0 ||
       (lVar1 = *(long *)(*(long *)(param_1 + 0x660) + 0x10), lVar1 == 0)))))) {
    return 0;
  }
  return lVar1;
}


