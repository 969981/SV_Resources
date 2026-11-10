/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012960d8; name: FUN_012960d8
 */


bool FUN_012960d8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int local_40 [4];
  byte local_14 [4];
  
  if (((DAT_04839cb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839cb0), iVar2 != 0)) {
    FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839cb0);
  }
  lVar1 = DAT_04839ca0;
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 != 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar4 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar4;
    if (lVar4 != 0) {
      if (*(long *)PTR_DAT_047d0a08 == 0) {
        return false;
      }
      uVar3 = FUN_00e66ab4(*(long *)PTR_DAT_047d0a08,*param_1);
      if (((uVar3 & 1) != 0) && (*(long *)(lVar4 + 0x70) != 0)) {
        if (*(long *)PTR_DAT_047d0860 == 0) {
          return false;
        }
        local_14[0] = 0xfd;
        FUN_00f42ddc(local_40,*(long *)PTR_DAT_047d0860,local_14,*param_1);
        if (3 < local_14[0]) {
          return false;
        }
        if (local_40[0] != 0) {
          return false;
        }
        if (local_14[0] < DAT_045dfcb0) {
          return *(char *)(lVar1 + (ulong)local_14[0] + 0x20c) != '\0';
        }
        return false;
      }
    }
  }
  return false;
}


