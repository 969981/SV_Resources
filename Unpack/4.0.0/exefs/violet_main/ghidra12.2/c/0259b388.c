/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259b388; name: FUN_0259b388
 */


void FUN_0259b388(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  code *local_148;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_38 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  else {
    local_40 = strlen((char *)param_1);
    bVar4 = *param_1;
    local_50 = &DAT_cbf29ce484222645;
    pbVar6 = param_1;
    while (bVar4 != 0) {
      pbVar6 = pbVar6 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar6;
    }
    local_38 = (long *)0x0;
    pbStack_48 = param_1;
  }
  local_148 = (code *)0x0;
  if ((code *)param_2[2] == (code *)0x0) {
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
  }
  else {
    (*(code *)param_2[2])(param_2 + 4,auStack_130);
    uVar1 = *param_2;
    local_148 = (code *)param_2[1];
    pcVar2 = (code *)param_2[2];
    uVar3 = param_2[3];
    local_d0 = 0;
    local_c8 = (code *)0x0;
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(auStack_130,auStack_b0);
      local_d0 = uVar1;
      local_c8 = local_148;
      local_c0 = pcVar2;
      uStack_b8 = uVar3;
    }
  }
  FUN_0219a828(&local_50,&local_d0);
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar2)(auStack_b0);
  }
  if (local_148 != (code *)0x0) {
    (*local_148)(auStack_130);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


