/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031af0; name: _INIT_563
 */


void _INIT_563(void)

{
  if ((DAT_04870868 & 1) == 0) {
    DAT_04870858 = 0;
    DAT_04870860 = 0;
    DAT_04870848 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870848;
    DAT_04870850 = &DAT_0463bef8;
    DAT_04870868 = 1;
  }
  return;
}


