/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297d7c8; name: FUN_0297d7c8
 */


bool FUN_0297d7c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  if ((*(byte *)(lVar1 + 0x499) >> 2 & 1) == 0) {
    return *(uint *)(lVar1 + 0x30) < 2;
  }
  return false;
}


