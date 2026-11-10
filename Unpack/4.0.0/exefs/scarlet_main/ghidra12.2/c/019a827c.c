/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a827c; name: FUN_019a827c
 */


void FUN_019a827c(long param_1,uint param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  long *plVar18;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_48;
  
  plVar18 = (long *)(param_1 + (ulong)param_2 * 8 + 0xb8);
  if (*plVar18 == 0) {
    FUN_019a8698(*(undefined8 *)(param_1 + 0xb0));
    plVar15 = (long *)(param_1 + (ulong)param_2 * 8 + 0xe0);
    lVar14 = *plVar15;
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 0x28);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar8 = (long *)*plVar18;
    *plVar18 = lVar14;
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 5;
      do {
        lVar14 = *plVar3;
        iVar7 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_019a8550;
    }
    plVar8 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar8 != (long *)0x0) {
      plVar15 = plVar8 + 5;
      do {
        lVar14 = *plVar15;
        iVar7 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar14 == 0) {
LAB_019a8550:
        pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar11 = "DecrementReferenceInternal";
        pcVar12 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar13 = "Reference counter underflows.";
LAB_019a8680:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar10,pcVar11,pcVar12,0x58,pcVar13);
      }
    }
    FUN_019a8ad4(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),
                 *(undefined8 *)(param_1 + 0xb0),*plVar18);
    FUN_0106f324(&local_48,*(undefined8 *)(param_1 + 0xb0),param_2);
    iVar7 = FUN_019a8690(local_48);
    if (iVar7 != 0) {
      iVar16 = 0;
      do {
        FUN_019a8928(&local_68,local_48,iVar16);
        lVar14 = FUN_019a8688(local_68);
        uVar17 = *(undefined8 *)(lVar14 + 8);
        FUN_00f10acc(&local_70,*(undefined8 *)(param_1 + 0xb0),param_2);
        uVar9 = FUN_019a86c8(local_70,uVar17);
        if (local_70 != (long *)0x0) {
          lVar14 = local_70[6];
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*local_70 + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_019a8618;
        }
        if ((uVar9 & 1) == 0) {
          FUN_019a8a14(&local_70,*plVar18);
          plVar15 = local_70;
          local_78 = local_68;
          if (local_68 != (long *)0x0) {
            lVar14 = local_68[6];
            if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar4 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar4 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar4 == 0) {
              uVar17 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
              *(undefined8 *)(lVar14 + 8) = uVar17;
              *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
            }
            else if (sVar4 == -1) {
              pcVar10 = "count != 0";
              pcVar11 = "AddReference";
              pcVar12 = 
              "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
              ;
              pcVar13 = "Reference counter overflows.";
              goto LAB_019a8680;
            }
          }
          FUN_01071980(plVar15,&local_78);
          if (local_78 != (long *)0x0) {
            lVar14 = local_78[6];
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar4 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar4 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*local_78 + 0x50))();
            }
            else if (sVar4 == 0) goto LAB_019a8618;
          }
          if (local_70 != (long *)0x0) {
            lVar14 = local_70[6];
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar4 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar4 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*local_70 + 0x50))();
            }
            else if (sVar4 == 0) goto LAB_019a8618;
          }
        }
        if (local_68 != (long *)0x0) {
          lVar14 = local_68[6];
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_019a8618;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != iVar7);
    }
    if (local_48 != (long *)0x0) {
      lVar14 = local_48[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_48 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_019a8618:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if ((*(byte *)(param_1 + 0x9e) & 1) != 0) {
      FUN_02993870(*plVar18);
    }
  }
  return;
}


