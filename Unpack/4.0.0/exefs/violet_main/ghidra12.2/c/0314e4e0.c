/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e4e0; name: _INIT_1200
 */


void _INIT_1200(void)

{
  if ((DAT_04879d40 & 1) == 0) {
    DAT_04879d30 = 0;
    DAT_04879d38 = 0;
    DAT_04879d20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879d20;
    DAT_04879d28 = &DAT_0467d100;
    DAT_04879d40 = 1;
  }
  return;
}


