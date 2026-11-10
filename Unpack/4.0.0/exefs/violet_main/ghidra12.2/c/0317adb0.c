/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317adb0; name: _INIT_1432
 */


void _INIT_1432(void)

{
  if ((DAT_0487ce48 & 1) == 0) {
    DAT_0487ce38 = 0;
    DAT_0487ce40 = 0;
    DAT_0487ce28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ce28;
    DAT_0487ce30 = &DAT_04693a20;
    DAT_0487ce48 = 1;
  }
  return;
}


