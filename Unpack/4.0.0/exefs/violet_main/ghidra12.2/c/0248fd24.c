/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0248fd24; name: FUN_0248fd24
 */


void FUN_0248fd24(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4,byte *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *local_c0;
  byte *pbStack_b8;
  size_t local_b0;
  long *local_a8;
  undefined1 *local_a0;
  byte *pbStack_98;
  size_t local_90;
  long *local_88;
  undefined8 local_80 [2];
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  puVar1 = &LAB_024921e0;
  if (DAT_0484c3a8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)puVar4;
    pbStack_68 = *(byte **)(puVar4 + 8);
    local_60 = *(size_t *)(puVar4 + 0x10);
    local_58 = *(long **)(puVar4 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar6 = param_3;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  local_80[0] = param_1;
  if (param_4 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a0 = *(undefined1 **)puVar4;
    pbStack_98 = *(byte **)(puVar4 + 8);
    local_90 = *(size_t *)(puVar4 + 0x10);
    local_88 = *(long **)(puVar4 + 0x18);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
  }
  else {
    local_90 = strlen((char *)param_4);
    bVar2 = *param_4;
    local_a0 = &DAT_cbf29ce484222645;
    pbVar6 = param_4;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_88 = (long *)0x0;
    pbStack_98 = param_4;
  }
  if (param_5 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_c0 = *(undefined1 **)puVar4;
    pbStack_b8 = *(byte **)(puVar4 + 8);
    local_b0 = *(size_t *)(puVar4 + 0x10);
    local_a8 = *(long **)(puVar4 + 0x18);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x18))();
    }
  }
  else {
    local_b0 = strlen((char *)param_5);
    bVar2 = *param_5;
    local_c0 = &DAT_cbf29ce484222645;
    pbVar6 = param_5;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_a8 = (long *)0x0;
    pbStack_b8 = param_5;
  }
  FUN_0249239c(param_2,puVar1,0,&local_70,local_80,&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


