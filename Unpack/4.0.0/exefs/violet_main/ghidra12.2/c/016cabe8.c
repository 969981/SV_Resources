/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016cabe8; name: FUN_016cabe8
 */


undefined8 FUN_016cabe8(undefined8 param_1,byte *param_2,byte *param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *local_b0;
  byte *pbStack_a8;
  size_t local_a0;
  long *local_98;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  long *local_58;
  
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  puVar1 = PTR_FUN_047e0ac8;
  if (DAT_04859220 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(undefined1 **)puVar4;
    pbStack_88 = *(byte **)(puVar4 + 8);
    local_80 = *(size_t *)(puVar4 + 0x10);
    local_78 = *(long **)(puVar4 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    local_80 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_90 = &DAT_cbf29ce484222645;
    pbVar6 = param_2;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_78 = (long *)0x0;
    pbStack_88 = param_2;
  }
  if (param_3 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_b0 = *(undefined1 **)puVar4;
    pbStack_a8 = *(byte **)(puVar4 + 8);
    local_a0 = *(size_t *)(puVar4 + 0x10);
    local_98 = *(long **)(puVar4 + 0x18);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
  }
  else {
    local_a0 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_b0 = &DAT_cbf29ce484222645;
    pbVar6 = param_3;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_b0 = (undefined1 *)(((ulong)local_b0 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_98 = (long *)0x0;
    pbStack_a8 = param_3;
  }
  FUN_016cae2c(auStack_70,param_1,puVar1,0,&local_90,&local_b0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return local_68;
}


