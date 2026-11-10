/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d5b278; name: FUN_01d5b278
 */


void FUN_01d5b278(char *param_1,byte *param_2,undefined8 param_3,undefined4 param_4)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  long lVar9;
  byte *pbVar10;
  short sVar11;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  long *local_28;
  
  uVar6 = DAT_04831000;
  cVar2 = *param_1;
  if (cVar2 == '\x02') {
    lVar9 = *(long *)(param_1 + 8);
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar11 = *(short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar11) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01d5b438;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01d5b438:
          bVar5 = false;
        }
        if (bVar5) {
          local_28 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            local_28 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          goto LAB_01d5b2bc;
        }
        sVar11 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\0')) {
    local_28 = *(long **)(param_1 + 8);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x58))();
    }
    goto LAB_01d5b2bc;
  }
  local_28 = (long *)0x0;
LAB_01d5b2bc:
  if (param_2 == (byte *)0x0) {
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
    local_50 = strlen((char *)param_2);
    bVar3 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar10 = param_2;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  puVar8 = (undefined2 *)FUN_017c262c(param_3);
  local_78 = *puVar8;
  local_76 = puVar8[1];
  local_74 = *(undefined1 *)(puVar8 + 2);
  local_73 = *(undefined1 *)((long)puVar8 + 5);
  local_72 = *(undefined1 *)(puVar8 + 3);
  local_70 = *(undefined4 *)(puVar8 + 4);
  uStack_6c = *(undefined4 *)(puVar8 + 6);
  local_68 = *(undefined4 *)(puVar8 + 8);
  local_7c = param_4;
  FUN_01d5e460(uVar6,&local_28,&local_60,&local_78,&local_7c);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  return;
}


