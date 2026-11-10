/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178dc0; name: _INIT_1393
 */


void _INIT_1393(void)

{
  if ((DAT_0487c830 & 1) == 0) {
    DAT_0487c820 = 0;
    DAT_0487c828 = 0;
    DAT_0487c810 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c810;
    DAT_0487c818 = &DAT_04691588;
    DAT_0487c830 = 1;
  }
  return;
}


