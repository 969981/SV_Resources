/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ba7d0; name: _INIT_2080
 */


void _INIT_2080(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488e612 = 1;
  DAT_0488e5c0 = &DAT_0488e5d0;
  DAT_0488e5c8 = 0x8000000400000000;
  DAT_0488e620 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488e5c0;
  DAT_0488e610 = 0;
  DAT_0488e618 = "base.s11n";
  FUN_00100190(puVar1,&DAT_0488e5c0,&PTR_LOOP_04483000);
  return;
}


