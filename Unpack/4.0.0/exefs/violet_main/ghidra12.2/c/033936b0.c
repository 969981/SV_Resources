/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033936b0; name: _INIT_2065
 */


void _INIT_2065(void)

{
  if ((DAT_0488e068 & 1) == 0) {
    DAT_0488e058 = 0;
    DAT_0488e060 = 0;
    DAT_0488e048 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e048;
    DAT_0488e050 = &DAT_047b2ce8;
    DAT_0488e068 = 1;
  }
  return;
}


