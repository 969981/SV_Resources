/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4570; name: FUN_001f4570
 */


bool FUN_001f4570(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 8);
  if (lVar1 == 0) {
    return false;
  }
  return *(long *)(lVar1 + 0x20) != *(long *)(lVar1 + 0x18);
}


