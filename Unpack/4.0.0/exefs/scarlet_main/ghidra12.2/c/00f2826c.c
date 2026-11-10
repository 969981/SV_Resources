/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f2826c; name: FUN_00f2826c
 */


uint FUN_00f2826c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  puVar2 = PTR_DAT_047d4928;
  local_60 = 0x74e9584aec95d8ef;
  pcStack_58 = "FSYS_RAID_DIFFICTLTY3_RELEASE";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  if (((*PTR_DAT_047d4928 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar6 != 0))
  {
    FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4928);
  }
  puVar4 = PTR_DAT_047d4938;
  puVar3 = PTR_DAT_047d4930;
  lVar10 = *(long *)PTR_DAT_047d4930;
  *(long *)PTR_DAT_047d4938 = lVar10;
  uVar5 = FUN_00fb1cf4(&local_60,lVar10 + 0x198);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0x3bf2c1da9428dfe;
  pcStack_58 = "FSYS_RAID_DIFFICTLTY4_RELEASE";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar6 != 0)) {
    FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4928);
  }
  lVar10 = *(long *)puVar3;
  *(long *)puVar4 = lVar10;
  uVar7 = FUN_00fb1cf4(&local_60,lVar10 + 0x198);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0xd3eb4e379535f471;
  pcStack_58 = "FSYS_RAID_DIFFICTLTY5_RELEASE";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar6 != 0)) {
    FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4928);
  }
  lVar10 = *(long *)puVar3;
  *(long *)puVar4 = lVar10;
  uVar8 = FUN_00fb1cf4(&local_60,lVar10 + 0x198);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0x2b43ccf36e7f8220;
  pcStack_58 = "FSYS_RAID_DIFFICTLTY6_RELEASE";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar6 != 0)) {
    FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4928);
  }
  lVar10 = *(long *)puVar3;
  *(long *)puVar4 = lVar10;
  uVar9 = FUN_00fb1cf4(&local_60,lVar10 + 0x198);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar1 = 2;
  if ((uVar7 & 1) == 0) {
    uVar1 = uVar5 & 1;
  }
  uVar5 = 3;
  if ((uVar8 & 1) == 0) {
    uVar5 = uVar1;
  }
  uVar1 = 4;
  if ((uVar9 & 1) == 0) {
    uVar1 = uVar5;
  }
  return uVar1;
}


