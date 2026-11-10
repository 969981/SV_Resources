/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149b00; name: _INIT_1023
 */


void _INIT_1023(void)

{
  if ((DAT_04878198 & 1) == 0) {
    DAT_04878188 = 0;
    DAT_04878190 = 0;
    DAT_04878178 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878178;
    DAT_04878180 = &DAT_046729f0;
    DAT_04878198 = 1;
  }
  return;
}


