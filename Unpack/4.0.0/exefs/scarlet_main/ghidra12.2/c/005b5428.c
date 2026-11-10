/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005b5428; name: FUN_005b5428
 */


undefined8 FUN_005b5428(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  *(undefined2 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xc5) = 0;
  *(long *)(param_1 + 0xe0) = param_1 + 0x80;
  *(long *)(param_1 + 0xe8) = param_1;
  if (*(char *)(param_1 + 9) != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x18);
  }
  if ((*(long *)(param_1 + 0x30) == 0) && (*(long *)(param_1 + 0x40) == 0)) goto LAB_005b5548;
  *(undefined1 *)(param_1 + 0xc1) = 1;
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x110) = param_1 + 0x39;
  *(long **)(param_1 + 0x118) = (long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x108) = param_1 + 0x40;
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = uVar5;
  *(long **)(param_1 + 0x128) = plVar2;
  if (plVar7 == (long *)0x0) {
LAB_005b54ec:
    *(undefined8 *)(param_1 + 0x130) = uVar8;
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_005b54ec;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    *(undefined8 *)(param_1 + 0x130) = uVar8;
  }
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_005b5548:
  if (*(char *)(param_1 + 0x69) != '\0') {
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0xe0) + 0x20);
  if (lVar6 == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0xe0) + 0x28);
    if (lVar6 == 0) {
      return 1;
    }
    if (*(long *)(lVar6 + 0x28) == *(long *)(lVar6 + 0x20)) {
      return 1;
    }
  }
  else if (*(long *)(lVar6 + 0x28) == *(long *)(lVar6 + 0x20)) {
    return 1;
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x88) + 0x18);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = FUN_00224e5c(param_1 + 0xb8);
  return uVar5;
}


