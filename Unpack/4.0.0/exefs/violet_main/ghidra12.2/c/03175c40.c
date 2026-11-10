/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175c40; name: _INIT_1279
 */


void _INIT_1279(void)

{
  if ((DAT_0487b660 & 1) == 0) {
    DAT_0487b650 = 0;
    DAT_0487b658 = 0;
    DAT_0487b640 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b640;
    DAT_0487b648 = &DAT_04689980;
    DAT_0487b660 = 1;
  }
  return;
}


