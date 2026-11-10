/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c060; name: _INIT_1452
 */


void _INIT_1452(void)

{
  if ((DAT_0487d168 & 1) == 0) {
    DAT_0487d158 = 0;
    DAT_0487d160 = 0;
    DAT_0487d148 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d148;
    DAT_0487d150 = &DAT_04694c00;
    DAT_0487d168 = 1;
  }
  return;
}


