/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0196f180; name: FUN_0196f180
 */


undefined8 FUN_0196f180(ulong *param_1)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  short sVar12;
  long *plVar13;
  
  if (((DAT_0483b190 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0483b190), iVar7 != 0)) {
    FUN_00100190(&LAB_02a3f0a4,&DAT_0483b180,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b190);
  }
  lVar6 = DAT_0483b180;
  DAT_0483b198 = DAT_0483b180;
  uVar9 = *param_1;
  for (plVar11 = *(long **)(DAT_0483b180 + 0x658); plVar11 != (long *)0x0;
      plVar11 = (long *)*plVar11) {
    if ((ulong)plVar11[4] <= uVar9) {
      if (uVar9 <= (ulong)plVar11[4]) goto LAB_0196f278;
      plVar11 = plVar11 + 1;
    }
  }
  plVar11 = *(long **)(DAT_0483b180 + 0x620);
  if (plVar11 == (long *)0x0) {
    DAT_0483b198 = lVar6;
    return 0;
  }
  do {
    if ((ulong)plVar11[4] <= uVar9) {
      if (uVar9 <= (ulong)plVar11[4]) break;
      plVar11 = plVar11 + 1;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      DAT_0483b198 = lVar6;
      return 0;
    }
  } while( true );
LAB_0196f278:
  puVar1 = (undefined8 *)(DAT_0483b180 + 0x650);
  plVar8 = (long *)*puVar1;
  plVar11 = (long *)(DAT_0483b180 + 0x658);
LAB_0196f284:
  do {
    if (plVar11 == plVar8) {
      if ((long *)(lVar6 + 0x620) != *(long **)(lVar6 + 0x618)) {
        plVar11 = *(long **)(lVar6 + 0x618);
        do {
          lVar10 = plVar11[8];
          if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
            psVar2 = (short *)(lVar10 + 0x1a);
            sVar12 = *(short *)(lVar10 + 0x1a);
LAB_0196f44c:
            sVar3 = *psVar2;
            if (sVar3 == sVar12) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar5) {
                *psVar2 = sVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_0196f474;
              bVar5 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0196f474:
              bVar5 = false;
            }
            if (!bVar5) goto code_r0x0196f47c;
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 != 0) {
              plVar8 = (long *)(lVar10 + -0x28);
              if (plVar11[4] == *param_1) {
                (**(code **)(*(long *)(lVar10 + -0x28) + 0x120))(plVar8,1);
                plVar13 = (long *)FUN_015b6a64(lVar6 + 0x618,plVar11);
                lVar10 = *(long *)(lVar10 + 8);
                psVar2 = (short *)(lVar10 + 0x1a);
                do {
                  sVar12 = *psVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar5) {
                    *psVar2 = sVar12 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar12 == 1) {
                  *(undefined8 *)(lVar10 + 0x10) = 0;
                  (**(code **)(*plVar8 + 0x50))(plVar8);
                }
                else if (sVar12 == 0) goto LAB_0196f568;
              }
              else {
                lVar10 = *(long *)(lVar10 + 8);
                psVar2 = (short *)(lVar10 + 0x1a);
                do {
                  sVar12 = *psVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar5) {
                    *psVar2 = sVar12 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar12 == 1) {
                  *(undefined8 *)(lVar10 + 0x10) = 0;
                  (**(code **)(*plVar8 + 0x50))(plVar8);
                }
                else if (sVar12 == 0) goto LAB_0196f568;
                plVar13 = (long *)plVar11[1];
                if (plVar13 == (long *)0x0) {
                  plVar13 = (long *)plVar11[2];
                  if ((long *)*plVar13 != plVar11) {
                    lVar10 = plVar11[2];
                    while( true ) {
                      plVar13 = *(long **)(lVar10 + 0x10);
                      if (*plVar13 == lVar10) break;
                      lVar10 = *(long *)(lVar10 + 0x10);
                    }
                  }
                }
                else {
                  for (plVar11 = (long *)*plVar13; plVar11 != (long *)0x0;
                      plVar11 = (long *)*plVar11) {
                    plVar13 = plVar11;
                  }
                }
              }
              goto LAB_0196f2f4;
            }
          }
LAB_0196f2e4:
          plVar13 = (long *)FUN_015b6a64(lVar6 + 0x618,plVar11);
LAB_0196f2f4:
          plVar11 = plVar13;
        } while ((long *)(lVar6 + 0x620) != plVar13);
      }
      return 1;
    }
    lVar10 = plVar8[8];
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar10 + 0x1a);
      sVar12 = *(short *)(lVar10 + 0x1a);
LAB_0196f318:
      sVar3 = *psVar2;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0196f340;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0196f340:
        bVar5 = false;
      }
      if (!bVar5) {
        sVar12 = sVar3;
        if (sVar3 == 0) goto LAB_0196f294;
        goto LAB_0196f318;
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) goto LAB_0196f294;
      plVar13 = (long *)(lVar10 + -0x28);
      if (plVar8[4] == *param_1) {
        (**(code **)(*(long *)(lVar10 + -0x28) + 0x120))(plVar13,1);
        plVar8 = (long *)FUN_015b6a64(puVar1,plVar8);
        lVar10 = *(long *)(lVar10 + 8);
        psVar2 = (short *)(lVar10 + 0x1a);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar12 == 0) {
LAB_0196f568:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      else {
        lVar10 = *(long *)(lVar10 + 8);
        psVar2 = (short *)(lVar10 + 0x1a);
        do {
          sVar12 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar12 == 0) goto LAB_0196f568;
        plVar13 = (long *)plVar8[1];
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)plVar8[2];
          if (*(long **)plVar8[2] != plVar8) {
            lVar10 = plVar8[2];
            while( true ) {
              plVar13 = *(long **)(lVar10 + 0x10);
              if (*plVar13 == lVar10) break;
              lVar10 = *(long *)(lVar10 + 0x10);
            }
          }
        }
        else {
          for (plVar8 = (long *)*plVar13; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            plVar13 = plVar8;
          }
        }
        plVar8 = plVar13;
      }
      goto LAB_0196f284;
    }
LAB_0196f294:
    plVar8 = (long *)FUN_015b6a64(puVar1,plVar8);
  } while( true );
code_r0x0196f47c:
  sVar12 = sVar3;
  if (sVar3 == 0) goto LAB_0196f2e4;
  goto LAB_0196f44c;
}


