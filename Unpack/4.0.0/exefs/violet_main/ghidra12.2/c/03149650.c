/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149650; name: _INIT_1008
 */


void _INIT_1008(void)

{
  if ((DAT_04877f40 & 1) == 0) {
    DAT_04877f30 = 0;
    DAT_04877f38 = 0;
    DAT_04877f20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877f20;
    DAT_04877f28 = &DAT_046719f8;
    DAT_04877f40 = 1;
  }
  return;
}


