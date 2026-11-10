/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c23d8; name: FUN_017c23d8
 */


void FUN_017c23d8(undefined8 param_1,undefined8 *param_2,char *param_3,byte *param_4,
                 undefined8 param_5,undefined4 param_6,byte param_7)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  long lVar8;
  byte *pbVar9;
  short sVar10;
  undefined8 uVar11;
  byte local_a4 [4];
  undefined8 local_a0 [3];
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 *local_68;
  byte *pbStack_60;
  size_t local_58;
  long *local_50;
  long *local_48;
  
  cVar2 = *param_3;
  uVar11 = *param_2;
  if (cVar2 == '\x02') {
    lVar8 = *(long *)(param_3 + 8);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar10) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_017c25b4;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_017c25b4:
          bVar5 = false;
        }
        if (bVar5) {
          local_48 = (long *)0x0;
          if (*(long *)(lVar8 + 0x10) != 0) {
            local_48 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
          }
          goto LAB_017c2420;
        }
        sVar10 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\0')) {
    local_48 = *(long **)(param_3 + 8);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x58))();
    }
    goto LAB_017c2420;
  }
  local_48 = (long *)0x0;
LAB_017c2420:
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_68 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_60 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_58 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_50 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  else {
    local_58 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_68 = &DAT_cbf29ce484222645;
    pbVar9 = param_4;
    while (bVar3 != 0) {
      pbVar9 = pbVar9 + 1;
      local_68 = (undefined1 *)(((ulong)local_68 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar9;
    }
    local_50 = (long *)0x0;
    pbStack_60 = param_4;
  }
  puVar7 = (undefined2 *)FUN_017c262c(param_5);
  local_80 = *puVar7;
  local_7e = puVar7[1];
  local_7c = *(undefined1 *)(puVar7 + 2);
  local_7b = *(undefined1 *)((long)puVar7 + 5);
  local_7a = *(undefined1 *)(puVar7 + 3);
  local_78 = *(undefined4 *)(puVar7 + 4);
  uStack_74 = *(undefined4 *)(puVar7 + 6);
  local_70 = *(undefined4 *)(puVar7 + 8);
  local_a4[0] = param_7 & 1;
  local_a0[0] = param_1;
  local_84 = param_6;
  FUN_017c26c0(uVar11,&local_48,&local_68,&local_80,&local_84,local_a0,local_a4);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  return;
}


