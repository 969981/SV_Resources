/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0176a904; name: FUN_0176a904
 */


void FUN_0176a904(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_18;
  
  if ((*PTR_DAT_047dd000 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047dd000);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd000);
    }
  }
  lVar2 = *(long *)PTR_DAT_047dd008;
  *(long *)PTR_DAT_047dd010 = lVar2;
  local_18 = *param_2;
  FUN_0176eae8(lVar2 + 0x28,param_1,&local_18);
  return;
}


