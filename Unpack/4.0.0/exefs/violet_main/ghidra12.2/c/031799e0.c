/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031799e0; name: _INIT_1412
 */


void _INIT_1412(void)

{
  if ((DAT_0487cb28 & 1) == 0) {
    DAT_0487cb18 = 0;
    DAT_0487cb20 = 0;
    DAT_0487cb08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cb08;
    DAT_0487cb10 = &DAT_04692840;
    DAT_0487cb28 = 1;
  }
  return;
}


