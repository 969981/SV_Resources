/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c1f0; name: _INIT_1457
 */


void _INIT_1457(void)

{
  if ((DAT_0487d230 & 1) == 0) {
    DAT_0487d220 = 0;
    DAT_0487d228 = 0;
    DAT_0487d210 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d210;
    DAT_0487d218 = &DAT_04695148;
    DAT_0487d230 = 1;
  }
  return;
}


