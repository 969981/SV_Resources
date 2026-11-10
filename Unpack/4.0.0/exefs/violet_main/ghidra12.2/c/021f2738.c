/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f2738; name: FUN_021f2738
 */


undefined4 FUN_021f2738(long param_1)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  undefined *local_50;
  undefined2 local_48;
  undefined2 local_46;
  
  uVar5 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar6 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar7 = FUN_00cf44f4();
    uVar8 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    uVar9 = FUN_00f14b64(*(undefined8 *)(param_1 + 0x70));
    bVar3 = FUN_00f13da0(uVar7,uVar8,uVar9);
  }
  else {
    bVar3 = FUN_00e9987c();
  }
  local_50 = PTR_DAT_047d8ee0 + 0x10;
  local_48 = uVar5;
  local_46 = uVar6;
  bVar4 = FUN_00c860e0(&local_50);
  if (((*PTR_DAT_047da7c0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047da7d8,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da7c0);
  }
  lVar12 = *(long *)PTR_DAT_047da7c8;
  *(long *)PTR_DAT_047da7d0 = lVar12;
  puVar11 = (uint *)(**(code **)(**(long **)(lVar12 + 0x30) + 0x70))();
  if (puVar11 == (uint *)0x0) {
    uVar7 = 1;
  }
  else {
    piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
    if (99 < bVar3) {
      bVar3 = 100;
    }
    bVar2 = 0;
    if (bVar4 < 9) {
      bVar2 = bVar4;
    }
    uVar7 = *(undefined4 *)
             ((long)piVar1 +
             (ulong)bVar3 * 4 +
             (ulong)bVar2 * 0x194 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  }
  return uVar7;
}


