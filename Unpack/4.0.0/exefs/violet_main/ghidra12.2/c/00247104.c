/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00247104; name: FUN_00247104
 */


void FUN_00247104(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_047cc0c8 + 0x10);
  if (param_1[5] != 0) {
    lVar3 = param_1[3];
    plVar6 = (long *)param_1[4];
    plVar5 = param_1 + 3;
    lVar4 = *plVar6;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    param_1[5] = 0;
    if (plVar6 != plVar5) {
      do {
        plVar7 = (long *)plVar6[1];
        (**(code **)plVar6[2])();
        (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar6,0x40,8);
        plVar6 = plVar7;
      } while (plVar7 != plVar5);
      if (param_1[5] != 0) {
        lVar3 = param_1[3];
        plVar6 = (long *)param_1[4];
        lVar4 = *plVar6;
        *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
        **(long **)(lVar3 + 8) = lVar4;
        param_1[5] = 0;
        while (plVar6 != plVar5) {
          plVar7 = (long *)plVar6[1];
          (**(code **)plVar6[2])();
          (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar6,0x40,8);
          plVar6 = plVar7;
        }
      }
    }
  }
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 1;
    do {
      lVar3 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


