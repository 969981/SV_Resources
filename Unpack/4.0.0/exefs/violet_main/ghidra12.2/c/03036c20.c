/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036c20; name: _INIT_817
 */


void _INIT_817(void)

{
  if ((DAT_04873008 & 1) == 0) {
    DAT_04872ff8 = 0;
    DAT_04873000 = 0;
    DAT_04872fe8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872fe8;
    DAT_04872ff0 = &DAT_0464b890;
    DAT_04873008 = 1;
  }
  return;
}


