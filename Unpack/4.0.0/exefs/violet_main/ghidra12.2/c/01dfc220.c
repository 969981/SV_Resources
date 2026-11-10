/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfc220; name: FUN_01dfc220
 */


bool FUN_01dfc220(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  short sVar16;
  long *plVar17;
  long *plVar18;
  
  if (((DAT_04837608 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04837608), iVar7 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar12 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar16 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar16) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01dfc2c0;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dfc2c0:
        bVar6 = false;
      }
      if (bVar6) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return false;
        }
        plVar18 = (long *)(lVar9 + -0x28);
        plVar14 = (long *)(lVar12 + 0x2d8);
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_01dfc2f4;
      }
      sVar16 = sVar2;
    } while (sVar2 != 0);
  }
  return false;
LAB_01dfc2f4:
  if (*plVar14 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x2e0));
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x2e0));
          while (*plVar14 == 0) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01dfc304;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01dfc304:
    plVar14 = *(long **)(lVar12 + 200);
    if (plVar14 != (long *)0x0) {
      uVar10 = (long)plVar14 - ((ulong)plVar14 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        plVar15 = (long *)((long)plVar14 - 1U & (ulong)plVar18);
      }
      else if (plVar18 < plVar14) {
        plVar15 = plVar18;
      }
      else {
        uVar5 = 0;
        if (plVar14 != (long *)0x0) {
          uVar5 = (ulong)plVar18 / (ulong)plVar14;
        }
        plVar15 = (long *)((long)plVar18 - uVar5 * (long)plVar14);
      }
      plVar11 = *(long **)(*(long *)(lVar12 + 0xc0) + (long)plVar15 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if ((long *)plVar11[1] == plVar18) {
              if ((long *)plVar11[2] == plVar18) goto LAB_01dfc390;
            }
            else if ((long *)((ulong)plVar11[1] & (long)plVar14 - 1U) != plVar15) goto LAB_01dfc398;
            plVar11 = (long *)*plVar11;
            bVar6 = false;
          } while (plVar11 != (long *)0x0);
          goto LAB_01dfc39c;
        }
        do {
          plVar17 = (long *)plVar11[1];
          if (plVar17 == plVar18) {
            if ((long *)plVar11[2] == plVar18) {
LAB_01dfc390:
              lVar8 = plVar11[5];
              if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) break;
              psVar1 = (short *)(lVar8 + 0x1a);
              sVar16 = *(short *)(lVar8 + 0x1a);
              do {
                sVar2 = *psVar1;
                if (sVar2 == sVar16) {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar6) {
                    *psVar1 = sVar16 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 != '\0') goto LAB_01dfc548;
                  bVar6 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_01dfc548:
                  bVar6 = false;
                }
                if (bVar6) {
                  if (*(long *)(lVar8 + 0x10) != 0) {
                    lVar13 = 0;
                    if ((long *)plVar11[5] != (long *)0x0) {
                      lVar13 = *(long *)plVar11[5];
                    }
                    bVar6 = lVar13 == param_2;
                    (**(code **)(*(long *)(*(long *)(lVar8 + 0x10) + -0x28) + 0x60))();
                    goto LAB_01dfc39c;
                  }
                  goto LAB_01dfc398;
                }
                bVar6 = false;
                sVar16 = sVar2;
                if (sVar2 == 0) goto LAB_01dfc39c;
              } while( true );
            }
          }
          else {
            if (plVar14 <= plVar17) {
              uVar10 = 0;
              if (plVar14 != (long *)0x0) {
                uVar10 = (ulong)plVar17 / (ulong)plVar14;
              }
              plVar17 = (long *)((long)plVar17 - uVar10 * (long)plVar14);
            }
            if (plVar17 != plVar15) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
LAB_01dfc398:
    bVar6 = false;
LAB_01dfc39c:
    *(undefined8 *)(lVar12 + 0x2d8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x2e0));
    lVar12 = *(long *)(lVar9 + 8);
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar18 + 0x50))(plVar18);
      return bVar6;
    }
    if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return bVar6;
  }
  cVar4 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar6) {
    *plVar14 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01dfc304;
  goto LAB_01dfc2f4;
}


