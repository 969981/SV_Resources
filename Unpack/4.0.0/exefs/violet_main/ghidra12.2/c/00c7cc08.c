/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7cc08; name: FUN_00c7cc08
 */


void FUN_00c7cc08(long param_1)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  plVar16 = *(long **)(param_1 + 0x90);
  plVar14 = *(long **)(param_1 + 0x98);
  if (plVar16 != plVar14) {
    do {
      local_98 = *plVar16;
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_00d0a71c(&local_90,plVar16 + 1);
      local_80 = plVar16[3];
      local_78 = plVar16[4];
      lStack_70 = plVar16[5];
      plVar15 = *(long **)(param_1 + 0x58);
      while (plVar18 = local_90, lVar11 = local_98, plVar15 != *(long **)(param_1 + 0x60)) {
        lVar10 = *plVar15;
        if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) {
LAB_00c7ccb4:
          plVar19 = *(long **)(param_1 + 0x60);
          plVar18 = plVar15 + 2;
          if (plVar18 == plVar19) {
            plVar17 = plVar15;
            goto LAB_00c7cd18;
          }
          plVar18 = plVar15;
          do {
            plVar17 = plVar18 + 2;
            FUN_00c7ef48(plVar18,plVar17);
            plVar1 = plVar18 + 4;
            plVar18 = plVar17;
          } while (plVar1 != plVar19);
          plVar18 = *(long **)(param_1 + 0x60);
          while (plVar18 != plVar17) {
LAB_00c7cd18:
            plVar18 = plVar18 + -2;
            plVar19 = (long *)*plVar18;
            if (plVar19 != (long *)0x0) {
              plVar1 = plVar19 + 3;
              do {
                sVar13 = (short)*plVar1;
                cVar5 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar12) {
                  *(short *)plVar1 = sVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar13 == 1) {
                piVar2 = (int *)((long)plVar19 + 0x1c);
                do {
                  iVar8 = *piVar2;
                  cVar5 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar12) {
                    *piVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar11;
                  local_68 = *plVar19;
                  FUN_00c44438(lVar11 + 0x8040,&local_68);
                }
              }
              else if (sVar13 == 0) goto LAB_00c7cdf0;
            }
          }
          *(long **)(param_1 + 0x60) = plVar17;
        }
        else {
          psVar3 = (short *)(lVar10 + 0x1a);
          sVar13 = *(short *)(lVar10 + 0x1a);
LAB_00c7cf3c:
          sVar4 = *psVar3;
          if (sVar4 == sVar13) {
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar12) {
              *psVar3 = sVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00c7cf60;
            bVar12 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00c7cf60:
            bVar12 = false;
          }
          if (!bVar12) {
            sVar13 = sVar4;
            if (sVar4 == 0) goto LAB_00c7ccb4;
            goto LAB_00c7cf3c;
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          plVar18 = (long *)(lVar10 + -0x28);
          if (lVar10 == 0) goto LAB_00c7ccb4;
          lVar9 = FUN_01e0063c(plVar18);
          if (((lVar11 != lVar9) || ((char)local_78 != '\0')) &&
             ((iVar8 = local_80._4_4_, local_80._4_4_ == -1 ||
              (iVar7 = FUN_01e00644(plVar18), iVar8 == iVar7)))) {
            if ((local_90 != (long *)0x0) && (*(short *)((long)local_90 + 0x1a) != 0)) {
              plVar19 = (long *)FUN_01e0064c(plVar18);
              if ((*plVar19 != 0) && (*(short *)(*plVar19 + 0x1a) != 0)) {
                if (local_90 == (long *)0x0) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = *local_90;
                }
                plVar19 = (long *)FUN_01e0064c(plVar18);
                lVar9 = 0;
                if ((long *)*plVar19 != (long *)0x0) {
                  lVar9 = *(long *)*plVar19;
                }
                if (lVar11 != lVar9) goto LAB_00c7d02c;
              }
            }
            FUN_0186d0c4(plVar18,&local_98);
          }
LAB_00c7d02c:
          lVar11 = *(long *)(lVar10 + 8);
          plVar15 = plVar15 + 2;
          psVar3 = (short *)(lVar11 + 0x1a);
          do {
            sVar13 = *psVar3;
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar12) {
              *psVar3 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar18 + 0x50))(plVar18);
          }
          else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      if (local_90 != (long *)0x0) {
        plVar15 = local_90 + 3;
        do {
          sVar13 = (short)*plVar15;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar12) {
            *(short *)plVar15 = sVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar13 == 1) {
          piVar2 = (int *)((long)local_90 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_68 = *plVar18;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
          }
        }
        else if (sVar13 == 0) goto LAB_00c7cdf0;
      }
      puVar6 = PTR_LAB_047d3de8;
      plVar16 = plVar16 + 6;
    } while (plVar16 != plVar14);
    plVar16 = *(long **)(param_1 + 0x90);
    for (plVar14 = *(long **)(param_1 + 0x98); plVar14 != plVar16; plVar14 = plVar14 + -6) {
      plVar15 = (long *)plVar14[-5];
      if (plVar15 != (long *)0x0) {
        plVar18 = plVar15 + 3;
        do {
          sVar13 = (short)*plVar18;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar12) {
            *(short *)plVar18 = sVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar13 == 1) {
          piVar2 = (int *)((long)plVar15 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(puVar6,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_98 = *plVar15;
            FUN_00c44438(lVar11 + 0x8040,&local_98);
          }
        }
        else if (sVar13 == 0) {
LAB_00c7cdf0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
  *(long **)(param_1 + 0x98) = plVar16;
  return;
}


