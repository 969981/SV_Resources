/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01844624; name: FUN_01844624
 */


void FUN_01844624(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int local_40 [4];
  byte local_14 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar2 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar2;
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x70) != 0)) && (*(long *)PTR_DAT_047d0860 != 0)) {
    local_14[0] = 0xfd;
    FUN_00f42ddc(local_40,*(long *)PTR_DAT_047d0860,local_14,*param_3);
    if (((local_14[0] != 0xfd) && (local_40[0] == 0)) &&
       ((local_14[0] <= DAT_045dfcb0 && DAT_045dfcb0 != local_14[0] &&
        ((local_14[0] < 4 && (*param_3 != 0)))))) {
      *(undefined1 *)(param_1 + (ulong)local_14[0] + 0x206) = *param_2;
    }
  }
  return;
}


