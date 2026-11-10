/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d8b0; name: _INIT_1161
 */


void _INIT_1161(void)

{
  if ((DAT_04879728 & 1) == 0) {
    DAT_04879718 = 0;
    DAT_04879720 = 0;
    DAT_04879708 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879708;
    DAT_04879710 = &DAT_0467aa88;
    DAT_04879728 = 1;
  }
  return;
}


