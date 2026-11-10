/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035dc0; name: _INIT_777
 */


void _INIT_777(void)

{
  if ((DAT_048729c8 & 1) == 0) {
    DAT_048729b8 = 0;
    DAT_048729c0 = 0;
    DAT_048729a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048729a8;
    DAT_048729b0 = &DAT_04648ee0;
    DAT_048729c8 = 1;
  }
  return;
}


