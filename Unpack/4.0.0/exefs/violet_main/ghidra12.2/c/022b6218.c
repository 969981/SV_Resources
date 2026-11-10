/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b6218; name: FUN_022b6218
 */


void FUN_022b6218(undefined1 *param_1,undefined8 param_2,byte *param_3,undefined4 param_4,
                 byte *param_5,byte param_6)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte local_ac [4];
  undefined1 *local_a8;
  byte *pbStack_a0;
  size_t local_98;
  long *local_90;
  undefined4 local_84;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  puVar1 = PTR_FUN_047ddf70;
  if (DAT_04846308 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)puVar4;
    pbStack_78 = *(byte **)(puVar4 + 8);
    local_70 = *(size_t *)(puVar4 + 0x10);
    local_68 = *(long **)(puVar4 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_80 = &DAT_cbf29ce484222645;
    pbVar7 = param_3;
    while (bVar2 != 0) {
      pbVar7 = pbVar7 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar7;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_3;
  }
  local_84 = param_4;
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
    pbVar7 = param_5;
    while (bVar2 != 0) {
      pbVar7 = pbVar7 + 1;
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar7;
    }
    local_90 = (long *)0x0;
    pbStack_a0 = param_5;
  }
  local_ac[0] = param_6 & 1;
  uVar6 = FUN_022b7330(param_2,puVar1,0,&local_80,&local_84,&local_a8,local_ac);
  *(undefined8 *)(param_1 + 8) = uVar6;
  *param_1 = 0;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


