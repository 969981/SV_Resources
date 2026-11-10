/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e210; name: _INIT_1191
 */


void _INIT_1191(void)

{
  if ((DAT_04879bd8 & 1) == 0) {
    DAT_04879bc8 = 0;
    DAT_04879bd0 = 0;
    DAT_04879bb8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879bb8;
    DAT_04879bc0 = &DAT_0467c810;
    DAT_04879bd8 = 1;
  }
  return;
}


