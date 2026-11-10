/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c2e0; name: _INIT_1460
 */


void _INIT_1460(void)

{
  if ((DAT_0487d2a8 & 1) == 0) {
    DAT_0487d298 = 0;
    DAT_0487d2a0 = 0;
    DAT_0487d288 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d288;
    DAT_0487d290 = &DAT_04695430;
    DAT_0487d2a8 = 1;
  }
  return;
}


