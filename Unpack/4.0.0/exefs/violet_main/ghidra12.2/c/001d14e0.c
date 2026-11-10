/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d14e0; name: FUN_001d14e0
 */


void FUN_001d14e0(long param_1,byte param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0xe0);
    if ((lVar1 != 0) || (lVar1 = *(long *)(param_1 + 0xd8), lVar1 != 0)) {
      *(byte *)(lVar1 + 0x1e0) = param_2 & 1;
    }
  }
  return;
}


