/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0248e0f4; name: FUN_0248e0f4
 */


void FUN_0248e0f4(undefined8 param_1,undefined2 param_2,byte *param_3,byte *param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_24 [2];
  
  puVar1 = PTR_LAB_047ded10;
  if (DAT_0484c368 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24[0] = param_2;
  if ((1 < *param_3) ||
     (puVar5 = *(undefined **)(param_3 + 8), *(undefined **)(param_3 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4538 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d4538);
      puVar5 = PTR_DAT_047d4540;
      if (iVar3 != 0) {
        FUN_01667884(&local_70);
        *(byte **)(puVar5 + 8) = pbStack_68;
        *(undefined1 **)puVar5 = local_70;
        *(long **)(puVar5 + 0x18) = local_58;
        *(size_t *)(puVar5 + 0x10) = local_60;
        *(undefined8 *)(puVar5 + 0x28) = uStack_48;
        *(undefined8 *)(puVar5 + 0x20) = local_50;
        __cxa_guard_release(PTR_DAT_047d4538);
      }
    }
    else {
      puVar5 = PTR_DAT_047d4540;
    }
  }
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_4);
    bVar2 = *param_4;
    local_70 = &DAT_cbf29ce484222645;
    pbVar4 = param_4;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_4;
  }
  FUN_0249163c(param_1,puVar1,0,local_24,puVar5,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


