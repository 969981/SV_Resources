/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bc64c; name: FUN_027bc64c
 */


undefined8
FUN_027bc64c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_490 [16];
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  long *local_458;
  undefined1 auStack_450 [8];
  byte local_448;
  undefined7 uStack_447;
  undefined8 local_438;
  long *plStack_430;
  long alStack_3d0 [4];
  long *local_3b0;
  long alStack_350 [4];
  long *local_330;
  long alStack_2d0 [4];
  long *local_2b0;
  undefined1 auStack_260 [128];
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_160 [4];
  long *local_140;
  long alStack_e0 [4];
  long *local_c0;
  
  if ((*(long *)(param_1 + 0x1f0) == 0) && (*(char *)(param_1 + 0x1d0) == '\0')) {
    lVar5 = *(long *)(param_1 + 0x98);
    lVar7 = *(long *)(param_1 + 0xa0);
    while (lVar7 != lVar5) {
      lVar7 = lVar7 + -8;
      FUN_01e72cdc(lVar7);
    }
    *(long *)(param_1 + 0xa0) = lVar5;
    FUN_027bc9e4(auStack_450);
    local_460 = 3;
    local_458 = (long *)0x0;
    FUN_027bcb28(auStack_260,auStack_450,&local_460);
    if (local_2b0 != (long *)0x0) {
      if (local_2b0 == alStack_2d0) {
        pcVar4 = *(code **)(*local_2b0 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*local_2b0 + 0x18);
      }
      (*pcVar4)();
    }
    if (local_330 != (long *)0x0) {
      if (local_330 == alStack_350) {
        pcVar4 = *(code **)(*local_330 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*local_330 + 0x18);
      }
      (*pcVar4)();
    }
    if (local_3b0 != (long *)0x0) {
      if (local_3b0 == alStack_3d0) {
        pcVar4 = *(code **)(*local_3b0 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*local_3b0 + 0x18);
      }
      (*pcVar4)();
    }
    FUN_027bcd88(auStack_450,param_2);
    uVar6 = FUN_01cf7e20();
    FUN_027bcdf4(&local_480,param_3,uVar6);
    uStack_468 = uStack_478;
    local_470 = local_480;
    local_480 = 0;
    uStack_478 = 0;
    FUN_027bce40(auStack_490,auStack_260);
    FUN_027bcec8(&local_460,param_1 + 0x2c,&local_470,auStack_450,auStack_490);
    FUN_027bc5d8((long *)(param_1 + 0x88),&local_460);
    if (local_458 != (long *)0x0) {
      plVar1 = local_458 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_458 + 0x10))(local_458);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_027bd07c(auStack_490);
    FUN_027bd0d4(&local_470);
    FUN_027bd12c(&local_480);
    if (*(long *)(param_1 + 0x88) == 0) {
      uVar6 = 0;
    }
    else {
      FUN_027bd184(&local_460);
      FUN_00e5ed80(param_1 + 0x1f0,&local_460);
      if (local_458 != (long *)0x0) {
        plVar1 = local_458 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*local_458 + 0x10))(local_458);
          std::__shared_weak_count::__release_weak();
        }
      }
      pcVar4 = *(code **)(param_1 + 0xd8);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        (*pcVar4)(param_1 + 0xf0);
      }
      if ((code *)param_4[2] != (code *)0x0) {
        (*(code *)param_4[2])(param_4 + 4,param_1 + 0xf0);
        uVar6 = param_4[3];
        *(undefined8 *)(param_1 + 0xd8) = param_4[1];
        *(undefined8 *)(param_1 + 0xe8) = uVar6;
        uVar6 = *param_4;
        *(undefined8 *)(param_1 + 0xe0) = param_4[2];
        *(undefined8 *)(param_1 + 0xd0) = uVar6;
      }
      pcVar4 = *(code **)(param_1 + 0x158);
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x150) = 0;
        *(undefined8 *)(param_1 + 0x158) = 0;
        (*pcVar4)(param_1 + 0x170);
      }
      if ((code *)param_5[2] != (code *)0x0) {
        (*(code *)param_5[2])(param_5 + 4,param_1 + 0x170);
        uVar6 = param_5[3];
        *(undefined8 *)(param_1 + 0x158) = param_5[1];
        *(undefined8 *)(param_1 + 0x168) = uVar6;
        uVar6 = *param_5;
        *(undefined8 *)(param_1 + 0x160) = param_5[2];
        *(undefined8 *)(param_1 + 0x150) = uVar6;
      }
      uVar6 = 1;
    }
    if ((local_448 & 1) != 0) {
      (**(code **)(*plStack_430 + 0x18))
                (plStack_430,local_438,CONCAT71(uStack_447,local_448) & 0xfffffffffffffffe,1);
    }
    if (local_c0 != (long *)0x0) {
      if (local_c0 == alStack_e0) {
        pcVar4 = *(code **)(*local_c0 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*local_c0 + 0x18);
      }
      (*pcVar4)();
    }
    if (local_140 != (long *)0x0) {
      if (local_140 == alStack_160) {
        pcVar4 = *(code **)(*local_140 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*local_140 + 0x18);
      }
      (*pcVar4)();
    }
    if (local_1c0 != (long *)0x0) {
      if (local_1c0 == alStack_1e0) {
        pcVar4 = *(code **)(*local_1c0 + 0x10);
      }
      else {
        pcVar4 = *(code **)(*local_1c0 + 0x18);
      }
      (*pcVar4)();
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


