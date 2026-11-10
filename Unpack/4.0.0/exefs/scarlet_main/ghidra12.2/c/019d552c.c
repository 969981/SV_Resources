/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d552c; name: FUN_019d552c
 */


void FUN_019d552c(undefined8 param_1,byte *param_2,undefined4 param_3,byte *param_4,byte *param_5)

{
  undefined *puVar1;
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
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  puVar1 = PTR_FUN_047ded50;
  if (DAT_0484c3c0 == '\0') {
    puVar1 = (undefined *)0x0;
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
  local_44 = param_3;
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
  FUN_019d5834(param_1,puVar1,0,&local_80,&local_44,&local_a0,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


