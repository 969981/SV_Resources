/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175c90; name: _INIT_1280
 */


void _INIT_1280(void)

{
  if ((DAT_0487b688 & 1) == 0) {
    DAT_0487b678 = 0;
    DAT_0487b680 = 0;
    DAT_0487b668 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b668;
    DAT_0487b670 = &DAT_04689a78;
    DAT_0487b688 = 1;
  }
  return;
}


