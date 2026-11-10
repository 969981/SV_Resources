/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cf150; name: FUN_019cf150
 */


uint FUN_019cf150(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long local_50 [6];
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_048398e8), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  lVar1 = DAT_048398d8;
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 == 0) {
    return 0;
  }
  if ((*(long *)(DAT_048398d8 + 0x50) == 0) ||
     (lVar6 = *(long *)(*(long *)(DAT_048398d8 + 0x50) + 0x10), lVar6 == 0)) {
    uVar3 = 0;
  }
  else {
    plVar7 = (long *)(lVar6 + -0x28);
    FUN_016947d8(local_50);
    local_14 = 3;
    if (local_50[0] != 0) {
      FUN_01eaf354(auStack_18,&local_14,local_50[0] + 8);
    }
    uVar4 = FUN_014c27b0(local_50);
    uVar5 = FUN_014c27c8(local_50);
    uVar3 = (**(code **)(*plVar7 + 0x70))(plVar7,uVar4,uVar5);
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(lVar1 + 0xb0) = 3;
    }
    FUN_01694aa8(local_50);
  }
  return uVar3 & 1;
}


