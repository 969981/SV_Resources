/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0077f820; name: FUN_0077f820
 */


void FUN_0077f820(undefined4 *param_1,long *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  uVar2 = *param_4;
  *(undefined1 *)((long)param_2 + 0x1c) = *(undefined1 *)(param_4 + 1);
  *(undefined4 *)(param_2 + 3) = uVar2;
  plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  puVar1 = PTR_DAT_047d07a8 + 0x10;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)puVar1;
  puVar1 = PTR_DAT_047d07b0;
  plVar5[4] = (long)param_2;
  plVar5[3] = (long)(puVar1 + 0x10);
  plVar7 = (long *)param_2[5];
  param_2[4] = (long)(plVar5 + 3);
  param_2[5] = (long)plVar5;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      lVar6 = *param_2;
      goto joined_r0x0077f8f0;
    }
  }
  lVar6 = *param_2;
joined_r0x0077f8f0:
  if (lVar6 == 0) {
    (*(code *)**(undefined8 **)param_2[4])(param_1,(undefined8 *)param_2[4],param_3);
    plVar5 = (long *)param_2[5];
    param_2[4] = 0;
    param_2[5] = 0;
    if (plVar5 != (long *)0x0) {
      plVar7 = plVar5 + 1;
      do {
        lVar6 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
        return;
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
  }
  return;
}


