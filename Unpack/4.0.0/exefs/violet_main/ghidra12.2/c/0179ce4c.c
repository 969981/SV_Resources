/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0179ce4c; name: FUN_0179ce4c
 */


void FUN_0179ce4c(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [8];
  
  FUN_00d1a22c(param_1,0xd);
  *param_1 = &PTR_FUN_045a1588;
  param_1[0x24] = 0;
  param_1[4] = &PTR_LAB_045a16c8;
  param_1[5] = &DAT_045a17f0;
  puVar1 = param_1 + 0x24;
  param_1[6] = &PTR_LAB_045a1848;
  param_1[7] = &PTR_LAB_045a1870;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
  FUN_0179d050(auStack_38);
  FUN_0179d008(puVar1,auStack_38);
  FUN_0179cff8(auStack_38);
  uVar5 = 0;
  uVar4 = 0;
  if (4 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(undefined4 *)((long)param_2 + uVar3);
    }
  }
  FUN_0179d79c(uVar4,puVar1);
  uVar4 = 0;
  if (6 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(undefined4 *)((long)param_2 + uVar3);
    }
  }
  FUN_0179d934(uVar4,puVar1);
  uVar4 = 0;
  if (8 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = *(undefined4 *)((long)param_2 + uVar3);
    }
  }
  FUN_0179dacc(uVar4,puVar1);
  if ((10 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar3 != 0)) {
    uVar5 = *(undefined4 *)((long)param_2 + uVar3);
  }
  FUN_0179dc64(uVar5,puVar1);
  return;
}


