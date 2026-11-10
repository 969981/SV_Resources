/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324af50; name: _INIT_1751
 */


void _INIT_1751(void)

{
  if ((DAT_04888790 & 1) == 0) {
    DAT_04888780 = 0;
    DAT_04888788 = 0;
    DAT_04888770 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888770;
    DAT_04888778 = &DAT_046bb8a8;
    DAT_04888790 = 1;
  }
  return;
}


