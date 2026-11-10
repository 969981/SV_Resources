/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033610; name: _INIT_650
 */


void _INIT_650(void)

{
  if ((DAT_048715f0 & 1) == 0) {
    DAT_048715e0 = 0;
    DAT_048715e8 = 0;
    DAT_048715d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048715d0;
    DAT_048715d8 = &DAT_046410f8;
    DAT_048715f0 = 1;
  }
  return;
}


