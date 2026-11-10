/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02308e58; name: FUN_02308e58
 */


long FUN_02308e58(undefined8 *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
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
    local_70 = *(undefined1 **)puVar5;
    pbStack_68 = *(byte **)(puVar5 + 8);
    local_60 = *(size_t *)(puVar5 + 0x10);
    local_58 = *(long **)(puVar5 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_3);
    bVar3 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar7 = param_3;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  if (param_4 == (byte *)0x0) {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_90 = *(undefined1 **)puVar5;
    pbStack_88 = *(byte **)(puVar5 + 8);
    local_80 = *(size_t *)(puVar5 + 0x10);
    local_78 = *(long **)(puVar5 + 0x18);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  else {
    local_80 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_90 = &DAT_cbf29ce484222645;
    pbVar7 = param_4;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_78 = (long *)0x0;
    pbStack_88 = param_4;
  }
  iVar6 = FUN_0230a060(param_2,uVar1,uVar2,&local_70,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return (long)iVar6;
}


