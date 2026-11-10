/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035ff0; name: _INIT_784
 */


void _INIT_784(void)

{
  if ((DAT_04872ae0 & 1) == 0) {
    DAT_04872ad0 = 0;
    DAT_04872ad8 = 0;
    DAT_04872ac0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872ac0;
    DAT_04872ac8 = &DAT_04649750;
    DAT_04872ae0 = 1;
  }
  return;
}


