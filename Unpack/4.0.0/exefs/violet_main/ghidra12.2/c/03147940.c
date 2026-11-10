/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147940; name: _INIT_938
 */


void _INIT_938(void)

{
  if ((DAT_04877450 & 1) == 0) {
    DAT_04877440 = 0;
    DAT_04877448 = 0;
    DAT_04877430 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877430;
    DAT_04877438 = &DAT_0466d3e0;
    DAT_04877450 = 1;
  }
  return;
}


