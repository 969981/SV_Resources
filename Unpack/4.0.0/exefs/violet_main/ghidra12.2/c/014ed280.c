/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014ed280; name: FUN_014ed280
 */


void FUN_014ed280(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_047d89f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d89f8);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89f8);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar2;
  FUN_014ed314(param_1,param_2,*(undefined1 *)(lVar2 + 0x2c));
  return;
}


