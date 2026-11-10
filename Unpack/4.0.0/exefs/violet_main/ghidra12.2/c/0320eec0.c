/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320eec0; name: _INIT_1659
 */


void _INIT_1659(void)

{
  if ((DAT_048851a0 & 1) == 0) {
    DAT_04885190 = 0;
    DAT_04885198 = 0;
    DAT_04885180 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885180;
    DAT_04885188 = &DAT_046a9bd8;
    DAT_048851a0 = 1;
  }
  return;
}


