/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02329934; name: FUN_02329934
 */


uint FUN_02329934(undefined8 param_1,byte *param_2,byte *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  uVar5 = DAT_048477f8;
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  uVar1 = 0x130;
  if (DAT_048477f0 == '\0') {
    uVar1 = 0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
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
    pbVar8 = param_2;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  if (param_3 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
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
    local_80 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_90 = &DAT_cbf29ce484222645;
    pbVar8 = param_3;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    local_78 = (long *)0x0;
    pbStack_88 = param_3;
  }
  uVar6 = FUN_0232c6d8(param_1,uVar1,uVar5,&local_70,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return uVar6 & 1;
}


