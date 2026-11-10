/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b388f0; name: _INIT_396
 */


void _INIT_396(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  DAT_04841320 = *(undefined8 *)PTR_DAT_047d3e30;
  DAT_04841328 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  DAT_04841330 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  DAT_04841338 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (DAT_04841338 != (long *)0x0) {
    (**(code **)(*DAT_04841338 + 0x18))();
  }
  FUN_00100190(PTR_LAB_047d4118,&DAT_04841320,&PTR_LOOP_04483000);
  return;
}


