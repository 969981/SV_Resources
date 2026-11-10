/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019941f0; name: FUN_019941f0
 */


bool FUN_019941f0(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_017f6f98();
  bVar1 = false;
  if (lVar2 != 0) {
    bVar1 = *(long *)(lVar2 + 0x38) != 0;
  }
  return bVar1;
}


