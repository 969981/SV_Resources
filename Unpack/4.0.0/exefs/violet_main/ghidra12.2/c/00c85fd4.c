/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c85fd4; name: FUN_00c85fd4
 */


undefined4 FUN_00c85fd4(undefined2 param_1,undefined2 param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined *local_30;
  undefined2 local_28;
  undefined2 local_26;
  
  local_30 = PTR_DAT_047d8ee0 + 0x10;
  local_28 = param_1;
  local_26 = param_2;
  bVar3 = FUN_00c860e0(&local_30);
  if (((*PTR_DAT_047da7c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar5 != 0))
  {
    FUN_00100190(&LAB_02b6f5e4,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da7c0);
  }
  DAT_048420f0 = *(long *)PTR_DAT_047da7c8;
  puVar6 = (uint *)(**(code **)(**(long **)(DAT_048420f0 + 0x30) + 0x70))();
  if (puVar6 == (uint *)0x0) {
    uVar4 = 1;
  }
  else {
    piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
    if (99 < param_3) {
      param_3 = 100;
    }
    bVar2 = 0;
    if (bVar3 < 9) {
      bVar2 = bVar3;
    }
    uVar4 = *(undefined4 *)
             ((long)piVar1 +
             (ulong)param_3 * 4 +
             (ulong)bVar2 * 0x194 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  }
  return uVar4;
}


