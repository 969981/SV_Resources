/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c530; name: _INIT_1108
 */


void _INIT_1108(void)

{
  if ((DAT_04878ee0 & 1) == 0) {
    DAT_04878ed0 = 0;
    DAT_04878ed8 = 0;
    DAT_04878ec0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878ec0;
    DAT_04878ec8 = &DAT_04677700;
    DAT_04878ee0 = 1;
  }
  return;
}


