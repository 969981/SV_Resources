/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0321e850; name: _INIT_1667
 */


void _INIT_1667(void)

{
  if ((DAT_048852b8 & 1) == 0) {
    DAT_048852a8 = 0;
    DAT_048852b0 = 0;
    DAT_04885298 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885298;
    DAT_048852a0 = &DAT_046aa420;
    DAT_048852b8 = 1;
  }
  return;
}


