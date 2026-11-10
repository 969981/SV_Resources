/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02468fa8; name: FUN_02468fa8
 */


void FUN_02468fa8(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  *(undefined8 *)PTR_DAT_047d8c50 = *(undefined8 *)PTR_DAT_047d8c48;
  FUN_028a1a50();
  return;
}


