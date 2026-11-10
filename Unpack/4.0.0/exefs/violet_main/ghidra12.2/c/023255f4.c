/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023255f4; name: FUN_023255f4
 */


undefined4 FUN_023255f4(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  code *local_168;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70 [2];
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar1 = &LAB_02328434;
  if (DAT_04847790 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_3);
    bVar5 = *param_3;
    local_60 = &DAT_cbf29ce484222645;
    pbVar8 = param_3;
    while (bVar5 != 0) {
      pbVar8 = pbVar8 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar8;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_3;
  }
  local_168 = (code *)0x0;
  local_70[0] = param_1;
  if ((code *)param_4[2] == (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
  }
  else {
    (*(code *)param_4[2])(param_4 + 4,auStack_150);
    uVar2 = *param_4;
    local_168 = (code *)param_4[1];
    pcVar3 = (code *)param_4[2];
    uVar4 = param_4[3];
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(auStack_150,auStack_d0);
      local_f0 = uVar2;
      local_e8 = local_168;
      local_e0 = pcVar3;
      uStack_d8 = uVar4;
    }
  }
  uVar6 = FUN_02328558(param_2,puVar1,0,&local_60,local_70,&local_f0);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  if (local_168 != (code *)0x0) {
    (*local_168)(auStack_150);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar6;
}


