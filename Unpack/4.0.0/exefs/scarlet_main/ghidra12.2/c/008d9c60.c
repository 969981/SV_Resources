/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d9c60; name: _INIT_121
 */


void _INIT_121(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_047d2580;
  FUN_00fad31c(PTR_DAT_047d2580);
  FUN_01194538(puVar1 + 0x120);
  FUN_0119456c(puVar1 + 0x168);
  *(undefined8 *)(puVar1 + 0x260) = 0xffffffffffffffff;
  puVar2 = PTR_FUN_047d2598;
  *(undefined8 *)(puVar1 + 0x250) = 0;
  FUN_00100190(puVar2,puVar1,&PTR_LOOP_04483000);
  return;
}


