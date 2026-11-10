/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324ac80; name: _INIT_1742
 */


void _INIT_1742(void)

{
  if ((DAT_04888628 & 1) == 0) {
    DAT_04888618 = 0;
    DAT_04888620 = 0;
    DAT_04888608 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888608;
    DAT_04888610 = &DAT_046baf58;
    DAT_04888628 = 1;
  }
  return;
}


