/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019137f0; name: FUN_019137f0
 */


void FUN_019137f0(void)

{
  long lVar1;
  
  if (DAT_0485e9f8 != 0) {
    FUN_027896dc();
    lVar1 = DAT_0485e9f8;
    DAT_0485e9f8 = 0;
    if (lVar1 != 0) {
      FUN_018fe510(&DAT_0485ea00);
      return;
    }
  }
  return;
}


