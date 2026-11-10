/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01131068; name: FUN_01131068
 */


undefined8 FUN_01131068(byte *param_1)

{
  int iVar1;
  long lVar2;
  int local_28 [4];
  undefined8 local_18;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar2 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar2;
  if ((((lVar2 == 0) || (*(long *)(lVar2 + 0x70) == 0)) || (*(long *)PTR_DAT_047d0860 == 0)) ||
     (DAT_045dfcb0 <= *param_1)) {
    local_18 = 0;
  }
  else {
    local_18 = 0;
    FUN_00da4118(local_28,*(long *)PTR_DAT_047d0860,&local_18);
    if (local_28[0] != 0) {
      local_18 = 0;
    }
  }
  return local_18;
}


