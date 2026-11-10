/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031787d0; name: _INIT_1374
 */


void _INIT_1374(void)

{
  if ((DAT_0487c538 & 1) == 0) {
    DAT_0487c528 = 0;
    DAT_0487c530 = 0;
    DAT_0487c518 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c518;
    DAT_0487c520 = &DAT_04690038;
    DAT_0487c538 = 1;
  }
  return;
}


