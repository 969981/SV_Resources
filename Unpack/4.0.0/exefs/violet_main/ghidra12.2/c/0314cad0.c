/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314cad0; name: _INIT_1126
 */


void _INIT_1126(void)

{
  if ((DAT_048791b0 & 1) == 0) {
    DAT_048791a0 = 0;
    DAT_048791a8 = 0;
    DAT_04879190 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879190;
    DAT_04879198 = &DAT_046786c8;
    DAT_048791b0 = 1;
  }
  return;
}


