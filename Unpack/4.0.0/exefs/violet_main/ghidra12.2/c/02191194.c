/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02191194; name: FUN_02191194
 */


long FUN_02191194(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x300) == 0) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x300) + 0x10);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x28;
  }
  return lVar1;
}


