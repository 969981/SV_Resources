/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c4ef4; name: FUN_011c4ef4
 */


uint FUN_011c4ef4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int local_30 [4];
  byte local_4 [4];
  
  if (((DAT_04839790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839790), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  lVar1 = DAT_04839780;
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 != 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar5 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar5;
    if ((lVar5 != 0) && (uVar3 = FUN_00f4189c(lVar1,param_1), *(long *)(lVar5 + 0x70) != 0)) {
      if (*(long *)PTR_DAT_047d0860 == 0) {
        return 0xfd;
      }
      local_4[0] = 0xfd;
      FUN_00f42ddc(local_30,*(long *)PTR_DAT_047d0860,local_4,uVar3);
      uVar4 = (uint)local_4[0];
      if (DAT_045dfcb0 <= local_4[0] || local_30[0] != 0) {
        uVar4 = 0xfffffffd;
      }
      return uVar4;
    }
  }
  return 0xfd;
}


