/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263a90; name: _INIT_1797
 */


void _INIT_1797(void)

{
  if ((DAT_048898a0 & 1) == 0) {
    DAT_04889890 = 0;
    DAT_04889898 = 0;
    DAT_04889880 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889880;
    DAT_04889888 = &DAT_046c2500;
    DAT_048898a0 = 1;
  }
  return;
}


