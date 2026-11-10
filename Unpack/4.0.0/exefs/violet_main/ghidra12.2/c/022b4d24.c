/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b4d24; name: FUN_022b4d24
 */


undefined1  [16] FUN_022b4d24(undefined8 *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 *local_a0;
  byte *pbStack_98;
  size_t local_90;
  long *local_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_047d3e30;
  puVar4 = PTR_DAT_047d3e28;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (param_3 == (byte *)0x0) {
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
    local_70 = strlen((char *)param_3);
    bVar3 = *param_3;
    local_80 = &DAT_cbf29ce484222645;
    pbVar7 = param_3;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_3;
  }
  if (param_4 == (byte *)0x0) {
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
    local_90 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_a0 = &DAT_cbf29ce484222645;
    pbVar7 = param_4;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_88 = (long *)0x0;
    pbStack_98 = param_4;
  }
  fVar8 = (float)FUN_022b7144(param_2,uVar1,uVar2,&local_80,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  auVar9._0_8_ = (double)fVar8;
  auVar9._8_8_ = 0;
  return auVar9;
}


