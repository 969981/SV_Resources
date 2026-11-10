/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035780; name: _INIT_757
 */


void _INIT_757(void)

{
  if ((DAT_048726a8 & 1) == 0) {
    DAT_04872698 = 0;
    DAT_048726a0 = 0;
    DAT_04872688 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872688;
    DAT_04872690 = &DAT_04647708;
    DAT_048726a8 = 1;
  }
  return;
}


