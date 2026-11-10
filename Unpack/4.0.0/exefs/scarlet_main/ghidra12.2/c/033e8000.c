/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e8000; name: _INIT_2097
 */


void _INIT_2097(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aeca8 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aecb0 = 3;
  DAT_048aecb8 = 0x6e;
  DAT_048aecc0 = PTR_LAB_047e6b28;
  DAT_048aecc8 = PTR_LAB_047e6b30;
  memset(&DAT_048aecd0,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aeca8;
  return;
}


