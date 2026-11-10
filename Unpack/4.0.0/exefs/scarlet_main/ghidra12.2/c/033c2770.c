/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c2770; name: _INIT_2086
 */


void _INIT_2086(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae7d0 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae7d8 = 2;
  DAT_048ae7e0 = 0x66;
  DAT_048ae7e8 = &LAB_033c1d50;
  DAT_048ae7f0 = &LAB_033c1df0;
  memset(&DAT_048ae7f8,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae7d0;
  return;
}


