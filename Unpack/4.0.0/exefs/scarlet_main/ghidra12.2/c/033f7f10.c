/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f7f10; name: _INIT_2102
 */


void _INIT_2102(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aeee0 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aeee8 = 3;
  DAT_048aeef0 = 0x7e;
  DAT_048aeef8 = PTR_LAB_047e6b88;
  DAT_048aef00 = PTR_LAB_047e6b90;
  memset(&DAT_048aef08,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aeee0;
  return;
}


