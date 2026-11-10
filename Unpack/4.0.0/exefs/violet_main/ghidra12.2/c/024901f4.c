/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024901f4; name: FUN_024901f4
 */


void FUN_024901f4(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined1 *local_100;
  byte *pbStack_f8;
  size_t local_f0;
  long *local_e8;
  undefined1 *local_e0;
  byte *pbStack_d8;
  size_t local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  puVar1 = &LAB_0249267c;
  if (DAT_0484c3b8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  if (param_2 == (byte *)0x0) {
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
    local_70 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_80 = &DAT_cbf29ce484222645;
    pbVar6 = param_2;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_2;
  }
  if ((1 < *param_3) ||
     (puVar7 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047d5148 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_047d5148);
      puVar7 = (undefined8 *)PTR_DAT_047d5150;
      if (iVar5 != 0) {
        *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
        *(undefined8 *)((long)puVar7 + 0x38) = 0;
        *(undefined8 *)((long)puVar7 + 0x20) = 0;
        *(undefined8 *)((long)puVar7 + 0x28) = 0;
        *(undefined8 *)((long)puVar7 + 0x10) = 0;
        *(undefined8 *)((long)puVar7 + 0x18) = 0;
        *puVar7 = 0;
        *(undefined8 *)((long)puVar7 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d5148);
      }
    }
    else {
      puVar7 = (undefined8 *)PTR_DAT_047d5150;
    }
  }
  uStack_b8 = puVar7[1];
  local_c0 = *puVar7;
  uStack_a8 = puVar7[3];
  uStack_b0 = puVar7[2];
  uStack_98 = puVar7[5];
  local_a0 = puVar7[4];
  uStack_88 = puVar7[7];
  uStack_90 = puVar7[6];
  if (param_4 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_e0 = *(undefined1 **)puVar4;
    pbStack_d8 = *(byte **)(puVar4 + 8);
    local_d0 = *(size_t *)(puVar4 + 0x10);
    local_c8 = *(long **)(puVar4 + 0x18);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x18))();
    }
  }
  else {
    local_d0 = strlen((char *)param_4);
    bVar2 = *param_4;
    local_e0 = &DAT_cbf29ce484222645;
    pbVar6 = param_4;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_e0 = (undefined1 *)(((ulong)local_e0 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_c8 = (long *)0x0;
    pbStack_d8 = param_4;
  }
  if (param_5 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_100 = *(undefined1 **)puVar4;
    pbStack_f8 = *(byte **)(puVar4 + 8);
    local_f0 = *(size_t *)(puVar4 + 0x10);
    local_e8 = *(long **)(puVar4 + 0x18);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))();
    }
  }
  else {
    local_f0 = strlen((char *)param_5);
    bVar2 = *param_5;
    local_100 = &DAT_cbf29ce484222645;
    pbVar6 = param_5;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_100 = (undefined1 *)(((ulong)local_100 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_e8 = (long *)0x0;
    pbStack_f8 = param_5;
  }
  FUN_02492838(param_1,puVar1,0,&local_80,&local_c0,&local_e0,&local_100);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


