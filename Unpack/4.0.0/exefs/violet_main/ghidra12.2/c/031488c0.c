/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031488c0; name: _INIT_965
 */


void _INIT_965(void)

{
  if ((DAT_04877888 & 1) == 0) {
    DAT_04877878 = 0;
    DAT_04877880 = 0;
    DAT_04877868 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877868;
    DAT_04877870 = &DAT_0466ecf8;
    DAT_04877888 = 1;
  }
  return;
}


