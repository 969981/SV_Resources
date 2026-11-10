/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c310; name: _INIT_1527
 */


void _INIT_1527(void)

{
  if ((DAT_0487e650 & 1) == 0) {
    DAT_0487e640 = 0;
    DAT_0487e648 = 0;
    DAT_0487e630 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e630;
    DAT_0487e638 = &DAT_0469fb60;
    DAT_0487e650 = 1;
  }
  return;
}


