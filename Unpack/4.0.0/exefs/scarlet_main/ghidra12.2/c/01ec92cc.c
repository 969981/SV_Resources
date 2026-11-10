/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec92cc; name: FUN_01ec92cc
 */


void FUN_01ec92cc(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint local_50 [2];
  long local_48;
  byte local_40;
  byte local_34 [4];
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x70) != 0)) && (*(long *)PTR_DAT_047d0860 != 0)) {
    local_34[0] = 0xfd;
    FUN_00f42ddc(local_50,*(long *)PTR_DAT_047d0860,local_34,*param_3);
    bVar1 = local_34[0];
    uVar4 = (ulong)local_34[0];
    if (((uVar4 != 0xfd) && (local_50[0] == 0)) &&
       ((local_34[0] < DAT_045dfcb0 && (local_48 = *param_3, local_48 != 0)))) {
      local_50[0] = (uint)*param_2;
      local_40 = local_34[0];
      if (*(code **)(param_1 + 0x140) != (code *)0x0) {
        (**(code **)(param_1 + 0x140))(param_1 + 0x160,local_50);
      }
      if (bVar1 < 4) {
        *(byte *)(param_1 + uVar4 + 0x200) = *param_2;
      }
    }
  }
  return;
}


