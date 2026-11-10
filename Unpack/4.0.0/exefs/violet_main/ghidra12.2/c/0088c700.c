/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088c700; name: _INIT_117
 */


void _INIT_117(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d2028;
  puVar1 = PTR_DAT_047d2018;
  if ((*PTR_DAT_047d2028 & 1) == 0) {
    FUN_0104984c(PTR_DAT_047d2018);
    FUN_00100190(PTR_FUN_047d2030,puVar1,&PTR_LOOP_04483000);
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


