/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03194f30; name: _INIT_1489
 */


void _INIT_1489(void)

{
  if ((DAT_0487da68 & 1) == 0) {
    DAT_0487da58 = 0;
    DAT_0487da60 = 0;
    DAT_0487da48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487da48;
    DAT_0487da50 = &DAT_04699288;
    DAT_0487da68 = 1;
  }
  return;
}


