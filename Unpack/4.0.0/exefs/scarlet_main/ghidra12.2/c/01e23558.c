/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e23558; name: FUN_01e23558
 */


void FUN_01e23558(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  plVar1 = (long *)(param_1 + 8);
  lVar11 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar11) {
    bVar12 = true;
LAB_01e235b4:
    puVar5 = PTR_DAT_047d8e30;
    puVar4 = PTR_DAT_047d8e28;
    plVar2 = *(long **)(param_1 + 0x28);
    for (plVar1 = *(long **)(param_1 + 0x20); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar7 = *plVar1;
      if (lVar7 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar7 + 8))((undefined8 *)(lVar7 + 8));
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          if (((*PTR_DAT_047d3980 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar6 != 0)) {
            uVar10 = FUN_01adab84();
            *(undefined8 *)PTR_DAT_047d3988 = uVar10;
            __cxa_guard_release(PTR_DAT_047d3980);
          }
          *(undefined **)puVar5 = PTR_DAT_047d3988;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            uVar9 = (**(code **)(*(long *)*plVar1 + 0xc0))();
            if ((uVar9 & 1) == 0) {
              plVar8 = *(long **)(lVar7 + 0x158);
              lVar11 = *plVar8;
              if ((plVar8 != *(long **)(lVar7 + 0x160)) &&
                 (*(undefined1 **)(lVar11 + 0x1d0) != &DAT_afc4d6c05abef19e)) {
                do {
                  plVar8 = plVar8 + 1;
                  lVar11 = *plVar8;
                } while (*(undefined1 **)(lVar11 + 0x1d0) != &DAT_afc4d6c05abef19e);
              }
              plVar8 = *(long **)(lVar11 + 0x40);
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                local_80 = 0xbc071098b7443d50;
                pcStack_78 = "poke_state_int";
                local_70 = 0xe;
                local_68 = (long *)0x0;
                (**(code **)(*plVar8 + 0x130))(plVar8,&local_80);
                if (local_68 != (long *)0x0) {
                  (**(code **)(*local_68 + 0x20))();
                }
                (**(code **)(*plVar8 + 0x18))(plVar8);
              }
            }
            break;
          }
        }
      }
    }
    plVar1 = *(long **)(param_1 + 0x58);
    plVar2 = *(long **)(param_1 + 0x60);
    do {
      if (plVar1 == plVar2) {
        if (!bVar12) {
          *(undefined8 *)(param_1 + 8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
        }
        return;
      }
      lVar7 = *plVar1;
      if (lVar7 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar7 + 8))((undefined8 *)(lVar7 + 8));
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          if (((*PTR_DAT_047d3980 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar6 != 0)) {
            uVar10 = FUN_01adab84();
            *(undefined8 *)PTR_DAT_047d3988 = uVar10;
            __cxa_guard_release(PTR_DAT_047d3980);
          }
          *(undefined **)puVar5 = PTR_DAT_047d3988;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            uVar9 = (**(code **)(*(long *)*plVar1 + 0xc0))();
            if ((uVar9 & 1) == 0) {
              plVar8 = *(long **)(lVar7 + 0x158);
              lVar11 = *plVar8;
              if ((plVar8 != *(long **)(lVar7 + 0x160)) &&
                 (*(undefined1 **)(lVar11 + 0x1d0) != &DAT_afc4d6c05abef19e)) {
                do {
                  plVar8 = plVar8 + 1;
                  lVar11 = *plVar8;
                } while (*(undefined1 **)(lVar11 + 0x1d0) != &DAT_afc4d6c05abef19e);
              }
              plVar8 = *(long **)(lVar11 + 0x40);
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                local_80 = 0xbc071098b7443d50;
                pcStack_78 = "poke_state_int";
                local_70 = 0xe;
                local_68 = (long *)0x0;
                (**(code **)(*plVar8 + 0x130))(plVar8,&local_80);
                if (local_68 != (long *)0x0) {
                  (**(code **)(*local_68 + 0x20))();
                }
                (**(code **)(*plVar8 + 0x18))(plVar8);
              }
            }
            break;
          }
        }
      }
      plVar1 = plVar1 + 1;
    } while( true );
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e235b0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e235b0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e235b0:
  bVar12 = false;
  goto LAB_01e235b4;
}


