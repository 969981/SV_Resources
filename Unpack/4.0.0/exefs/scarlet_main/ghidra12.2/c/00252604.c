/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00252604; name: FUN_00252604
 */


/* WARNING: Removing unreachable block (ram,0x0025291c) */

void FUN_00252604(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (param_1[1] != 0) {
    lVar9 = param_1[2];
    lVar10 = *param_1;
    plVar6 = (long *)std::__shared_weak_count::lock();
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_01e9fb38(&local_90,param_1 + 0xb);
      plVar12 = *(long **)(lVar9 + 0x240);
      puVar11 = *(undefined8 **)(lVar9 + 0x4b8);
      plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x78,8);
      plVar7[2] = 0;
      plVar13 = plVar7 + 1;
      *plVar13 = 0;
      puVar4 = PTR_DAT_047cc0d8;
      plVar7[3] = (long)plVar12;
      plVar1 = plVar7 + 4;
      *plVar7 = (long)(puVar4 + 0x10);
      FUN_006c4254(plVar1);
      plVar7[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
      nn::os::InitializeEvent(plVar7 + 6,0,0);
      plVar7[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
      if (plVar7 != (long *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x160,8);
      plVar14 = plVar8 + 1;
      *plVar14 = 0;
      plVar8[2] = 0;
      plVar8[3] = (long)plVar12;
      *plVar8 = (long)&PTR_FUN_0448b460;
      FUN_006c5398(plVar8 + 4);
      plVar8[4] = (long)&PTR_LAB_0448b4b0;
      lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x10000,0x10);
      param_4 = 0;
      if (lVar9 != 0) {
        FUN_006c4058(plVar8 + 10,plVar1,0,lVar9,0x10000,1);
        plVar5 = local_88;
        lVar9 = local_90;
        *(undefined1 *)((long)plVar8 + 0x159) = 1;
        plVar8[0x27] = (long)plVar12;
        plVar8[0x28] = 0x10000;
        plVar8[10] = (long)&PTR_LAB_0448b4f8;
        plVar8[0x29] = (long)plVar1;
        plVar8[0x2a] = (long)plVar7;
        local_90 = 0;
        local_88 = (long *)0x0;
        plVar8[0x24] = (long)plVar6;
        plVar8[0x23] = lVar10;
        plVar8[0x25] = lVar9;
        plVar8[0x26] = (long)plVar5;
        local_80 = 0;
        local_78 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_70 = plVar8 + 4;
        local_68 = plVar8;
        (**(code **)*puVar11)(puVar11,&local_70,&local_80);
        if (local_68 != (long *)0x0) {
          plVar1 = local_68 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 != (long *)0x0) {
          plVar1 = local_78 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar8 != (long *)0x0) {
          do {
            lVar9 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar7 != (long *)0x0) {
          do {
            lVar9 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_88 != (long *)0x0) {
          plVar1 = local_88 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar1 = plVar6 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
        return;
      }
      goto LAB_00252974;
    }
  }
                    /* try { // try from 00252970 to 00252973 has its CatchHandler @ 00252998 */
  FUN_00252cf0();
LAB_00252974:
  local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",param_4,(Result *)&local_70,"");
}


