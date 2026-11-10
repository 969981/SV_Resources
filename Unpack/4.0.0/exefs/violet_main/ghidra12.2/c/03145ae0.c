/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145ae0; name: _INIT_866
 */


void _INIT_866(void)

{
  if ((DAT_04876910 & 1) == 0) {
    DAT_04876900 = 0;
    DAT_04876908 = 0;
    DAT_048768f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048768f0;
    DAT_048768f8 = &DAT_04669110;
    DAT_04876910 = 1;
  }
  return;
}


