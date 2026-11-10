/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c46f0; name: _INIT_86
 */


void _INIT_86(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_047d10c0;
  *(undefined **)PTR_DAT_047d10c0 = PTR_DAT_047d0878 + 0x10;
  *(undefined1 **)(puVar1 + 8) = &DAT_03c886bc;
  FUN_00100190(PTR_LAB_047d10c8,puVar1,&PTR_LOOP_04483000);
  puVar2 = PTR_LAB_047d10e0;
  puVar1 = PTR_DAT_047d10d8;
  *(undefined **)PTR_DAT_047d10d8 = PTR_DAT_047d10d0 + 0x10;
  *(undefined **)(puVar1 + 8) = &DAT_03d0c96c;
  FUN_00100190(puVar2,puVar1,&PTR_LOOP_04483000);
  return;
}


