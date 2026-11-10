/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c17a0; name: _INIT_2085
 */


void _INIT_2085(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae760 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae768 = 0x4000000003;
  DAT_048ae770 = 0;
  DAT_048ae778 = &LAB_033c0090;
  DAT_048ae780 = &LAB_033c0120;
  memset(&DAT_048ae788,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae760;
  return;
}


