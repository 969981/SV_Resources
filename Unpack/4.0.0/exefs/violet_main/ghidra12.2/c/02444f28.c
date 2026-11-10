/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02444f28; name: FUN_02444f28
 */


undefined8 FUN_02444f28(double param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined1 *local_a0;
  byte *pbStack_98;
  size_t local_90;
  long *local_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar6 = (undefined8 *)PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = (undefined1 *)*puVar6;
    pbStack_58 = *(byte **)((long)puVar6 + 8);
    local_50 = *(size_t *)((long)puVar6 + 0x10);
    local_48 = *(long **)((long)puVar6 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    local_48 = (long *)0x0;
    puVar6 = (undefined8 *)PTR_DAT_047d3e30;
    pbStack_58 = param_2;
  }
  if (param_3 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = (undefined1 *)*puVar6;
    pbStack_78 = (byte *)puVar6[1];
    local_70 = puVar6[2];
    local_68 = (long *)puVar6[3];
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_3);
    bVar1 = *param_3;
    local_80 = &DAT_cbf29ce484222645;
    pbVar5 = param_3;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_3;
  }
  if (param_4 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a0 = (undefined1 *)*puVar6;
    pbStack_98 = (byte *)puVar6[1];
    local_90 = puVar6[2];
    local_88 = (long *)puVar6[3];
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
  }
  else {
    local_90 = strlen((char *)param_4);
    bVar1 = *param_4;
    local_a0 = &DAT_cbf29ce484222645;
    pbVar5 = param_4;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    local_88 = (long *)0x0;
    pbStack_98 = param_4;
  }
  uVar4 = FUN_02447360((float)param_1,&local_60,&local_80,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar4;
}


