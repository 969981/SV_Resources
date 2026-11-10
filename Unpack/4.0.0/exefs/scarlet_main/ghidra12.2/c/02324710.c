/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02324710; name: FUN_02324710
 */


undefined4
FUN_02324710(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
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
  undefined8 local_38;
  
  pcVar1 = FUN_0232810c;
  if (DAT_04847770 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
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
    pbVar5 = param_2;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  uVar6 = 0;
  pcVar7 = (code *)0x0;
  pcVar8 = (code *)0x0;
  uVar9 = 0;
  local_38 = param_3;
  if ((code *)param_4[2] == (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
  }
  else {
    (*(code *)param_4[2])(param_4 + 4,auStack_150);
    uVar6 = *param_4;
    pcVar7 = (code *)param_4[1];
    pcVar8 = (code *)param_4[2];
    uVar9 = param_4[3];
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(auStack_150,auStack_d0);
      local_f0 = uVar6;
      local_e8 = pcVar7;
      local_e0 = pcVar8;
      uStack_d8 = uVar9;
    }
  }
  uVar3 = FUN_023281ac(param_1,pcVar1,0,&local_70,&local_38,&local_f0,param_7,param_8,uVar6,pcVar7,
                       pcVar8,uVar9);
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(auStack_150);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return uVar3;
}


