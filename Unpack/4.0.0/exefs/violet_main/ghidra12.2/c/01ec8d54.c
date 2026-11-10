/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec8d54; name: FUN_01ec8d54
 */


bool FUN_01ec8d54(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int local_40 [4];
  byte local_14 [4];
  
  puVar1 = PTR_DAT_047d6c98;
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  plVar5 = (long *)PTR_DAT_047d6ca8;
  plVar4 = (long *)PTR_DAT_047d6ca0;
  lVar6 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar6;
  if (lVar6 != 0) {
    if (*(long *)PTR_DAT_047d0a08 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
    }
    if (((*puVar1 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), plVar4 = (long *)PTR_DAT_047d6ca0,
       plVar5 = (long *)PTR_DAT_047d6ca8, iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
      plVar4 = (long *)PTR_DAT_047d6ca0;
      plVar5 = (long *)PTR_DAT_047d6ca8;
    }
    puVar1 = PTR_DAT_047d0a08;
    lVar6 = *plVar4;
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      if (*(long *)puVar1 == 0) {
        return false;
      }
      uVar3 = FUN_00e66ab4(*(long *)puVar1,uVar7);
      if (((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x70) != 0)) {
        if (*(long *)PTR_DAT_047d0860 == 0) {
          return false;
        }
        local_14[0] = 0xfd;
        FUN_00f42ddc(local_40,*(long *)PTR_DAT_047d0860,local_14,uVar7);
        if (3 < local_14[0]) {
          return false;
        }
        if (local_40[0] != 0) {
          return false;
        }
        if (local_14[0] < DAT_045dfcb0) {
          return *(char *)(param_1 + (ulong)local_14[0] + 0x20c) != '\0';
        }
        return false;
      }
    }
  }
  return false;
}


