/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116fab8; name: FUN_0116fab8
 */


void FUN_0116fab8(long *param_1,void *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *local_80 [6];
  long *local_50;
  
  lVar6 = param_1[4];
  plVar5 = (long *)*param_1;
  lVar4 = FUN_011706bc(lVar6);
  if (lVar4 != 0) {
    local_80[0] = param_2;
    lVar4 = FUN_01170930(lVar6,param_2,local_80);
    FUN_01171d08(plVar5,*(undefined8 *)(lVar4 + 0x40));
  }
  memcpy(local_80,param_2,0x30);
  local_50 = (long *)*param_3;
  if ((local_50 != (long *)0x0) && (local_50[1] != 0)) {
    plVar7 = local_50 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0117047c(plVar5,local_80);
  if ((local_50 != (long *)0x0) && (local_50[1] != 0)) {
    plVar7 = local_50 + 2;
    do {
      lVar4 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  lVar8 = plVar5[1];
  local_80[0] = param_2;
  lVar4 = FUN_01170930(lVar6,param_2,local_80);
  *(long *)(lVar4 + 0x40) = lVar8;
  if ((ulong)*(uint *)(param_1 + 8) < (ulong)plVar5[2]) {
    lVar4 = *plVar5;
    memcpy(local_80,(void *)(lVar4 + 0x10),0x30);
    plVar7 = *(long **)(lVar4 + 0x40);
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_50 = plVar7;
    FUN_01171c48(lVar6,local_80);
    FUN_01171dd4(plVar5);
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar5 = plVar7 + 2;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  return;
}


