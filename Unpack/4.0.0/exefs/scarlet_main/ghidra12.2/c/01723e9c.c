/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01723e9c; name: FUN_01723e9c
 */


undefined1  [16] FUN_01723e9c(undefined1 param_1 [16])

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  float fVar11;
  ulong uVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 *local_40 [2];
  long *local_30;
  undefined8 local_28;
  
  fVar16 = param_1._8_4_;
  FUN_00d2f4e8(&local_30);
  if (local_30 == (long *)0x0) goto LAB_01723f04;
  (**(code **)(*local_30 + 0x90))(local_40);
  if (local_40[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_40[0] + 0x1a) != 0) {
      if (local_40[0] == (undefined8 *)0x0) goto LAB_01723ed8;
      if (*(short *)((long)local_40[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_40[0] + 0x1a);
        sVar9 = *(short *)((long)local_40[0] + 0x1a);
LAB_01723f40:
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01723f64;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01723f64:
          bVar5 = false;
        }
        if (!bVar5) goto code_r0x01723f6c;
        lVar8 = local_40[0][2];
        if (lVar8 != 0) {
          plVar10 = (long *)(lVar8 + -0x28);
          lVar7 = FUN_00ded3a0(lVar8 + 0xe0,&local_28);
          if (lVar7 != 0) {
            fVar17 = param_1._0_4_;
            fVar18 = param_1._4_4_;
            lVar8 = *(long *)(lVar8 + 8);
            fVar11 = (float)*(undefined8 *)(lVar7 + 0x1f0) +
                     (float)*(undefined8 *)(lVar7 + 0x1c0) * fVar17 +
                     (float)*(undefined8 *)(lVar7 + 0x1d0) * fVar18 +
                     (float)*(undefined8 *)(lVar7 + 0x1e0) * fVar16;
            fVar14 = (float)((ulong)*(undefined8 *)(lVar7 + 0x1f0) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x1c0) >> 0x20) * fVar17 +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x1d0) >> 0x20) * fVar18 +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x1e0) >> 0x20) * fVar16;
            fVar15 = (float)*(undefined8 *)(lVar7 + 0x1f8) +
                     (float)*(undefined8 *)(lVar7 + 0x1c8) * fVar17 +
                     (float)*(undefined8 *)(lVar7 + 0x1d8) * fVar18 +
                     (float)*(undefined8 *)(lVar7 + 0x1e8) * fVar16;
            fVar16 = (float)((ulong)*(undefined8 *)(lVar7 + 0x1f8) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x1c8) >> 0x20) * fVar17 +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x1d8) >> 0x20) * fVar18 +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x1e8) >> 0x20) * fVar16;
            psVar1 = (short *)(lVar8 + 0x1a);
            fVar17 = (float)((ulong)*(undefined8 *)(lVar7 + 0x208) >> 0x20) * fVar11 +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x218) >> 0x20) * fVar14 +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x228) >> 0x20) * fVar15 +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x238) >> 0x20) * fVar16;
            uVar12 = CONCAT44(1.0 - (((float)((ulong)*(undefined8 *)(lVar7 + 0x200) >> 0x20) *
                                      fVar11 + (float)((ulong)*(undefined8 *)(lVar7 + 0x210) >> 0x20
                                                      ) * fVar14 +
                                      (float)((ulong)*(undefined8 *)(lVar7 + 0x220) >> 0x20) *
                                      fVar15 + (float)((ulong)*(undefined8 *)(lVar7 + 0x230) >> 0x20
                                                      ) * fVar16) / fVar17 + 1.0) * 0.5,
                              (((float)*(undefined8 *)(lVar7 + 0x200) * fVar11 +
                                (float)*(undefined8 *)(lVar7 + 0x210) * fVar14 +
                                (float)*(undefined8 *)(lVar7 + 0x220) * fVar15 +
                               (float)*(undefined8 *)(lVar7 + 0x230) * fVar16) / fVar17 + 1.0) * 0.5
                             );
            do {
              sVar9 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar10 + 0x50))(plVar10);
            }
            else if (sVar9 == 0) goto LAB_01724110;
            if (local_40[0] != (undefined8 *)0x0) {
              psVar1 = (short *)(local_40[0] + 3);
              do {
                sVar9 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar9 == 1) {
                piVar2 = (int *)((long)local_40[0] + 0x1c);
                do {
                  iVar6 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar6 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar8 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar8;
                  local_28 = *local_40[0];
                  FUN_00c44438(lVar8 + 0x8040,&local_28);
                }
              }
              else if (sVar9 == 0) goto LAB_017240e8;
            }
            if (local_30 != (long *)0x0) {
              lVar8 = local_30[6];
              psVar1 = (short *)(lVar8 + 0x1a);
              do {
                sVar9 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar9 == 1) {
                *(undefined8 *)(lVar8 + 0x10) = 0;
                (**(code **)(*local_30 + 0x50))();
              }
              else if (sVar9 == 0) goto LAB_01724110;
            }
            goto LAB_01723f08;
          }
          lVar8 = *(long *)(lVar8 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar9 == 0) goto LAB_01724110;
        }
      }
    }
LAB_017240c0:
    if (local_40[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40[0] + 3);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        piVar2 = (int *)((long)local_40[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *local_40[0];
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar9 == 0) {
LAB_017240e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_01723ed8:
  if (local_30 != (long *)0x0) {
    lVar8 = local_30[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_30 + 0x50))();
    }
    else if (sVar9 == 0) {
LAB_01724110:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_01723f04:
  uVar12 = 0;
LAB_01723f08:
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar12;
  return auVar13;
code_r0x01723f6c:
  sVar9 = sVar3;
  if (sVar3 == 0) goto LAB_017240c0;
  goto LAB_01723f40;
}


