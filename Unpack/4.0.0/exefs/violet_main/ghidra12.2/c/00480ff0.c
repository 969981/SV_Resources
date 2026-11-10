/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00480ff0; name: FUN_00480ff0
 */


void FUN_00480ff0(void)

{
  long lVar1;
  
  lVar1 = FUN_0049e5d0(&DAT_047f3bb8);
  if (lVar1 == 0) {
    return;
  }
  FUN_0049e5f0(&DAT_047f3bb8,0);
  FUN_00481030(lVar1);
  return;
}


