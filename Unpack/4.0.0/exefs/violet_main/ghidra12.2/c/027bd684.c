/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bd684; name: FUN_027bd684
 */


void FUN_027bd684(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long local_98;
  long *local_90;
  MutexType *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_88 = (MutexType *)(param_2 + 0x118);
  nn::os::LockMutex(local_88);
  if ((char)param_2[0x117] != '\0') {
    lVar11 = param_2[0x110];
    *param_1 = param_2[0x10f];
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
LAB_027bda38:
    nn::os::UnlockMutex(local_88);
    return;
  }
  lVar11 = param_2[0x111];
  pMVar1 = (MutexType *)(lVar11 + 0x38);
  *(undefined1 *)(param_2 + 0x117) = 1;
  nn::os::LockMutex(pMVar1);
  nn::os::SignalEvent((EventType *)(lVar11 + 0x10));
  nn::os::UnlockMutex(pMVar1);
  if (param_2[1] != 0) {
    lVar11 = *param_2;
    plVar7 = (long *)std::__shared_weak_count::lock();
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar14 = *(long **)(lVar11 + 0x240);
      FUN_0024d780(&local_98,param_2 + 0x44);
      puVar12 = *(undefined8 **)(local_98 + 0x88);
      plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
      plVar8[2] = 0;
      plVar15 = plVar8 + 1;
      *plVar15 = 0;
      puVar6 = PTR_DAT_047cc0d8;
      plVar8[3] = (long)plVar14;
      plVar3 = plVar8 + 4;
      *plVar8 = (long)(puVar6 + 0x10);
      FUN_006c4254(plVar3);
      plVar8[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
      nn::os::InitializeEvent(plVar8 + 6,0,0);
      plVar8[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
      if (plVar8 != (long *)0x0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = *plVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x150,8);
      plVar13 = plVar9 + 1;
      *plVar13 = 0;
      plVar9[2] = 0;
      plVar9[3] = (long)plVar14;
      *plVar9 = (long)&PTR_FUN_0448a918;
      FUN_006c5398(plVar9 + 4);
      plVar9[4] = (long)&PTR_LAB_0448a968;
      lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14,0x10000,0x10);
      param_5 = 0;
      if (lVar10 != 0) {
        FUN_006c4058(plVar9 + 10,plVar3,0,lVar10,0x10000,1);
        plVar9[10] = (long)&PTR_LAB_0448a9b0;
        plVar9[0x25] = (long)plVar14;
        plVar9[0x26] = 0x10000;
        *(undefined1 *)((long)plVar9 + 0x149) = 1;
        plVar9[0x27] = (long)plVar3;
        plVar9[0x28] = (long)plVar8;
        plVar9[0x23] = lVar11;
        plVar9[0x24] = (long)plVar7;
        local_80 = 0;
        local_78 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_70 = plVar9 + 4;
        local_68 = plVar9;
        (**(code **)*puVar12)(puVar12,&local_70,&local_80);
        if (local_68 != (long *)0x0) {
          plVar3 = local_68 + 1;
          do {
            lVar10 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 != (long *)0x0) {
          plVar3 = local_78 + 1;
          do {
            lVar10 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar9 != (long *)0x0) {
          do {
            lVar10 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            std::__shared_weak_count::__release_weak();
          }
        }
        *(undefined1 *)(plVar8 + 5) = 1;
        if (plVar8 != (long *)0x0) {
          do {
            lVar10 = *plVar15;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar5) {
              *plVar15 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_90 != (long *)0x0) {
          plVar3 = local_90 + 1;
          do {
            lVar10 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = *(long *)(lVar11 + 0x878);
        lVar11 = *(long *)(lVar11 + 0x880);
        param_1[1] = lVar11;
        if (lVar11 != 0) {
          plVar3 = (long *)(lVar11 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = *plVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        do {
          lVar11 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
        goto LAB_027bda38;
      }
      goto LAB_027bda64;
    }
  }
                    /* try { // try from 027bda60 to 027bda63 has its CatchHandler @ 027bda88 */
  FUN_00248440();
LAB_027bda64:
  local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",param_5,(Result *)&local_70,"");
}


