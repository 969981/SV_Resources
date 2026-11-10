/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00551f9c; name: FUN_00551f9c
 */


void FUN_00551f9c(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar11 = *(long *)(param_2 + 0x18);
    lVar12 = *(long *)(param_2 + 8);
    lVar5 = std::__shared_weak_count::lock();
    if (lVar5 != 0) {
      lVar8 = *param_3;
      plVar10 = (long *)param_3[1];
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar13 = *(long **)(lVar11 + 0x240);
      puVar9 = *(undefined8 **)(lVar11 + 0x4b8);
      plVar6 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xd0,8);
      plVar6[2] = 0;
      plVar7 = plVar6 + 1;
      *plVar7 = 0;
      puVar4 = PTR_DAT_047cc158;
      plVar6[3] = (long)plVar13;
      plVar1 = plVar6 + 4;
      *plVar6 = (long)(puVar4 + 0x10);
      FUN_006c4254(plVar1);
      plVar6[4] = (long)(PTR_DAT_047cc168 + 0x10);
      nn::os::InitializeEvent(plVar6 + 6,0,0);
      plVar6[4] = (long)(PTR_DAT_047cc160 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
      *(undefined1 *)(plVar6 + 0x19) = 0;
      if (plVar6 != (long *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x160,8);
      plVar14 = plVar7 + 1;
      *plVar14 = 0;
      plVar7[2] = 0;
      plVar7[3] = (long)plVar13;
      *plVar7 = (long)&PTR_FUN_044c9210;
      FUN_006c5398(plVar7 + 4);
      plVar7[4] = (long)&PTR_LAB_044c9248;
      lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0x10000,0x10);
      param_5 = 0;
      if (lVar11 != 0) {
        FUN_006c4058(plVar7 + 10,plVar1,0,lVar11,0x10000,1);
        plVar7[10] = (long)&PTR_LAB_044c9278;
        plVar7[0x27] = (long)plVar13;
        plVar7[0x28] = 0x10000;
        *(undefined1 *)((long)plVar7 + 0x159) = 1;
        plVar7[0x29] = (long)plVar1;
        plVar7[0x2a] = (long)plVar6;
        if (plVar10 == (long *)0x0) {
          plVar7[0x23] = lVar12;
          plVar7[0x24] = lVar5;
          plVar7[0x25] = lVar8;
          plVar7[0x26] = 0;
        }
        else {
          plVar13 = plVar10 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar7[0x23] = lVar12;
          plVar7[0x24] = lVar5;
          plVar7[0x25] = lVar8;
          plVar7[0x26] = (long)plVar10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            lVar5 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            std::__shared_weak_count::__release_weak();
          }
          do {
            lVar5 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            std::__shared_weak_count::__release_weak();
          }
          do {
            lVar5 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_80 = 0;
        local_78 = (long *)0x0;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = *plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_70 = plVar7 + 4;
        local_68 = plVar7;
        (**(code **)*puVar9)(puVar9,&local_70,&local_80);
        if (local_68 != (long *)0x0) {
          plVar13 = local_68 + 1;
          do {
            lVar5 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 != (long *)0x0) {
          plVar13 = local_78 + 1;
          do {
            lVar5 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = plVar1;
        param_1[1] = plVar6;
        do {
          lVar5 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
        if (plVar10 != (long *)0x0) {
          plVar1 = plVar10 + 1;
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
            (**(code **)(*plVar10 + 0x10))(plVar10);
            std::__shared_weak_count::__release_weak();
          }
        }
        return;
      }
      goto LAB_00552374;
    }
  }
                    /* try { // try from 00552370 to 00552373 has its CatchHandler @ 00552398 */
  FUN_00559590();
LAB_00552374:
  local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",param_5,(Result *)&local_70,"");
}


