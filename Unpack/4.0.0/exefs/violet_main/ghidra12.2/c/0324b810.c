/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b810; name: _INIT_1779
 */


void _INIT_1779(void)

{
  if ((DAT_04888bf0 & 1) == 0) {
    DAT_04888be0 = 0;
    DAT_04888be8 = 0;
    DAT_04888bd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888bd0;
    DAT_04888bd8 = &DAT_046bd218;
    DAT_04888bf0 = 1;
  }
  return;
}


