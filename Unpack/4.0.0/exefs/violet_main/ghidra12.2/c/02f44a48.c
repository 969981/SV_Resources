/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f44a48; name: FUN_02f44a48
 */


undefined4 FUN_02f44a48(long param_1,void *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 auStack_108 [104];
  long *local_a0;
  long *local_98;
  undefined1 auStack_90 [64];
  
  lVar7 = *(long *)(param_1 + 0x498);
  if ((~*(uint *)(lVar7 + 0x24) & 0xffffff) == 0) {
    FUN_02f44ce8(param_1 + 0x7a0,param_1);
    lVar7 = *(long *)(param_1 + 0x498);
  }
  uVar6 = FUN_0300e194(lVar7,param_2);
  lVar7 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    bVar5 = false;
    iVar9 = -1;
    bVar4 = false;
  }
  else {
    lVar10 = (long)DAT_0486b380;
    lVar8 = *(long *)(lVar7 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar7 + 0x1000b8) = lVar8;
      iVar11 = DAT_0486b380;
      iVar9 = (int)*(undefined8 *)(lVar8 + lVar10 * 8 + 1000);
      if (lVar8 == 0) {
        lVar8 = FUN_00e5d3b4();
        *(long *)(lVar7 + 0x1000b8) = lVar8;
      }
    }
    else {
      iVar9 = (int)*(undefined8 *)(lVar8 + lVar10 * 8 + 1000);
      iVar11 = DAT_0486b380;
    }
    *(long *)(lVar8 + (long)iVar11 * 8 + 1000) = (long)(iVar9 + 1);
    bVar4 = *(long *)(param_1 + 0x800) != 0;
    bVar5 = iVar9 == 0;
  }
  if (((bool)(bVar5 & bVar4)) || (*(char *)(param_1 + 0x999) != '\0')) {
    local_118 = 0x43020000d0;
    local_110 = uVar6;
    memcpy(auStack_108,param_2,0x68);
    local_a0 = *(long **)((long)param_2 + 0x68);
    if ((local_a0 != (long *)0x0) && (local_a0[1] != 0)) {
      plVar1 = local_a0 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_98 = *(long **)((long)param_2 + 0x70);
    if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
      plVar1 = local_98 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    memcpy(auStack_90,(void *)((long)param_2 + 0x78),0x40);
    if ((bool)(bVar5 & bVar4)) {
      (**(code **)(**(long **)(param_1 + 0x800) + 0x20))(*(long **)(param_1 + 0x800),&local_118);
    }
    if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
      plVar1 = local_98 + 2;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_98 + 0x18))();
      }
    }
    if ((local_a0 != (long *)0x0) && (local_a0[1] != 0)) {
      plVar1 = local_a0 + 2;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_a0 + 0x18))();
      }
    }
  }
  if (iVar9 != -1) {
    lVar10 = (long)DAT_0486b380;
    lVar8 = *(long *)(lVar7 + 0x1000b8);
    if (lVar8 == 0) {
      lVar8 = FUN_00e5d3b4();
      *(long *)(lVar7 + 0x1000b8) = lVar8;
    }
    *(long *)(lVar8 + lVar10 * 8 + 1000) = (long)iVar9;
  }
  return uVar6;
}


