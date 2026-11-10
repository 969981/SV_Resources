/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147a2a8; name: FUN_0147a2a8
 */


void FUN_0147a2a8(long param_1,uint param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  undefined *local_40;
  undefined2 local_38;
  undefined2 local_36;
  
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  local_36 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  local_40 = PTR_DAT_047d8ee0 + 0x10;
  local_38 = uVar4;
  bVar3 = FUN_00c860e0(&local_40);
  if (((*PTR_DAT_047da7c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047da7d8,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da7c0);
  }
  lVar8 = *(long *)PTR_DAT_047da7c8;
  *(long *)PTR_DAT_047da7d0 = lVar8;
  puVar6 = (uint *)(**(code **)(**(long **)(lVar8 + 0x30) + 0x70))();
  if (puVar6 == (uint *)0x0) {
    uVar7 = 1;
  }
  else {
    piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
    bVar2 = 0;
    if (bVar3 < 9) {
      bVar2 = bVar3;
    }
    uVar7 = *(uint *)((long)piVar1 +
                     (ulong)bVar2 * 0x194 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)) +
                     400);
  }
  if (param_2 <= uVar7) {
    uVar7 = param_2;
  }
  FUN_00ef07a4(*(undefined8 *)(param_1 + 0x70),uVar7);
  FUN_00f13b9c(param_1,0);
  return;
}


