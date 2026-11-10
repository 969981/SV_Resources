/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190c404; name: FUN_0190c404
 */


uint FUN_0190c404(undefined8 param_1,undefined4 param_2,char *param_3,byte *param_4,uint param_5)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  byte *pbVar10;
  short sVar11;
  long *plVar12;
  undefined8 local_70 [2];
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  long *local_28;
  
  cVar2 = *param_3;
  if (cVar2 == '\x02') {
    lVar8 = *(long *)(param_3 + 8);
    if (lVar8 != 0) {
      if (*(short *)(lVar8 + 0x1a) == 0) {
        plVar12 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar8 + 0x1a);
        sVar11 = *(short *)(lVar8 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar11) {
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_0190c5c4;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0190c5c4:
            bVar5 = false;
          }
          if (bVar5) {
            plVar12 = (long *)0x0;
            if (*(long *)(lVar8 + 0x10) != 0) {
              plVar12 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
            }
            break;
          }
          plVar12 = (long *)0x0;
          sVar11 = sVar4;
        } while (sVar4 != 0);
      }
      goto LAB_0190c440;
    }
LAB_0190c43c:
    plVar12 = (long *)0x0;
  }
  else {
    if (cVar2 == '\x01') {
      plVar12 = *(long **)(param_3 + 8);
      if (plVar12 == (long *)0x0) goto LAB_0190c440;
      pcVar9 = *(code **)(*plVar12 + 0x58);
    }
    else {
      if (cVar2 != '\0') goto LAB_0190c43c;
      plVar12 = *(long **)(param_3 + 8);
      if (plVar12 == (long *)0x0) goto LAB_0190c440;
      pcVar9 = *(code **)(*plVar12 + 0x58);
    }
    (*pcVar9)(plVar12);
  }
LAB_0190c440:
  if (param_4 == (byte *)0x0) {
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
    local_50 = strlen((char *)param_4);
    bVar3 = *param_4;
    local_60 = &DAT_cbf29ce484222645;
    pbVar10 = param_4;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_4;
  }
  local_70[0] = param_1;
  local_28 = plVar12;
  uVar6 = FUN_0190c650(param_2,&local_28,&local_60,local_70,param_5 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar6 & 1;
}


