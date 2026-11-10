/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031470e0; name: _INIT_921
 */


void _INIT_921(void)

{
  if ((DAT_048771a8 & 1) == 0) {
    DAT_04877198 = 0;
    DAT_048771a0 = 0;
    DAT_04877188 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877188;
    DAT_04877190 = &DAT_0466c490;
    DAT_048771a8 = 1;
  }
  return;
}


