/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175093c; name: FUN_0175093c
 */


void FUN_0175093c(undefined8 param_1,byte *param_2,undefined4 param_3,byte *param_4)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *local_98;
  byte *pbStack_90;
  size_t local_88;
  long *local_80;
  undefined4 local_74;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  puVar1 = PTR_FUN_047e0168;
  if (DAT_04854250 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_2 == (byte *)0x0) {
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
    local_60 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_70 = &DAT_cbf29ce484222645;
    pbVar6 = param_2;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  local_74 = param_3;
  if (param_4 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_98 = *(undefined1 **)puVar4;
    pbStack_90 = *(byte **)(puVar4 + 8);
    local_88 = *(size_t *)(puVar4 + 0x10);
    local_80 = *(long **)(puVar4 + 0x18);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  else {
    local_88 = strlen((char *)param_4);
    bVar2 = *param_4;
    local_98 = &DAT_cbf29ce484222645;
    pbVar6 = param_4;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    local_80 = (long *)0x0;
    pbStack_90 = param_4;
  }
  FUN_01750b68(param_1,puVar1,0,&local_70,&local_74,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


