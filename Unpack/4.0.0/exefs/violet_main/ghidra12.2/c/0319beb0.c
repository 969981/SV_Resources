/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319beb0; name: _INIT_1513
 */


void _INIT_1513(void)

{
  if ((DAT_0487e420 & 1) == 0) {
    DAT_0487e410 = 0;
    DAT_0487e418 = 0;
    DAT_0487e400 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e400;
    DAT_0487e408 = &DAT_0469eca8;
    DAT_0487e420 = 1;
  }
  return;
}


