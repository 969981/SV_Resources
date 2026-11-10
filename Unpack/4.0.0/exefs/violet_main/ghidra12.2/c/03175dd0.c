/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175dd0; name: _INIT_1284
 */


void _INIT_1284(void)

{
  if ((DAT_0487b728 & 1) == 0) {
    DAT_0487b718 = 0;
    DAT_0487b720 = 0;
    DAT_0487b708 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b708;
    DAT_0487b710 = &DAT_04689ec0;
    DAT_0487b728 = 1;
  }
  return;
}


