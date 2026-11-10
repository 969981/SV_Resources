/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b1d0; name: _INIT_1078
 */


void _INIT_1078(void)

{
  if ((DAT_04878a30 & 1) == 0) {
    DAT_04878a20 = 0;
    DAT_04878a28 = 0;
    DAT_04878a10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878a10;
    DAT_04878a18 = &DAT_04675ca0;
    DAT_04878a30 = 1;
  }
  return;
}


