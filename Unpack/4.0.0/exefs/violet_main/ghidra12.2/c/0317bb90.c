/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317bb90; name: _INIT_1446
 */


void _INIT_1446(void)

{
  if ((DAT_0487d078 & 1) == 0) {
    DAT_0487d068 = 0;
    DAT_0487d070 = 0;
    DAT_0487d058 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d058;
    DAT_0487d060 = &DAT_04694668;
    DAT_0487d078 = 1;
  }
  return;
}


