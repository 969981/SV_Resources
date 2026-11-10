/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e9bdc; name: FUN_021e9bdc
 */


void FUN_021e9bdc(void)

{
  int iVar1;
  undefined4 local_14;
  
  FUN_021e9c78();
  if (((*PTR_DAT_047db110 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047db110), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  *(undefined8 *)PTR_DAT_047db120 = *(undefined8 *)PTR_DAT_047db118;
  FUN_021e9d90();
  local_14 = 0;
  FUN_021e9e50(*(undefined8 *)PTR_DAT_047d3920,&local_14);
  return;
}


