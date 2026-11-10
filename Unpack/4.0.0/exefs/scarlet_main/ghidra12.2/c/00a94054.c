/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a94054; name: FUN_00a94054
 */


long FUN_00a94054(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  bool bVar15;
  long *plVar16;
  
  if ((((*(long *)(param_1 + 0x80) != 0) && (*(short *)(*(long *)(param_1 + 0x80) + 0x1a) != 0)) &&
      (lVar12 = *(long *)(param_1 + 0x80), lVar12 != 0)) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar13 = *(short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00a940e8;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a940e8:
        bVar15 = false;
      }
      if (bVar15) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return 0;
        }
        plVar16 = (long *)(lVar12 + 0xe8);
        lVar14 = *plVar16;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 == lVar14) {
          bVar15 = true;
        }
        else {
          lVar9 = nn::os::GetCurrentThread();
          do {
            if (*plVar16 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
                while (*plVar16 == 0) {
                  cVar4 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar15) {
                    *plVar16 = lVar9;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_00a94134;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar15) {
              *plVar16 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00a94134:
          bVar15 = false;
        }
        puVar6 = PTR_DAT_047d8e30;
        puVar5 = PTR_DAT_047d8e28;
        plVar2 = *(long **)(lVar12 + 0x108);
        lVar9 = 0;
        for (plVar16 = *(long **)(lVar12 + 0x100); plVar16 != plVar2; plVar16 = plVar16 + 1) {
          if (*plVar16 != 0) {
            puVar10 = (undefined8 *)(*(code *)**(undefined8 **)(*plVar16 + 8))();
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              if (((*PTR_DAT_047d3980 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar8 != 0)) {
                uVar11 = FUN_01adab84();
                *(undefined8 *)PTR_DAT_047d3988 = uVar11;
                __cxa_guard_release(PTR_DAT_047d3980);
              }
              *(undefined **)puVar6 = PTR_DAT_047d3988;
              __cxa_guard_release(puVar5);
            }
            for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
              if (puVar10 == (undefined8 *)puVar6) {
                uVar7 = (**(code **)(*(long *)*plVar16 + 0xc0))();
                lVar9 = lVar9 + ((ulong)~uVar7 & 1);
                break;
              }
            }
          }
        }
        plVar16 = *(long **)(lVar12 + 0x138);
        plVar2 = *(long **)(lVar12 + 0x140);
        if (plVar16 == plVar2) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            if (*plVar16 != 0) {
              puVar10 = (undefined8 *)(*(code *)**(undefined8 **)(*plVar16 + 8))();
              if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
                if (((*PTR_DAT_047d3980 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar8 != 0)) {
                  uVar11 = FUN_01adab84();
                  *(undefined8 *)PTR_DAT_047d3988 = uVar11;
                  __cxa_guard_release(PTR_DAT_047d3980);
                }
                *(undefined **)puVar6 = PTR_DAT_047d3988;
                __cxa_guard_release(puVar5);
              }
              for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
                if (puVar10 == (undefined8 *)puVar6) {
                  uVar7 = (**(code **)(*(long *)*plVar16 + 0xc0))();
                  lVar14 = lVar14 + ((ulong)~uVar7 & 1);
                  break;
                }
              }
            }
            plVar16 = plVar16 + 1;
          } while (plVar16 != plVar2);
        }
        if (!bVar15) {
          *(undefined8 *)(lVar12 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xf0));
        }
        (**(code **)(*(long *)(lVar12 + -0x28) + 0x60))((long *)(lVar12 + -0x28));
        return lVar14 + lVar9;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
}


