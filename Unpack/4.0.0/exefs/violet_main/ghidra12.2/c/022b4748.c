/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b4748; name: FUN_022b4748
 */


void FUN_022b4748(double param_1,undefined8 *param_2,undefined8 param_3,byte *param_4,byte *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *local_a0;
  byte *pbStack_98;
  size_t local_90;
  long *local_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  float local_54;
  
  puVar5 = PTR_DAT_047d3e30;
  puVar4 = PTR_DAT_047d3e28;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)puVar5;
    pbStack_78 = *(byte **)(puVar5 + 8);
    local_70 = *(size_t *)(puVar5 + 0x10);
    local_68 = *(long **)(puVar5 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_80 = &DAT_cbf29ce484222645;
    pbVar7 = param_4;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_4;
  }
  local_54 = (float)param_1;
  if (param_5 == (byte *)0x0) {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a0 = *(undefined1 **)puVar5;
    pbStack_98 = *(byte **)(puVar5 + 8);
    local_90 = *(size_t *)(puVar5 + 0x10);
    local_88 = *(long **)(puVar5 + 0x18);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
  }
  else {
    local_90 = strlen((char *)param_5);
    bVar3 = *param_5;
    local_a0 = &DAT_cbf29ce484222645;
    pbVar7 = param_5;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_88 = (long *)0x0;
    pbStack_98 = param_5;
  }
  FUN_022b6e8c(param_3,uVar1,uVar2,&local_80,&local_54,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


