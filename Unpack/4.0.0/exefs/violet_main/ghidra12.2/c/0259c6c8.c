/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259c6c8; name: FUN_0259c6c8
 */


void FUN_0259c6c8(undefined8 *param_1)

{
  int iVar1;
  
  if ((DAT_04841a30 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04841a30);
    if (iVar1 != 0) {
      DAT_048419d0 = 0;
      DAT_048419e0 = 0;
      DAT_048419f0 = 0;
      DAT_048419f8 = 0;
      DAT_04841a20 = 0;
      DAT_048419e4 = 1;
      DAT_04841a00 = 0;
      DAT_04841a08 = 0;
      DAT_04841a10 = 0;
      DAT_04841a18 = 0;
      __cxa_guard_release(&DAT_04841a30);
    }
  }
  DAT_048419f8 = param_1[1];
  DAT_048419f0 = *param_1;
  return;
}


