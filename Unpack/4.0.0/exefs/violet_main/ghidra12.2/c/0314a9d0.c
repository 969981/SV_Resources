/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a9d0; name: _INIT_1058
 */


void _INIT_1058(void)

{
  if ((DAT_04878710 & 1) == 0) {
    DAT_04878700 = 0;
    DAT_04878708 = 0;
    DAT_048786f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048786f0;
    DAT_048786f8 = &DAT_04674b70;
    DAT_04878710 = 1;
  }
  return;
}


