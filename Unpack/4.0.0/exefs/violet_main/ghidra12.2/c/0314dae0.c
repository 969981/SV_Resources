/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314dae0; name: _INIT_1168
 */


void _INIT_1168(void)

{
  if ((DAT_04879840 & 1) == 0) {
    DAT_04879830 = 0;
    DAT_04879838 = 0;
    DAT_04879820 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879820;
    DAT_04879828 = &DAT_0467b180;
    DAT_04879840 = 1;
  }
  return;
}


