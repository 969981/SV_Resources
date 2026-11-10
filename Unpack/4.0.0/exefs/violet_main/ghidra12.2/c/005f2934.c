/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f2934; name: FUN_005f2934
 */


void FUN_005f2934(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *local_50;
  long *local_48;
  undefined1 auStack_38 [8];
  
  plVar4 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0xa8,8);
  plVar4[2] = 0;
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  puVar1 = PTR_DAT_047ceb38;
  plVar4[3] = (long)param_3;
  plVar5 = plVar4 + 4;
  *plVar4 = (long)(puVar1 + 0x10);
  FUN_006c4254(plVar5);
  plVar4[4] = (long)(PTR_DAT_047ceb40 + 0x10);
  nn::os::InitializeEvent(plVar4 + 6,0,0);
  plVar4[4] = (long)(PTR_DAT_047ceb48 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xb),false,0);
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *param_1 = plVar5;
  param_1[1] = plVar4;
  if (plVar4 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_50 = plVar5;
  local_48 = plVar4;
  plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0xd8,8);
  puVar1 = PTR_DAT_047ceb68 + 0x10;
  plVar5[2] = 0;
  plVar5[3] = (long)param_3;
  *plVar5 = (long)puVar1;
  plVar5[1] = 0;
  FUN_005f2b18(plVar5 + 4,&local_50,auStack_38,param_2);
  param_1[2] = plVar5 + 4;
  param_1[3] = plVar5;
  if (local_48 != (long *)0x0) {
    plVar5 = local_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


