/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320f000; name: _INIT_1663
 */


void _INIT_1663(void)

{
  if ((DAT_04885240 & 1) == 0) {
    DAT_04885230 = 0;
    DAT_04885238 = 0;
    DAT_04885220 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885220;
    DAT_04885228 = &DAT_046a9f98;
    DAT_04885240 = 1;
  }
  return;
}


