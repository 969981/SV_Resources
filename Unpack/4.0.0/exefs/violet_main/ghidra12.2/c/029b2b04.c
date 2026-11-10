/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b2b04; name: FUN_029b2b04
 */


undefined * FUN_029b2b04(void)

{
  int iVar1;
  
  if (((DAT_0486ade8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0486ade8), iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,&DAT_04604290,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0486ade8);
  }
  return &DAT_04604290;
}


