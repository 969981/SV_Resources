/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ba82c; name: FUN_027ba82c
 */


void FUN_027ba82c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *local_48;
  
  FUN_01f78de8();
  *param_1 = &PTR_FUN_045e1610;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[4] = &PTR_LAB_045e1698;
  param_1[5] = &DAT_045e16e8;
  param_1[10] = param_2;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_2 != 0) {
    FUN_027bb200(auStack_50,param_2,param_3,param_4);
    FUN_027bb580(param_1 + 0xb,auStack_50);
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


