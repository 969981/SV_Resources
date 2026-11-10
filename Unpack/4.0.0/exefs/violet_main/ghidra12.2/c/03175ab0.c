/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175ab0; name: _INIT_1274
 */


void _INIT_1274(void)

{
  if ((DAT_0487b598 & 1) == 0) {
    DAT_0487b588 = 0;
    DAT_0487b590 = 0;
    DAT_0487b578 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b578;
    DAT_0487b580 = &DAT_04689428;
    DAT_0487b598 = 1;
  }
  return;
}


