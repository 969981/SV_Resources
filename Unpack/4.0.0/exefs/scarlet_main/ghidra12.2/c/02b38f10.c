/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b38f10; name: _INIT_397
 */


void _INIT_397(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  DAT_048413c8 = *(undefined8 *)PTR_DAT_047d3e30;
  DAT_048413d0 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  DAT_048413d8 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  DAT_048413e0 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (DAT_048413e0 != (long *)0x0) {
    (**(code **)(*DAT_048413e0 + 0x18))();
  }
  FUN_00100190(PTR_LAB_047d4118,&DAT_048413c8,&PTR_LOOP_04483000);
  return;
}


