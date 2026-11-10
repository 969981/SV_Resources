/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033e80; name: _INIT_677
 */


void _INIT_677(void)

{
  if ((DAT_04871a28 & 1) == 0) {
    DAT_04871a18 = 0;
    DAT_04871a20 = 0;
    DAT_04871a08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871a08;
    DAT_04871a10 = &DAT_04642a98;
    DAT_04871a28 = 1;
  }
  return;
}


