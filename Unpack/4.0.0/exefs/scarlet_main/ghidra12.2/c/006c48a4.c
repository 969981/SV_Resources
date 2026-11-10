/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c48a4; name: FUN_006c48a4
 */


void FUN_006c48a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_006c4ae0();
  uVar2 = *(undefined8 *)(lVar6 + 8);
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plVar8 = (long *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = uVar3;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
      lVar7 = FUN_006c4ae0();
      uVar2 = *param_2;
      lVar6 = param_2[1];
      goto joined_r0x006c48f8;
    }
  }
  lVar7 = FUN_006c4ae0();
  uVar2 = *param_2;
  lVar6 = param_2[1];
joined_r0x006c48f8:
  if (lVar6 != 0) {
    plVar8 = (long *)(lVar6 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = *(long **)(lVar7 + 0x10);
  *(undefined8 *)(lVar7 + 8) = uVar2;
  *(long *)(lVar7 + 0x10) = lVar6;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


