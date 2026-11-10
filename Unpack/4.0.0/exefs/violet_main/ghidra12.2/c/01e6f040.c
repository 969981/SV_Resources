/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6f040; name: FUN_01e6f040
 */


void FUN_01e6f040(long *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined *local_40;
  undefined2 local_38;
  undefined2 local_36;
  
  uVar4 = FUN_00cf44f4(*(undefined8 *)(*param_1 + 0x70));
  local_36 = FUN_00cf41a8(*(undefined8 *)(*param_1 + 0x70));
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
    if (99 < param_2) {
      param_2 = 100;
    }
    bVar2 = 0;
    if (bVar3 < 9) {
      bVar2 = bVar3;
    }
    uVar7 = *(undefined4 *)
             ((long)piVar1 +
             (ulong)param_2 * 4 +
             (ulong)bVar2 * 0x194 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  }
  FUN_0147a2a8(*param_1,uVar7);
  return;
}


