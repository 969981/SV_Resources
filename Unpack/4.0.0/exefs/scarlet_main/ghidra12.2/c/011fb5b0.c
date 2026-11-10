/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011fb5b0; name: FUN_011fb5b0
 */


void FUN_011fb5b0(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar3 = PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  pcVar6 = (code *)*param_1;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)puVar3;
    pbStack_58 = *(byte **)(puVar3 + 8);
    local_50 = *(size_t *)(puVar3 + 0x10);
    local_48 = *(long **)(puVar3 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  if (param_3 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)puVar3;
    pbStack_78 = *(byte **)(puVar3 + 8);
    local_70 = *(size_t *)(puVar3 + 0x10);
    local_68 = *(long **)(puVar3 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_3);
    bVar1 = *param_3;
    local_80 = &DAT_cbf29ce484222645;
    pbVar5 = param_3;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_3;
  }
  (*pcVar6)(&local_60,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


