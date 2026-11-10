/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02329164; name: FUN_02329164
 */


undefined4 FUN_02329164(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 local_174;
  undefined8 local_170;
  code *local_168;
  code *local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  puVar1 = &LAB_0230fb9c;
  if (DAT_048477e8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
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
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = (code *)0x0;
  uStack_158 = 0;
  if ((code *)param_3[2] == (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
  }
  else {
    (*(code *)param_3[2])(param_3 + 4,auStack_150);
    local_170 = *param_3;
    local_168 = (code *)param_3[1];
    local_160 = (code *)param_3[2];
    uStack_158 = param_3[3];
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    if (local_160 != (code *)0x0) {
      (*local_160)(auStack_150,auStack_d0);
      local_f0 = local_170;
      local_e8 = local_168;
      local_e0 = local_160;
      uStack_d8 = uStack_158;
    }
  }
  local_174 = param_4;
  uVar4 = FUN_0232c2bc(param_1,puVar1,0,&local_70,&local_f0,&local_174);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return uVar4;
}


