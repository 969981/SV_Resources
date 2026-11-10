/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0231b8b0; name: FUN_0231b8b0
 */


void FUN_0231b8b0(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  code *local_158;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  pcVar1 = FUN_0231cf30;
  if (DAT_04847710 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
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
    local_50 = strlen((char *)param_2);
    bVar5 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar7 = param_2;
    while (bVar5 != 0) {
      pbVar7 = pbVar7 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar7;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  local_158 = (code *)0x0;
  if ((code *)param_3[2] == (code *)0x0) {
    local_d0 = (code *)0x0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
  }
  else {
    (*(code *)param_3[2])(param_3 + 4,auStack_140);
    uVar2 = *param_3;
    local_158 = (code *)param_3[1];
    pcVar3 = (code *)param_3[2];
    uVar4 = param_3[3];
    local_e0 = 0;
    local_d8 = (code *)0x0;
    local_d0 = (code *)0x0;
    uStack_c8 = 0;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(auStack_140,auStack_c0);
      local_e0 = uVar2;
      local_d8 = local_158;
      local_d0 = pcVar3;
      uStack_c8 = uVar4;
    }
  }
  FUN_0231d1ac(param_1,pcVar1,0,&local_60,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  if (local_158 != (code *)0x0) {
    (*local_158)(auStack_140);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


