/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f28b8; name: FUN_021f28b8
 */


undefined4 FUN_021f28b8(long param_1)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  undefined *local_40;
  undefined2 local_38;
  undefined2 local_36;
  
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar6 = FUN_00cf44f4();
    uVar7 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    uVar8 = FUN_00f14b64(*(undefined8 *)(param_1 + 0x70));
    uVar5 = FUN_00f13da0(uVar6,uVar7,uVar8);
    uVar5 = uVar5 & 0xff;
  }
  else {
    uVar5 = FUN_00e9987c();
  }
  uVar12 = 100;
  if (uVar5 + 1 < 100) {
    uVar12 = uVar5 + 1;
  }
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  local_36 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  local_40 = PTR_DAT_047d8ee0 + 0x10;
  local_38 = uVar4;
  bVar3 = FUN_00c860e0(&local_40);
  if (((*PTR_DAT_047da7c0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047da7d8,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da7c0);
  }
  lVar11 = *(long *)PTR_DAT_047da7c8;
  *(long *)PTR_DAT_047da7d0 = lVar11;
  puVar10 = (uint *)(**(code **)(**(long **)(lVar11 + 0x30) + 0x70))();
  if (puVar10 == (uint *)0x0) {
    uVar6 = 1;
  }
  else {
    piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
    if (99 < (uVar12 & 0xff)) {
      uVar12 = 100;
    }
    bVar2 = 0;
    if (bVar3 < 9) {
      bVar2 = bVar3;
    }
    uVar6 = *(undefined4 *)
             ((long)piVar1 +
             ((ulong)uVar12 & 0xff) * 4 +
             (ulong)bVar2 * 0x194 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  }
  return uVar6;
}


