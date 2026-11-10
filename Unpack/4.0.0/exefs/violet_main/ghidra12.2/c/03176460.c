/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176460; name: _INIT_1305
 */


void _INIT_1305(void)

{
  if ((DAT_0487ba70 & 1) == 0) {
    DAT_0487ba60 = 0;
    DAT_0487ba68 = 0;
    DAT_0487ba50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ba50;
    DAT_0487ba58 = &DAT_0468b838;
    DAT_0487ba70 = 1;
  }
  return;
}


