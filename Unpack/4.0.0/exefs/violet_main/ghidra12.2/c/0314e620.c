/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e620; name: _INIT_1204
 */


void _INIT_1204(void)

{
  if ((DAT_04879de0 & 1) == 0) {
    DAT_04879dd0 = 0;
    DAT_04879dd8 = 0;
    DAT_04879dc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879dc0;
    DAT_04879dc8 = &DAT_0467d488;
    DAT_04879de0 = 1;
  }
  return;
}


