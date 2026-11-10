/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149290; name: _INIT_996
 */


void _INIT_996(void)

{
  if ((DAT_04877d60 & 1) == 0) {
    DAT_04877d50 = 0;
    DAT_04877d58 = 0;
    DAT_04877d40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877d40;
    DAT_04877d48 = &DAT_04670d10;
    DAT_04877d60 = 1;
  }
  return;
}


