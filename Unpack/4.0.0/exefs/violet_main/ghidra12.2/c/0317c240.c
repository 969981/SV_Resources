/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c240; name: _INIT_1458
 */


void _INIT_1458(void)

{
  if ((DAT_0487d258 & 1) == 0) {
    DAT_0487d248 = 0;
    DAT_0487d250 = 0;
    DAT_0487d238 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d238;
    DAT_0487d240 = &DAT_04695240;
    DAT_0487d258 = 1;
  }
  return;
}


