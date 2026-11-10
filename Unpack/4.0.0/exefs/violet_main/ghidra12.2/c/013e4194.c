/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e4194; name: FUN_013e4194
 */


void FUN_013e4194(long *param_1,char *param_2,byte *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  code *pcVar11;
  code *local_168;
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
  
  pcVar11 = (code *)*param_1;
  uVar3 = param_1[1];
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
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
    local_60 = strlen((char *)param_3);
    bVar6 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar6 != 0) {
      pbVar10 = pbVar10 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar10;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  local_168 = (code *)0x0;
  if ((code *)param_4[2] == (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
  }
  else {
    (*(code *)param_4[2])(param_4 + 4,auStack_150);
    uVar1 = *param_4;
    local_168 = (code *)param_4[1];
    pcVar2 = (code *)param_4[2];
    uVar4 = param_4[3];
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(auStack_150,auStack_d0);
      local_f0 = uVar1;
      local_e8 = local_168;
      local_e0 = pcVar2;
      uStack_d8 = uVar4;
    }
  }
  cVar5 = *param_2;
  if (cVar5 == '\0') {
LAB_013e4264:
    if (*(long *)(param_2 + 8) == 0) goto LAB_013e4288;
    plVar8 = (long *)(*(long *)(param_2 + 8) + ((long)uVar3 >> 1));
  }
  else {
    if (cVar5 != '\x02') {
      if (cVar5 != '\x01') {
        if (cVar5 == '\x03') {
          FUN_013e4828(param_2 + 8,pcVar11,uVar3,&local_70,&local_f0);
        }
        goto LAB_013e4288;
      }
      goto LAB_013e4264;
    }
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar9 == 0)) goto LAB_013e4288;
    plVar8 = (long *)(lVar9 + ((long)uVar3 >> 1) + -0x28);
  }
  if ((uVar3 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *plVar8);
  }
  (*pcVar11)(plVar8,&local_70,&local_f0);
LAB_013e4288:
  pcVar11 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar11)(auStack_d0);
  }
  if (local_168 != (code *)0x0) {
    (*local_168)(auStack_150);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


