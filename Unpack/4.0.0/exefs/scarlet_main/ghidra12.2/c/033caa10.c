/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033caa10; name: _INIT_2092
 */


void _INIT_2092(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aea70 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aea78 = 3;
  DAT_048aea80 = 0x82;
  DAT_048aea88 = PTR_LAB_047e6a18;
  DAT_048aea90 = PTR_LAB_047e6a20;
  memset(&DAT_048aea98,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aea70;
  return;
}


