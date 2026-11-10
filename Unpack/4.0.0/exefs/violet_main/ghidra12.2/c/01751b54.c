/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01751b54; name: FUN_01751b54
 */


undefined1 FUN_01751b54(void)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  int local_40 [4];
  byte local_14 [4];
  
  if (((DAT_04839cb0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04839cb0), iVar3 != 0)) {
    FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839cb0);
  }
  lVar2 = DAT_04839ca0;
  puVar1 = PTR_DAT_047d6c98;
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 != 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    plVar6 = (long *)PTR_DAT_047d6ca8;
    plVar5 = (long *)PTR_DAT_047d6ca0;
    lVar7 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar7;
    if (lVar7 != 0) {
      if (*(long *)PTR_DAT_047d0a08 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
      }
      if (((*puVar1 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c98), plVar5 = (long *)PTR_DAT_047d6ca0,
         plVar6 = (long *)PTR_DAT_047d6ca8, iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
        plVar5 = (long *)PTR_DAT_047d6ca0;
        plVar6 = (long *)PTR_DAT_047d6ca8;
      }
      puVar1 = PTR_DAT_047d0a08;
      lVar7 = *plVar5;
      *plVar6 = lVar7;
      if (lVar7 != 0) {
        if (*(long *)puVar1 == 0) {
          return 0;
        }
        uVar4 = FUN_00e66ab4(*(long *)puVar1,uVar8);
        if (((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x70) != 0)) {
          if (*(long *)PTR_DAT_047d0860 == 0) {
            return 0;
          }
          local_14[0] = 0xfd;
          FUN_00f42ddc(local_40,*(long *)PTR_DAT_047d0860,local_14,uVar8);
          if (3 < local_14[0]) {
            return 0;
          }
          if (local_40[0] != 0) {
            return 0;
          }
          if (local_14[0] < DAT_045dfcb0) {
            return *(undefined1 *)(lVar2 + (ulong)local_14[0] + 0x206);
          }
          return 0;
        }
      }
    }
  }
  return 0;
}


