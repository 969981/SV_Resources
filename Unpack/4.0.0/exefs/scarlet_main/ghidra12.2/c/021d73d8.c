/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d73d8; name: FUN_021d73d8
 */


void FUN_021d73d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == lVar7) {
      lVar8 = lVar7;
    }
    else {
      plVar6 = *(long **)(lVar8 + -8);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (lVar8 + -0x10 != lVar7) {
        plVar6 = *(long **)(lVar8 + -0x18);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (lVar8 + -0x20 != lVar7) {
          plVar6 = *(long **)(lVar8 + -0x28);
          if (plVar6 != (long *)0x0) {
            plVar1 = plVar6 + 1;
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
              (**(code **)(*plVar6 + 0x10))(plVar6);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (lVar8 + -0x30 != lVar7) {
            plVar6 = *(long **)(lVar8 + -0x38);
            lVar8 = lVar8 + -0x40;
            if (plVar6 == (long *)0x0) goto LAB_021d750c;
            plVar1 = plVar6 + 1;
            do {
              lVar5 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            do {
              if (lVar5 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                std::__shared_weak_count::__release_weak();
              }
LAB_021d750c:
              do {
                if (lVar8 == lVar7) goto LAB_021d7538;
                plVar6 = *(long **)(lVar8 + -8);
                lVar8 = lVar8 + -0x10;
              } while (plVar6 == (long *)0x0);
              plVar1 = plVar6 + 1;
              do {
                lVar5 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            } while( true );
          }
        }
      }
LAB_021d7538:
      lVar8 = *(long *)(param_1 + 0x18);
    }
    plVar6 = *(long **)(param_1 + 0x30);
    *(long *)(param_1 + 0x20) = lVar7;
    lVar7 = *(long *)(param_1 + 0x28) - lVar8;
    uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar7,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar8,lVar7,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 8));
  return;
}


