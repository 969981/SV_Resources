/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314eb20; name: _INIT_1220
 */


void _INIT_1220(void)

{
  if ((DAT_0487a060 & 1) == 0) {
    DAT_0487a050 = 0;
    DAT_0487a058 = 0;
    DAT_0487a040 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a040;
    DAT_0487a048 = &DAT_0467e598;
    DAT_0487a060 = 1;
  }
  return;
}


