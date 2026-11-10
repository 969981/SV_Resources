/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035c80; name: _INIT_773
 */


void _INIT_773(void)

{
  if ((DAT_04872928 & 1) == 0) {
    DAT_04872918 = 0;
    DAT_04872920 = 0;
    DAT_04872908 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872908;
    DAT_04872910 = &DAT_04648a80;
    DAT_04872928 = 1;
  }
  return;
}


