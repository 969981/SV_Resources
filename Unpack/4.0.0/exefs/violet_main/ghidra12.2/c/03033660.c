/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033660; name: _INIT_651
 */


void _INIT_651(void)

{
  if ((DAT_04871618 & 1) == 0) {
    DAT_04871608 = 0;
    DAT_04871610 = 0;
    DAT_048715f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048715f8;
    DAT_04871600 = &DAT_046411f0;
    DAT_04871618 = 1;
  }
  return;
}


