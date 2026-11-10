/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f690; name: _INIT_1252
 */


void _INIT_1252(void)

{
  if ((DAT_0487a560 & 1) == 0) {
    DAT_0487a550 = 0;
    DAT_0487a558 = 0;
    DAT_0487a540 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a540;
    DAT_0487a548 = &DAT_04680380;
    DAT_0487a560 = 1;
  }
  return;
}


