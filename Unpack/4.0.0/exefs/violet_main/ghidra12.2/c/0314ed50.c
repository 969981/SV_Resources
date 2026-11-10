/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ed50; name: _INIT_1227
 */


void _INIT_1227(void)

{
  if ((DAT_0487a178 & 1) == 0) {
    DAT_0487a168 = 0;
    DAT_0487a170 = 0;
    DAT_0487a158 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a158;
    DAT_0487a160 = &DAT_0467ece8;
    DAT_0487a178 = 1;
  }
  return;
}


