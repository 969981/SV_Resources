/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068f230; name: _INIT_60
 */


void _INIT_60(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cf648;
  PTR_DAT_047cf648[4] = 0;
  puVar1[9] = 0;
  FUN_00100190(PTR_LAB_047cee88,puVar1,&PTR_LOOP_04483000);
  puVar1 = PTR_DAT_047cf650;
  *(undefined **)PTR_DAT_047cf650 = PTR_LAB_047cf658;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_0052d9a0();
  return;
}


