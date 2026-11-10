/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299aca8; name: FUN_0299aca8
 */


void FUN_0299aca8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_01064488();
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar2 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar2;
  FUN_0299e644(*(undefined8 *)(lVar2 + 0x200),param_2,*(undefined8 *)(param_1 + 0x318));
  return;
}


