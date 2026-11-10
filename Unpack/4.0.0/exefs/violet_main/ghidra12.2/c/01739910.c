/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01739910; name: FUN_01739910
 */


bool FUN_01739910(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_047d0a08;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0xb8) == 0)) {
    return false;
  }
  return *(long *)(lVar1 + 0xb8) == *(long *)(lVar1 + 0xc0);
}


