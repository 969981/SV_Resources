/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bb40; name: _INIT_1502
 */


void _INIT_1502(void)

{
  if ((DAT_0487e268 & 1) == 0) {
    DAT_0487e258 = 0;
    DAT_0487e260 = 0;
    DAT_0487e248 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e248;
    DAT_0487e250 = &DAT_0469e038;
    DAT_0487e268 = 1;
  }
  return;
}


