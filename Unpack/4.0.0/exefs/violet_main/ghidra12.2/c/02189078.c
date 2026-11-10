/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02189078; name: FUN_02189078
 */


void FUN_02189078(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar20 = *(long **)(param_1 + 0x1a8);
  plVar5 = *(long **)(param_1 + 0x1b0);
  if (plVar20 != plVar5) {
    uVar17 = 0;
    do {
      lVar14 = *plVar20;
      if ((lVar14 != 0) && (*(int *)(lVar14 + 0x128) == 4)) {
        uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x170) + uVar17 * 8);
        uVar19 = *(undefined8 *)(*(long *)(lVar14 + 0x130) + 0x30);
        FUN_00c9e664(&local_a0,param_1 + 0xe8);
        if (local_98 == (long *)0x0) {
          plVar16 = (long *)0x0;
        }
        else {
          plVar16 = (long *)local_98[9];
        }
        (**(code **)(*plVar16 + 0x18))(&local_78,plVar16);
        local_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        plVar3 = (long *)0x0;
        if (plVar16 != (long *)0x0) {
          plVar3 = plVar16 + 5;
        }
        if ((long *)local_78[2] == plVar3) {
          FUN_00c9ea00(&local_90,&local_78);
        }
        puVar8 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_68 = *puVar8;
              FUN_00c44438(lVar14 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) goto LAB_021895e8;
        }
        lVar15 = *plVar20;
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00c43ef0(&local_78,lVar15 + 0x98);
        local_b0 = (undefined8 *)0x0;
        uStack_a8 = 0;
        lVar14 = 0;
        if (lVar15 != 0) {
          lVar14 = lVar15 + 0x28;
        }
        if (local_78[2] == lVar14) {
          FUN_0115c6d0(&local_b0,&local_78);
        }
        puVar8 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_68 = *puVar8;
              FUN_00c44438(lVar14 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) goto LAB_021895e8;
        }
        local_80 = (long *)FUN_0115cfb8(uVar19,&local_90,&local_b0);
        local_80 = (long *)*local_80;
        if (local_80 != (long *)0x0) {
          lVar14 = local_80[6];
          if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 0) {
            uVar19 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
            *(undefined8 *)(lVar14 + 8) = uVar19;
            *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
          }
          else if (sVar4 == -1) {
            pcVar10 = "count != 0";
            pcVar11 = "AddReference";
            pcVar12 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
            ;
            pcVar13 = "Reference counter overflows.";
            goto LAB_02189674;
          }
        }
        FUN_0115c9f4(uVar18,&local_80);
        if (local_80 != (long *)0x0) {
          lVar14 = local_80[6];
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*local_80 + 0x50))();
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        puVar8 = local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_b0 + 3);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)local_b0 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_78 = (undefined8 *)*puVar8;
              FUN_00c44438(lVar14 + 0x8040,&local_78);
            }
          }
          else if (sVar4 == 0) goto LAB_021895e8;
        }
        puVar8 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_90 + 3);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)local_90 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_78 = (undefined8 *)*puVar8;
              FUN_00c44438(lVar14 + 0x8040,&local_78);
            }
          }
          else if (sVar4 == 0) {
LAB_021895e8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        if (local_98 != (long *)0x0) {
          plVar16 = local_98 + 5;
          do {
            lVar14 = *plVar16;
            iVar9 = (int)lVar14 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar7) {
              *(int *)plVar16 = iVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_98 + 0x10))();
          }
          else if ((int)lVar14 == 0) {
            pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
            pcVar11 = "DecrementReferenceInternal";
            pcVar12 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            pcVar13 = "Reference counter underflows.";
LAB_02189674:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl(pcVar10,pcVar11,pcVar12,0x58,pcVar13);
          }
        }
        if (local_a0 != (long *)0x0) {
          (**(code **)(*local_a0 + 0x60))();
        }
      }
      plVar20 = plVar20 + 1;
      uVar17 = (ulong)((int)uVar17 + 1);
    } while (plVar20 != plVar5);
  }
  return;
}


