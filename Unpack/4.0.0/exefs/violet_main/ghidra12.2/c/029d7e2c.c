/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d7e2c; name: FUN_029d7e2c
 */


undefined * FUN_029d7e2c(void)

{
  int iVar1;
  
  if (((DAT_0486afe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486afe0), iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,&DAT_046089c8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0486afe0);
  }
  return &DAT_046089c8;
}


