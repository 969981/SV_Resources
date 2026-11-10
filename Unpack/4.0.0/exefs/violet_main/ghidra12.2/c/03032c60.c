/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032c60; name: _INIT_619
 */


void _INIT_619(void)

{
  if ((DAT_04871118 & 1) == 0) {
    DAT_04871108 = 0;
    DAT_04871110 = 0;
    DAT_048710f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048710f8;
    DAT_04871100 = &DAT_0463f578;
    DAT_04871118 = 1;
  }
  return;
}


