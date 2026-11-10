/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033fd1d0; name: _INIT_2105
 */


void _INIT_2105(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048af030 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048af038 = 3;
  DAT_048af040 = 0x6d;
  DAT_048af048 = PTR_LAB_047e6bb8;
  DAT_048af050 = PTR_LAB_047e6bc0;
  memset(&DAT_048af058,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048af030;
  return;
}


