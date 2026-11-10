/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ea80; name: _INIT_1218
 */


void _INIT_1218(void)

{
  if ((DAT_0487a010 & 1) == 0) {
    DAT_0487a000 = 0;
    DAT_0487a008 = 0;
    DAT_04879ff0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879ff0;
    DAT_04879ff8 = &DAT_0467e348;
    DAT_0487a010 = 1;
  }
  return;
}


