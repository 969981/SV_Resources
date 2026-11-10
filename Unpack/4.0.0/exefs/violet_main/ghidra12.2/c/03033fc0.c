/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033fc0; name: _INIT_681
 */


void _INIT_681(void)

{
  if ((DAT_04871ac8 & 1) == 0) {
    DAT_04871ab8 = 0;
    DAT_04871ac0 = 0;
    DAT_04871aa8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871aa8;
    DAT_04871ab0 = &DAT_04642e60;
    DAT_04871ac8 = 1;
  }
  return;
}


