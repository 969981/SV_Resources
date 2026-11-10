/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b7d6c8; name: FUN_01b7d6c8
 */


void FUN_01b7d6c8(double param_1,double param_2,undefined8 param_3,byte *param_4,undefined8 *param_5
                 )

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 in_x7;
  byte *pbVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  code *local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [104];
  float local_78;
  float fStack_74;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  puVar1 = PTR_LAB_047d4d68;
  if (DAT_0480a478 == '\0') {
    puVar1 = (undefined *)0x0;
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
  fStack_74 = (float)param_1;
  local_78 = (float)param_2;
  uVar5 = 0;
  pcVar6 = (code *)0x0;
  pcVar7 = (code *)0x0;
  uVar8 = 0;
  if ((code *)param_5[2] == (code *)0x0) {
    local_f0 = (code *)0x0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
  }
  else {
    (*(code *)param_5[2])(param_5 + 4,auStack_160);
    uVar5 = *param_5;
    pcVar6 = (code *)param_5[1];
    pcVar7 = (code *)param_5[2];
    uVar8 = param_5[3];
    local_100 = 0;
    local_f8 = (code *)0x0;
    local_f0 = (code *)0x0;
    uStack_e8 = 0;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(auStack_160,auStack_e0);
      local_100 = uVar5;
      local_f8 = pcVar6;
      local_f0 = pcVar7;
      uStack_e8 = uVar8;
    }
  }
  FUN_01b7ef54(param_3,puVar1,0,&local_70,&fStack_74,&local_78,&local_100,in_x7,uVar5,pcVar6,pcVar7,
               uVar8);
  pcVar7 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar7)(auStack_e0);
  }
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(auStack_160);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


