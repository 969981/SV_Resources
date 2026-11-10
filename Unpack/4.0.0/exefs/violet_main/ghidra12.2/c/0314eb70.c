/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314eb70; name: _INIT_1221
 */


void _INIT_1221(void)

{
  if ((DAT_0487a088 & 1) == 0) {
    DAT_0487a078 = 0;
    DAT_0487a080 = 0;
    DAT_0487a068 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a068;
    DAT_0487a070 = &DAT_0467e678;
    DAT_0487a088 = 1;
  }
  return;
}


