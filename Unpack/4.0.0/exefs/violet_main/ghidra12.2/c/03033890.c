/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033890; name: _INIT_658
 */


void _INIT_658(void)

{
  if ((DAT_04871730 & 1) == 0) {
    DAT_04871720 = 0;
    DAT_04871728 = 0;
    DAT_04871710 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871710;
    DAT_04871718 = &DAT_04641738;
    DAT_04871730 = 1;
  }
  return;
}


