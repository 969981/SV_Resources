/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f25f4; name: FUN_021f25f4
 */


void FUN_021f25f4(long param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  undefined *local_40;
  undefined2 local_38;
  undefined2 local_36;
  
  iVar5 = FUN_00f14b64(*(undefined8 *)(param_1 + 0x70));
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  local_36 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  local_40 = PTR_DAT_047d8ee0 + 0x10;
  local_38 = uVar4;
  bVar3 = FUN_00c860e0(&local_40);
  if (((*PTR_DAT_047da7c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047da7d8,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da7c0);
  }
  lVar9 = *(long *)PTR_DAT_047da7c8;
  *(long *)PTR_DAT_047da7d0 = lVar9;
  puVar7 = (uint *)(**(code **)(**(long **)(lVar9 + 0x30) + 0x70))();
  if (puVar7 == (uint *)0x0) {
    uVar8 = 1;
  }
  else {
    piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
    bVar2 = 0;
    if (bVar3 < 9) {
      bVar2 = bVar3;
    }
    uVar8 = *(uint *)((long)piVar1 +
                     (ulong)bVar2 * 0x194 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)) +
                     400);
  }
  if ((uint)(iVar5 + param_2) <= uVar8) {
    uVar8 = iVar5 + param_2;
  }
  FUN_00ef07a4(*(undefined8 *)(param_1 + 0x70),uVar8);
  FUN_00f13b9c(param_1,0);
  return;
}


