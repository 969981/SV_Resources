/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317b260; name: _INIT_1437
 */


void _INIT_1437(void)

{
  if ((DAT_0487cf10 & 1) == 0) {
    DAT_0487cf00 = 0;
    DAT_0487cf08 = 0;
    DAT_0487cef0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cef0;
    DAT_0487cef8 = &DAT_04693e98;
    DAT_0487cf10 = 1;
  }
  return;
}


