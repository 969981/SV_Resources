/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033570; name: _INIT_648
 */


void _INIT_648(void)

{
  if ((DAT_048715a0 & 1) == 0) {
    DAT_04871590 = 0;
    DAT_04871598 = 0;
    DAT_04871580 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871580;
    DAT_04871588 = &DAT_04640ef8;
    DAT_048715a0 = 1;
  }
  return;
}


