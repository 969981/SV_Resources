/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054f798; name: FUN_0054f798
 */


void FUN_0054f798(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  
  plVar4 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
  plVar4[2] = 0;
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  puVar1 = PTR_DAT_047cbb10;
  plVar4[3] = (long)param_3;
  plVar5 = plVar4 + 4;
  *plVar4 = (long)(puVar1 + 0x10);
  FUN_006c4254(plVar5);
  plVar4[4] = (long)(PTR_DAT_047cbb18 + 0x10);
  nn::os::InitializeEvent(plVar4 + 6,0,0);
  plVar4[4] = (long)(PTR_DAT_047cbb20 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xb),false,0);
  *(undefined1 *)((long)plVar4 + 0x79) = 0;
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
  local_58 = plVar5;
  local_50 = plVar4;
  plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,400,8);
  puVar1 = PTR_DAT_047cdf50 + 0x10;
  plVar5[2] = 0;
  plVar5[3] = (long)param_3;
  *plVar5 = (long)puVar1;
  plVar5[1] = 0;
  FUN_0054f9f8(plVar5 + 4,&local_58,auStack_48,param_3,param_4,param_2);
  param_1[2] = plVar5 + 4;
  param_1[3] = plVar5;
  if (local_50 != (long *)0x0) {
    plVar5 = local_50 + 1;
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
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


