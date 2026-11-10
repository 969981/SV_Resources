/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00375508; name: FUN_00375508
 */


void FUN_00375508(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  long *local_38;
  long *local_30;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  lVar6 = *param_4;
  if (lVar6 == 0) {
    param_1[3] = PTR_LAB_047ccf60;
    param_1[4] = param_1;
    param_1[5] = 0;
                    /* try { // try from 003755c8 to 003755d3 has its CatchHandler @ 00375600 */
    FUN_0035351c(auStack_40,param_1 + 2,0);
  }
  else {
    local_30 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    puVar4 = PTR_DAT_047ccf50;
    local_30[2] = 0;
    puVar5 = PTR_DAT_047ccf58;
    local_30[4] = (long)param_1;
    *local_30 = (long)(puVar4 + 0x10);
    local_30[1] = 0;
    local_38 = local_30 + 3;
    *local_38 = (long)(puVar5 + 0x10);
                    /* try { // try from 00375574 to 00375583 has its CatchHandler @ 00375608 */
    FUN_003627bc(lVar6,&local_38,auStack_40);
    if (local_30 != (long *)0x0) {
      plVar1 = local_30 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
        return;
      }
    }
  }
  return;
}


