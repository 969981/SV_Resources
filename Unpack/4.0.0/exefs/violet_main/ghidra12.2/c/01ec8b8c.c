/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec8b8c; name: FUN_01ec8b8c
 */


ulong FUN_01ec8b8c(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int local_40 [4];
  byte local_14 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar4 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar4;
  if ((((lVar4 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) ||
      (uVar2 = FUN_00e66ab4(*(long *)PTR_DAT_047d0a08,*param_2), (uVar2 & 1) == 0)) ||
     ((*(long *)(lVar4 + 0x70) == 0 || (*(long *)PTR_DAT_047d0860 == 0)))) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    local_14[0] = 0xfd;
    FUN_00f42ddc(local_40,*(long *)PTR_DAT_047d0860,local_14,*param_2);
    uVar2 = 0;
    if ((local_14[0] < 4) && (local_40[0] == 0)) {
      uVar3 = 0;
      if (local_14[0] < DAT_045dfcb0) {
        uVar2 = (ulong)*(byte *)(param_1 + (ulong)local_14[0] + 0x200) << 8;
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3 | uVar2;
}


