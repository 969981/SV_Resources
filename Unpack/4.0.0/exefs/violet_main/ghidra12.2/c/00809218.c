/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00809218; name: FUN_00809218
 */


void FUN_00809218(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_a0 [2];
  byte local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  long *plStack_80;
  byte local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  long *plStack_60;
  byte local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  long *plStack_30;
  undefined4 local_28 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  if ((*(long *)PTR_DAT_047d0a08 == 0) || (*(char *)(*(long *)PTR_DAT_047d0a08 + 0x470) == '\0')) {
    plVar7 = (long *)*param_2;
    local_a0[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)local_28);
    uVar4 = FUN_00796458(local_a0);
    (**(code **)(*plVar7 + 0x38))(plVar7,uVar4);
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    uVar5 = *param_2;
    lVar6 = param_2[1];
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(long *)(param_1 + 0x10) = lVar6;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    plVar7 = *(long **)(param_1 + 8);
    uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x58))(local_a0,plVar7,uVar5);
    if ((local_48 & 1) != 0) {
      (**(code **)(*plStack_30 + 0x18))
                (plStack_30,local_38,CONCAT71(uStack_47,local_48) & 0xfffffffffffffffe,1);
    }
    if ((local_78 & 1) != 0) {
      (**(code **)(*plStack_60 + 0x18))
                (plStack_60,local_68,CONCAT71(uStack_77,local_78) & 0xfffffffffffffffe,1);
    }
    if ((local_98 & 1) != 0) {
      (**(code **)(*plStack_80 + 0x18))
                (plStack_80,local_88,CONCAT71(uStack_97,local_98) & 0xfffffffffffffffe,1);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


