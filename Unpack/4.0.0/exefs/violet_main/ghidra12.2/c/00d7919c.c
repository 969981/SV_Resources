/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7919c; name: FUN_00d7919c
 */


/* WARNING: Removing unreachable block (ram,0x00d794e0) */
/* WARNING: Removing unreachable block (ram,0x00d794e4) */
/* WARNING: Removing unreachable block (ram,0x00d79534) */
/* WARNING: Removing unreachable block (ram,0x00d7950c) */
/* WARNING: Removing unreachable block (ram,0x00d79514) */
/* WARNING: Removing unreachable block (ram,0x00d7951c) */
/* WARNING: Removing unreachable block (ram,0x00d79540) */
/* WARNING: Removing unreachable block (ram,0x00d79524) */
/* WARNING: Removing unreachable block (ram,0x00d79528) */
/* WARNING: Removing unreachable block (ram,0x00d794f4) */
/* WARNING: Removing unreachable block (ram,0x00d7952c) */
/* WARNING: Removing unreachable block (ram,0x00d79508) */

void FUN_00d7919c(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  if (*(long *)(param_1 + 0x78) != *(long *)(param_1 + 0x80)) {
    plVar13 = (long *)(param_1 + 0x2a0);
    lVar8 = *plVar13;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      lVar5 = nn::os::GetCurrentThread();
LAB_00d791e8:
      if (*plVar13 == 0) goto code_r0x00d791f0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
      do {
        if (*plVar13 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2a8));
            while (*plVar13 == 0) {
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar11) {
                *plVar13 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00d791f8;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar11) {
          *plVar13 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00d791f8:
      bVar11 = false;
      goto LAB_00d791fc;
    }
    bVar11 = true;
LAB_00d791fc:
    if ((*(long *)(param_2 + 0x80) != -1) && (*(long *)(param_1 + 0x78) != 0)) {
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x78) + *(long *)(param_2 + 0x80) * 0x28 + 8);
      plVar13 = (long *)*puVar12;
      lVar8 = *plVar13;
      lVar5 = nn::os::GetCurrentThread();
      if (lVar5 != lVar8) {
        lVar5 = nn::os::GetCurrentThread();
LAB_00d79234:
        if (*plVar13 == 0) goto code_r0x00d7923c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar13 + 1));
        do {
          if (*plVar13 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar13 + 1));
              while (*plVar13 == 0) {
                cVar4 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar10) {
                  *plVar13 = lVar5;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00d79244;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar10) {
            *plVar13 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00d79244:
        bVar10 = false;
        plVar9 = plVar13;
        goto LAB_00d7924c;
      }
      plVar9 = (long *)0x0;
      bVar10 = true;
LAB_00d7924c:
      plVar15 = (long *)plVar13[3];
      plVar14 = (long *)plVar13[4];
      if ((plVar15 != plVar14) && (*plVar15 != param_2)) {
        do {
          plVar15 = plVar15 + 1;
          if (plVar14 == plVar15) {
            plVar15 = plVar14;
            goto LAB_00d7935c;
          }
        } while (*plVar15 != param_2);
      }
      if (plVar15 != plVar14) {
        plVar7 = plVar15 + 1;
        if (plVar7 != plVar14) {
          do {
            plVar6 = plVar15;
            if (*plVar7 != param_2) {
              plVar6 = (long *)*plVar15;
              *plVar15 = 0;
              if (plVar6 != (long *)0x0) {
                lVar5 = plVar6[6];
                psVar1 = (short *)(lVar5 + 0x1a);
                do {
                  sVar2 = *psVar1;
                  cVar4 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar3) {
                    *psVar1 = sVar2 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar2 == 1) {
                  *(undefined8 *)(lVar5 + 0x10) = 0;
                  (**(code **)(*plVar6 + 0x50))();
                }
                else if (sVar2 == 0) goto LAB_00d792ec;
              }
              lVar5 = *plVar7;
              *plVar7 = 0;
              plVar6 = plVar15 + 1;
              *plVar15 = lVar5;
            }
            plVar7 = plVar7 + 1;
            plVar15 = plVar6;
          } while (plVar7 != plVar14);
          plVar14 = (long *)plVar13[4];
        }
      }
LAB_00d7935c:
      if (plVar15 != plVar14) {
        while (plVar14 != plVar15) {
          plVar14 = plVar14 + -1;
          plVar7 = (long *)*plVar14;
          if (plVar7 != (long *)0x0) {
            lVar5 = plVar7[6];
            psVar1 = (short *)(lVar5 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar3) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
              (**(code **)(*plVar7 + 0x50))();
            }
            else if (sVar2 == 0) {
LAB_00d792ec:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
        plVar13[4] = (long)plVar15;
      }
      if (!bVar10) {
        *plVar9 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
      }
      *(undefined8 *)(param_2 + 0x80) = 0xffffffffffffffff;
      lVar8 = *(long *)(param_1 + 0x148);
      for (lVar5 = *(long *)(param_1 + 0x140); lVar5 != lVar8; lVar5 = lVar5 + 0x30) {
        FUN_00d79554(*(undefined8 *)(lVar5 + 8),param_2,*puVar12);
      }
    }
    if (!bVar11) {
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2a8));
      return;
    }
  }
  return;
code_r0x00d791f0:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar11) {
    *plVar13 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00d791f8;
  goto LAB_00d791e8;
code_r0x00d7923c:
  cVar4 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar10) {
    *plVar13 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00d79244;
  goto LAB_00d79234;
}


