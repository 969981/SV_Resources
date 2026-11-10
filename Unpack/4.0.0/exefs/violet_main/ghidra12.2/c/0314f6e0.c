/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f6e0; name: _INIT_1253
 */


void _INIT_1253(void)

{
  if ((DAT_0487a588 & 1) == 0) {
    DAT_0487a578 = 0;
    DAT_0487a580 = 0;
    DAT_0487a568 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a568;
    DAT_0487a570 = &DAT_04680420;
    DAT_0487a588 = 1;
  }
  return;
}


