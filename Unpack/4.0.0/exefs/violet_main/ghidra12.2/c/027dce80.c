/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dce80; name: FUN_027dce80
 */


undefined8 FUN_027dce80(long param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_d0 [8];
  long *local_c8;
  byte local_c0;
  undefined7 uStack_bf;
  ulong local_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [8];
  long *local_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *plStack_38;
  
  if ((*(int *)(param_1 + 0x90) == 0) && (lVar6 = *(long *)(param_1 + 0x78), lVar6 != 0)) {
    FUN_027dd064(&local_c0);
    uVar2 = (ulong)&local_c0 | 1;
    if ((local_c0 & 1) != 0) {
      uVar2 = local_b0;
    }
    FUN_027dd11c(auStack_a0,lVar6 + 0x10,uVar2);
    if ((local_c0 & 1) != 0) {
      (**(code **)(*plStack_a8 + 0x18))
                (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
    }
    FUN_01f6fa34(&local_c0);
    uVar5 = FUN_027dd414();
    FUN_027dd420(&local_c0,uVar5,0);
    uVar5 = FUN_027dd428();
    FUN_027dd420(&local_c0,uVar5,0);
    uVar5 = FUN_027dd434();
    FUN_027dd420(&local_c0,uVar5,0);
    FUN_027dd440(auStack_d0,auStack_a0,&local_c0);
    FUN_027dd468(param_1 + 0xd0,auStack_d0);
    if (local_c8 != (long *)0x0) {
      plVar1 = local_c8 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined4 *)(param_1 + 0x90) = 2;
    FUN_01f6fc48(&local_c0);
    if ((local_50 & 1) != 0) {
      (**(code **)(*plStack_38 + 0x18))
                (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
    }
    if ((local_70 & 1) != 0) {
      (**(code **)(*plStack_58 + 0x18))
                (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
    }
    if ((local_90 & 1) != 0) {
      (**(code **)(*plStack_78 + 0x18))
                (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
    }
    if (local_98 != (long *)0x0) {
      plVar1 = local_98 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


