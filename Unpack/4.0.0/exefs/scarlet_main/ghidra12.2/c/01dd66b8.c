/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd66b8; name: FUN_01dd66b8
 */


uint FUN_01dd66b8(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0x298) == 2) {
    local_40 = 0x9fae777492ce2cf6;
    pcStack_38 = "FSYS_SCENARIO_GAME_CLEAR";
    local_30 = 0x18;
    local_28 = (long *)0x0;
    if (((*PTR_DAT_047d4928 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4928), iVar2 != 0)) {
      FUN_00100190(&LAB_02af32dc,PTR_DAT_047d4930,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4928);
    }
    lVar4 = *(long *)PTR_DAT_047d4930;
    *(long *)PTR_DAT_047d4938 = lVar4;
    uVar3 = FUN_00fb1cf4(&local_40,lVar4 + 0x198);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if ((uVar3 & 1) != 0) {
      FUN_01195854();
      uVar1 = FUN_01ddccdc();
      goto LAB_01dd675c;
    }
  }
  uVar1 = 0;
LAB_01dd675c:
  return uVar1 & 1;
}


