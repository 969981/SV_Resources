/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005543f0; name: FUN_005543f0
 */


void FUN_005543f0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined4 local_d0 [2];
  ulong local_c8;
  long lStack_c0;
  long local_b8;
  long *plStack_b0;
  char local_a8;
  long *local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  byte local_80;
  undefined7 uStack_7f;
  long local_78;
  ulong local_70;
  long *plStack_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 0x50))(&local_80);
  if ((local_80 & 1) == 0) {
    if (local_80 < 2) {
LAB_0055446c:
      plVar8 = *(long **)(param_2[3] + 0x238);
      plVar5 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xd0,8);
      plVar5[2] = 0;
      plVar9 = plVar5 + 1;
      *plVar9 = 0;
      puVar4 = PTR_DAT_047cc158;
      plVar5[3] = (long)plVar8;
      *plVar5 = (long)(puVar4 + 0x10);
      FUN_006c4254(plVar5 + 4);
      plVar5[4] = (long)(PTR_DAT_047cc168 + 0x10);
      nn::os::InitializeEvent((EventType *)(plVar5 + 6),0,0);
      pMVar1 = (MutexType *)(plVar5 + 0xb);
      plVar5[4] = (long)(PTR_DAT_047cc160 + 0x10);
      nn::os::InitializeMutex(pMVar1,false,0);
      *(undefined1 *)(plVar5 + 0x19) = 0;
      if (plVar5 != (long *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_58 = 0;
      local_50 = FUN_01cf7e20();
      uStack_48 = 0;
      local_60 = &local_58;
      FUN_0020eeac(local_d0,0,&DAT_03c886bc,&local_60);
      FUN_01cfa44c(&local_60,local_58);
      nn::os::LockMutex(pMVar1);
      *(undefined4 *)(plVar5 + 0xf) = local_d0[0];
      plVar5[0x11] = lStack_c0;
      plVar5[0x10] = local_c8;
      plVar5[0x13] = (long)plStack_b0;
      plVar5[0x12] = local_b8;
      local_c8 = 0;
      lStack_c0 = 0;
      local_b8 = 0;
      *(undefined1 *)(plVar5 + 0x14) = 0;
      if (local_a8 != '\0') {
        plVar5[0x15] = (long)local_a0;
        plVar5[0x17] = lStack_90;
        plVar5[0x16] = local_98;
        plVar8 = plVar5 + 0x16;
        plVar5[0x18] = local_88;
        if (local_88 == 0) {
          plVar5[0x15] = (long)plVar8;
        }
        else {
          *(long **)(*plVar8 + 0x10) = plVar8;
          local_a0 = &local_98;
          local_98 = 0;
          local_88 = 0;
        }
        *(undefined1 *)(plVar5 + 0x14) = 1;
      }
      *(undefined1 *)(plVar5 + 0x19) = 1;
      nn::os::SignalEvent((EventType *)(plVar5 + 6));
      nn::os::UnlockMutex(pMVar1);
      if (local_a8 != '\0') {
        FUN_01cfa44c(&local_a0,local_98);
      }
      if ((local_c8 & 1) != 0) {
        (**(code **)(*plStack_b0 + 0x18))(plStack_b0,local_b8,local_c8 & 0xfffffffffffffffe,1);
      }
      *param_1 = (long)(plVar5 + 4);
      param_1[1] = (long)plVar5;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
      goto joined_r0x00554694;
    }
    uVar6 = (ulong)&local_80 | 1;
  }
  else {
    if (local_78 == 0) goto LAB_0055446c;
    uVar6 = local_70;
  }
  (**(code **)(*param_2 + 0x70))(param_1,param_2,uVar6,param_4);
joined_r0x00554694:
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  return;
}


