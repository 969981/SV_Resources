/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02314fdc; name: FUN_02314fdc
 */


void FUN_02314fdc(undefined8 param_1,byte *param_2,byte *param_3,byte param_4,undefined4 param_5)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *local_a0;
  byte *pbStack_98;
  size_t local_90;
  long *local_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined4 local_48;
  byte local_44 [4];
  
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  puVar1 = PTR_FUN_047de4a8;
  if (DAT_048476c8 == '\0') {
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
  if (param_3 == (byte *)0x0) {
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
    local_90 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_a0 = &DAT_cbf29ce484222645;
    pbVar6 = param_3;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_88 = (long *)0x0;
    pbStack_98 = param_3;
  }
  local_44[0] = param_4 & 1;
  local_48 = param_5;
  FUN_023170d8(param_1,puVar1,0,&local_80,&local_a0,local_44,&local_48);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


