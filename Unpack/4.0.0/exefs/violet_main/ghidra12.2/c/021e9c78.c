/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e9c78; name: FUN_021e9c78
 */


void FUN_021e9c78(long param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  *(undefined8 *)PTR_DAT_047d8290 = *(undefined8 *)PTR_DAT_047d8288;
  FUN_028afe38();
  if (((*PTR_DAT_047d8a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a70);
  }
  *(undefined8 *)PTR_DAT_047d8a80 = *(undefined8 *)PTR_DAT_047d8a78;
  FUN_01dad35c();
  FUN_028afef0();
  FUN_028afef4(param_1 + 0x260);
  FUN_028aff48();
  FUN_028affb4();
  FUN_0271d5b0();
  FUN_0271d5bc();
  FUN_028b0034();
  FUN_028b0054();
  *(undefined1 *)(param_1 + 0x251) = 1;
  return;
}


