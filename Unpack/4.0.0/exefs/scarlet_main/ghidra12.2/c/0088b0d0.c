/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0088b0d0; name: _INIT_116
 */


void _INIT_116(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d2000;
  puVar1 = PTR_DAT_047d1fe8;
  if ((*PTR_DAT_047d2000 & 1) == 0) {
    FUN_00887ee8(PTR_DAT_047d1fe8);
    *(undefined **)puVar1 = PTR_DAT_047d2008 + 0x10;
    FUN_00100190(PTR_FUN_047d2010,puVar1,&PTR_LOOP_04483000);
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


