/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b60cec; name: FUN_02b60cec
 */


bool FUN_02b60cec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x610);
  if (lVar1 == 0) {
    return false;
  }
  return *(long *)(lVar1 + 0x28) != *(long *)(lVar1 + 0x20);
}


