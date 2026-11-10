/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f2df4; name: FUN_001f2df4
 */


bool FUN_001f2df4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) == 0) {
    lVar2 = FUN_001f914c();
    if (lVar2 - *(long *)(param_1 + 0x908) == *(long *)(param_1 + 0x910)) {
      bVar1 = (*(byte *)(param_1 + 0x9ab) & 0xc) == 0;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


