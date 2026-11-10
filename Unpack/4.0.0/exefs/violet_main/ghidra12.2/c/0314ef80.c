/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ef80; name: _INIT_1234
 */


void _INIT_1234(void)

{
  if ((DAT_0487a290 & 1) == 0) {
    DAT_0487a280 = 0;
    DAT_0487a288 = 0;
    DAT_0487a270 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a270;
    DAT_0487a278 = &DAT_0467f4d0;
    DAT_0487a290 = 1;
  }
  return;
}


