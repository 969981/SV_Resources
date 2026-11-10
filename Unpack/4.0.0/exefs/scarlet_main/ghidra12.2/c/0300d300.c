/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300d300; name: FUN_0300d300
 */


void * FUN_0300d300(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  memcpy(param_1,param_2,0x68);
  plVar5 = *(long **)((long)param_1 + 0x68);
  plVar6 = *(long **)((long)param_2 + 0x68);
  if (plVar5 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar5 = *(long **)((long)param_1 + 0x68);
      plVar6 = *(long **)((long)param_2 + 0x68);
    }
    *(long **)((long)param_1 + 0x68) = plVar6;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar6 = plVar5 + 2;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  plVar5 = *(long **)((long)param_1 + 0x70);
  plVar6 = *(long **)((long)param_2 + 0x70);
  if (plVar5 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar5 = *(long **)((long)param_1 + 0x70);
      plVar6 = *(long **)((long)param_2 + 0x70);
    }
    *(long **)((long)param_1 + 0x70) = plVar6;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar6 = plVar5 + 2;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  uVar7 = *(undefined8 *)((long)param_2 + 0x80);
  *(undefined8 *)((long)param_1 + 0x78) = *(undefined8 *)((long)param_2 + 0x78);
  *(undefined8 *)((long)param_1 + 0x80) = uVar7;
  *(undefined2 *)((long)param_1 + 0x88) = *(undefined2 *)((long)param_2 + 0x88);
  uVar7 = *(undefined8 *)((long)param_2 + 0x8c);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  *(undefined8 *)((long)param_1 + 0x8c) = uVar7;
  uVar7 = *(undefined8 *)((long)param_2 + 0x98);
  uVar1 = *(undefined8 *)((long)param_2 + 0xa0);
  uVar2 = *(undefined8 *)((long)param_2 + 0xb0);
  *(undefined8 *)((long)param_1 + 0xa8) = *(undefined8 *)((long)param_2 + 0xa8);
  *(undefined8 *)((long)param_1 + 0xb0) = uVar2;
  *(undefined8 *)((long)param_1 + 0x98) = uVar7;
  *(undefined8 *)((long)param_1 + 0xa0) = uVar1;
  return param_1;
}


