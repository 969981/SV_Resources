/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0088c760; name: _INIT_118
 */


void _INIT_118(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d2038;
  puVar1 = PTR_DAT_047d2020;
  if ((*PTR_DAT_047d2038 & 1) == 0) {
    FUN_0104984c(PTR_DAT_047d2020);
    *(undefined **)puVar1 = PTR_DAT_047d2040 + 0x10;
    FUN_00100190(PTR_FUN_047d2048,puVar1,&PTR_LOOP_04483000);
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


