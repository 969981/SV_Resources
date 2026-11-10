/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324ae10; name: _INIT_1747
 */


void _INIT_1747(void)

{
  if ((DAT_048886f0 & 1) == 0) {
    DAT_048886e0 = 0;
    DAT_048886e8 = 0;
    DAT_048886d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048886d0;
    DAT_048886d8 = &DAT_046bb370;
    DAT_048886f0 = 1;
  }
  return;
}


