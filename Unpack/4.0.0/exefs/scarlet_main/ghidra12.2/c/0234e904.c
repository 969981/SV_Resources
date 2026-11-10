/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0234e904; name: FUN_0234e904
 */


void FUN_0234e904(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte *param_5,byte *param_6,byte param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  byte local_ac [4];
  undefined1 *local_a8;
  byte *pbStack_a0;
  size_t local_98;
  long *local_90;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_047d3e30;
  puVar4 = PTR_DAT_047d3e28;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  local_68 = param_4;
  local_48 = param_3;
  if (param_5 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_88 = *(undefined1 **)puVar5;
    pbStack_80 = *(byte **)(puVar5 + 8);
    local_78 = *(size_t *)(puVar5 + 0x10);
    local_70 = *(long **)(puVar5 + 0x18);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  else {
    local_78 = strlen((char *)param_5);
    bVar3 = *param_5;
    local_88 = &DAT_cbf29ce484222645;
    pbVar7 = param_5;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_70 = (long *)0x0;
    pbStack_80 = param_5;
  }
  if (param_6 == (byte *)0x0) {
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a8 = *(undefined1 **)puVar5;
    pbStack_a0 = *(byte **)(puVar5 + 8);
    local_98 = *(size_t *)(puVar5 + 0x10);
    local_90 = *(long **)(puVar5 + 0x18);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))();
    }
  }
  else {
    local_98 = strlen((char *)param_6);
    bVar3 = *param_6;
    local_a8 = &DAT_cbf29ce484222645;
    pbVar7 = param_6;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    local_90 = (long *)0x0;
    pbStack_a0 = param_6;
  }
  local_ac[0] = param_7 & 1;
  FUN_023541a0(param_2,uVar1,uVar2,&local_48,&local_68,&local_88,&local_a8,local_ac);
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


