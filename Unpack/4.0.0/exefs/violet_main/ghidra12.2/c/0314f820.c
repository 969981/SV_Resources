/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f820; name: _INIT_1257
 */


void _INIT_1257(void)

{
  if ((DAT_0487a628 & 1) == 0) {
    DAT_0487a618 = 0;
    DAT_0487a620 = 0;
    DAT_0487a608 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a608;
    DAT_0487a610 = &DAT_046807a0;
    DAT_0487a628 = 1;
  }
  return;
}


