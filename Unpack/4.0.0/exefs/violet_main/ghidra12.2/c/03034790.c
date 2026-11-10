/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034790; name: _INIT_706
 */


void _INIT_706(void)

{
  if ((DAT_04871eb0 & 1) == 0) {
    DAT_04871ea0 = 0;
    DAT_04871ea8 = 0;
    DAT_04871e90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871e90;
    DAT_04871e98 = &DAT_046446f8;
    DAT_04871eb0 = 1;
  }
  return;
}


