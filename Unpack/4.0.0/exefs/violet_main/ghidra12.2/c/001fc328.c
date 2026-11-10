/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fc328; name: FUN_001fc328
 */


void FUN_001fc328(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = *(long **)(*param_2 + 0x238);
  plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,400,0x10);
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar6 = plVar4 + 2;
  *plVar6 = 0;
  puVar3 = PTR_DAT_047cba70;
  plVar4[4] = (long)plVar7;
  plVar7 = plVar4 + 6;
  *plVar4 = (long)(puVar3 + 0x10);
  FUN_002037c4(plVar7,param_2,param_3,param_4,param_7,param_8);
  if (plVar4[7] == 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[6] = (long)plVar7;
    plVar4[7] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[7] + 8) != -1) goto LAB_001fc46c;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar4[6] = (long)plVar7;
    plVar4[7] = (long)plVar4;
    std::__shared_weak_count::__release_weak();
  }
  do {
    lVar5 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
  }
LAB_001fc46c:
  FUN_0025e2b4(plVar7,param_8,param_5,param_6);
  *param_1 = (long)plVar7;
  param_1[1] = (long)plVar4;
  return;
}


