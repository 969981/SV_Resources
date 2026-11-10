/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0234ef94; name: FUN_0234ef94
 */


void FUN_0234ef94(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 byte *param_5,undefined8 param_6,byte param_7)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  byte local_b4 [4];
  undefined8 local_b0;
  undefined1 *local_a8;
  byte *pbStack_a0;
  size_t local_98;
  long *local_90;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  puVar1 = PTR_FUN_047de8f0;
  if (DAT_048490f8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_68 = param_3;
  local_48 = param_2;
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_88 = *(undefined1 **)puVar4;
    pbStack_80 = *(byte **)(puVar4 + 8);
    local_78 = *(size_t *)(puVar4 + 0x10);
    local_70 = *(long **)(puVar4 + 0x18);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  else {
    local_78 = strlen((char *)param_4);
    bVar2 = *param_4;
    local_88 = &DAT_cbf29ce484222645;
    pbVar6 = param_4;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_70 = (long *)0x0;
    pbStack_80 = param_4;
  }
  if (param_5 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a8 = *(undefined1 **)puVar4;
    pbStack_a0 = *(byte **)(puVar4 + 8);
    local_98 = *(size_t *)(puVar4 + 0x10);
    local_90 = *(long **)(puVar4 + 0x18);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))();
    }
  }
  else {
    local_98 = strlen((char *)param_5);
    bVar2 = *param_5;
    local_a8 = &DAT_cbf29ce484222645;
    pbVar6 = param_5;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_90 = (long *)0x0;
    pbStack_a0 = param_5;
  }
  local_b4[0] = param_7 & 1;
  local_b0 = param_6;
  FUN_02354958(param_1,puVar1,0,&local_48,&local_68,&local_88,&local_a8,&local_b0,local_b4);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


