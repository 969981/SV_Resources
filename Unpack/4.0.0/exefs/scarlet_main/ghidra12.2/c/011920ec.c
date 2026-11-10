/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011920ec; name: FUN_011920ec
 */


void FUN_011920ec(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  long *plVar15;
  
  lVar13 = *(long *)(param_1 + 0xc0);
  if (lVar13 != 0) {
    plVar15 = (long *)(lVar13 + 8);
    lVar12 = *plVar15;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar12) {
      lVar7 = nn::os::GetCurrentThread();
LAB_01192130:
      if (*plVar15 == 0) goto code_r0x01192138;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x10));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x10));
            while (*plVar15 == 0) {
              cVar2 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar14) {
                *plVar15 = lVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01192140;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar14) {
          *plVar15 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01192140:
      bVar14 = false;
      goto LAB_01192144;
    }
    bVar14 = true;
LAB_01192144:
    puVar5 = PTR_FUN_047d9428;
    puVar4 = PTR_DAT_047d3988;
    puVar3 = PTR_DAT_047d3980;
    plVar15 = *(long **)(lVar13 + 0x20);
    plVar1 = *(long **)(lVar13 + 0x28);
    if (plVar15 != plVar1) {
      do {
        lVar7 = *plVar15;
        if (lVar7 != 0) {
          plVar8 = (long *)(*(code *)**(undefined8 **)(lVar7 + 8))((undefined8 *)(lVar7 + 8));
          if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
            uVar10 = FUN_01adab84();
            *(undefined8 *)puVar4 = uVar10;
            __cxa_guard_release(puVar3);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar4) {
              uVar9 = (**(code **)(*(long *)*plVar15 + 0xc0))();
              if (((uVar9 & 1) == 0) && (lVar7 + -0x20 == param_1)) goto LAB_011921d0;
              break;
            }
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar1);
      plVar15 = plVar1;
LAB_011921d0:
      if (plVar15 != *(long **)(lVar13 + 0x28)) {
        (**(code **)(*(long *)*plVar15 + 0xa8))();
        *(undefined **)(lVar13 + 0xa8) = puVar5;
        *(undefined8 *)(lVar13 + 0xb0) = 0;
      }
    }
    plVar15 = *(long **)(lVar13 + 0x58);
    plVar1 = *(long **)(lVar13 + 0x60);
    if (plVar15 != plVar1) {
      do {
        lVar7 = *plVar15;
        if (lVar7 != 0) {
          plVar8 = (long *)(*(code *)**(undefined8 **)(lVar7 + 8))((undefined8 *)(lVar7 + 8));
          if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
            uVar10 = FUN_01adab84();
            *(undefined8 *)puVar4 = uVar10;
            __cxa_guard_release(puVar3);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar4) {
              uVar9 = (**(code **)(*(long *)*plVar15 + 0xc0))();
              if (((uVar9 & 1) == 0) && (lVar7 + -0x20 == param_1)) goto LAB_01192264;
              break;
            }
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar1);
      plVar15 = plVar1;
LAB_01192264:
      if (plVar15 != *(long **)(lVar13 + 0x60)) {
        (**(code **)(*(long *)*plVar15 + 0xa8))();
        *(undefined **)(lVar13 + 0xa8) = puVar5;
        *(undefined8 *)(lVar13 + 0xb0) = 0;
      }
    }
    if ((*(byte *)(lVar13 + 600) & 7) != 0) {
      pcVar11 = *(code **)(lVar13 + 0xa8);
      if ((*(ulong *)(lVar13 + 0xb0) & 1) != 0) {
        pcVar11 = *(code **)(pcVar11 + *(long *)(lVar13 + ((long)*(ulong *)(lVar13 + 0xb0) >> 1)));
      }
      (*pcVar11)();
    }
    if (!bVar14) {
      *(undefined8 *)(lVar13 + 8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x10));
      return;
    }
  }
  return;
code_r0x01192138:
  cVar2 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar7;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01192140;
  goto LAB_01192130;
}


