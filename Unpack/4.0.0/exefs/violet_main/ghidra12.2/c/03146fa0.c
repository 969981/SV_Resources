/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146fa0; name: _INIT_917
 */


void _INIT_917(void)

{
  if ((DAT_04877108 & 1) == 0) {
    DAT_048770f8 = 0;
    DAT_04877100 = 0;
    DAT_048770e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048770e8;
    DAT_048770f0 = &DAT_0466c078;
    DAT_04877108 = 1;
  }
  return;
}


