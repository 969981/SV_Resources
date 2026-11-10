/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176820; name: _INIT_1317
 */


void _INIT_1317(void)

{
  if ((DAT_0487bc50 & 1) == 0) {
    DAT_0487bc40 = 0;
    DAT_0487bc48 = 0;
    DAT_0487bc30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bc30;
    DAT_0487bc38 = &DAT_0468c5f0;
    DAT_0487bc50 = 1;
  }
  return;
}


