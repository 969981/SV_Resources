/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0235287c; name: FUN_0235287c
 */


void FUN_0235287c(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  long *local_a0;
  undefined1 *local_98;
  byte *pbStack_90;
  size_t local_88;
  long *local_80;
  undefined1 auStack_78 [24];
  long *local_60;
  long *local_48;
  
  puVar1 = PTR_FUN_047de908;
  if (DAT_04849128 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_98 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_90 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_88 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_80 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  else {
    local_88 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_98 = &DAT_cbf29ce484222645;
    pbVar5 = param_3;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    local_80 = (long *)0x0;
    pbStack_90 = param_3;
  }
  puVar4 = (undefined8 *)FUN_02358904(param_4);
  local_d0 = *puVar4;
  uStack_c8 = puVar4[1];
  local_c0 = puVar4[2];
  local_b8 = (long *)puVar4[3];
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x18))();
  }
  local_b0 = puVar4[4];
  local_a8 = *(undefined1 *)(puVar4 + 5);
  local_a0 = (long *)puVar4[6];
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  FUN_02358994(auStack_78,param_2,puVar1,0,&local_98,&local_d0);
  FUN_02356f50(param_1,auStack_78);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


