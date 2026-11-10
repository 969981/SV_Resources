/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e5e40; name: _INIT_2096
 */


void _INIT_2096(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aec38 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aec40 = 3;
  DAT_048aec48 = 0x88;
  DAT_048aec50 = PTR_LAB_047e6b18;
  DAT_048aec58 = PTR_LAB_047e6b20;
  memset(&DAT_048aec60,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aec38;
  return;
}


