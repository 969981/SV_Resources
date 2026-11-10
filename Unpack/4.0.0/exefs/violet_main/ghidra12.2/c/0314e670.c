/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e670; name: _INIT_1205
 */


void _INIT_1205(void)

{
  if ((DAT_04879e08 & 1) == 0) {
    DAT_04879df8 = 0;
    DAT_04879e00 = 0;
    DAT_04879de8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879de8;
    DAT_04879df0 = &DAT_0467d580;
    DAT_04879e08 = 1;
  }
  return;
}


