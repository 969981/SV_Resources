/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea38fc; name: FUN_01ea38fc
 */


undefined8 FUN_01ea38fc(undefined8 param_1,byte *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_30;
  byte *pbStack_28;
  undefined8 local_8;
  
  local_30 = param_1;
  pbStack_28 = param_2;
  uVar2 = FUN_01ea39ec(&local_30);
  if ((uVar2 & 1) != 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar3 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar3;
    if (*(long *)(lVar3 + 0x70) != 0) {
      if (*(long *)PTR_DAT_047d0860 == 0) {
        return 0;
      }
      if ((*param_2 & 3) < DAT_045dfcb0) {
        local_8 = 0;
        FUN_00da4118(&local_30,*(long *)PTR_DAT_047d0860,&local_8);
        if ((int)local_30 != 0) {
          local_8 = 0;
        }
        return local_8;
      }
    }
  }
  return 0;
}


