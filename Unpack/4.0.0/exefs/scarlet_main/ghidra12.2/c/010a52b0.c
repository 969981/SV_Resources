/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a52b0; name: FUN_010a52b0
 */


void FUN_010a52b0(long param_1,undefined8 *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined1 uVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  uVar16 = 0;
  do {
    uVar8 = FUN_00f7e2a0(*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1d),
                         uVar16 & 0xffffffff);
    if ((uVar8 & 1) == 0) {
LAB_010a52f4:
      local_38 = (long *)0x0;
    }
    else {
      if (uVar16 == *(uint *)(param_1 + 0x24)) {
        uVar13 = *(undefined1 *)(param_1 + 0x30);
      }
      else {
        if ((*(char *)(param_1 + 0x2c) == '\0') ||
           (uVar8 = FUN_010a5f84(*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1c),
                                 *(undefined1 *)(param_1 + 0x1d),*(undefined4 *)(param_1 + 0x28),
                                 uVar16 & 0xffffffff), (uVar8 & 1) == 0)) goto LAB_010a52f4;
        uVar13 = 1;
      }
      FUN_010a6134(&local_38,param_1,uVar16 & 0xffffffff,uVar13);
      if (local_38 != (long *)0x0) {
        plVar9 = local_38 + 5;
        do {
          lVar18 = *plVar9;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *(int *)plVar9 = (int)lVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar18 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        plVar9 = (long *)param_2[uVar16 + 1];
        param_2[uVar16 + 1] = local_38;
        if (plVar9 != (long *)0x0) {
          plVar2 = plVar9 + 5;
          do {
            lVar18 = *plVar2;
            iVar6 = (int)lVar18 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar9 + 0x10))();
            goto LAB_010a5384;
          }
          if ((int)lVar18 != 0) goto LAB_010a5384;
LAB_010a56a8:
          pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar12 = "DecrementReferenceInternal";
          pcVar14 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar15 = "Reference counter underflows.";
LAB_010a5890:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar10,pcVar12,pcVar14,0x58,pcVar15);
        }
LAB_010a5384:
        FUN_010a7308(&local_60,*(undefined8 *)(param_1 + 8),uVar16 & 0xffffffff,0);
        plVar9 = local_38;
        uVar7 = FUN_010a58c0(local_38);
        FUN_010a58fc(&local_70,param_1,uVar16 & 0xffffffff,uVar7);
        FUN_010a58c8(plVar9,&local_70);
        FUN_010a5ff8(*param_2,uVar16 & 0xffffffff,&local_60);
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        local_78 = local_60;
        if (local_60 == (long *)0x0) goto LAB_010a5410;
        lVar18 = local_60[6];
        if (*(long *)(lVar18 + 0x10) == 0) goto LAB_010a5850;
        psVar1 = (short *)(lVar18 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 != 0) {
          if (sVar3 != -1) goto LAB_010a5410;
LAB_010a5870:
          pcVar10 = "count != 0";
          pcVar12 = "AddReference";
          pcVar14 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar15 = "Reference counter overflows.";
          goto LAB_010a5890;
        }
        uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar11;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
LAB_010a5410:
        FUN_010a5930(uVar17,&local_78);
        if (local_78 != (long *)0x0) {
          lVar18 = local_78[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_78 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_010a5828;
        }
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        local_80 = local_58;
        if (local_58 != (long *)0x0) {
          lVar18 = local_58[6];
          if (*(long *)(lVar18 + 0x10) == 0) goto LAB_010a5850;
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
            *(undefined8 *)(lVar18 + 8) = uVar11;
            *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) goto LAB_010a5870;
        }
        FUN_010a5930(uVar17,&local_80);
        if (local_80 != (long *)0x0) {
          lVar18 = local_80[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_80 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_010a5828;
        }
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        local_88 = local_70;
        if (local_70 != (long *)0x0) {
          lVar18 = local_70[6];
          if (*(long *)(lVar18 + 0x10) == 0) goto LAB_010a5850;
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
            *(undefined8 *)(lVar18 + 8) = uVar11;
            *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) goto LAB_010a5870;
        }
        FUN_010a5930(uVar17,&local_88);
        if (local_88 != (long *)0x0) {
          lVar18 = local_88[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_88 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_010a5828;
        }
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        local_90 = local_68;
        if (local_68 != (long *)0x0) {
          lVar18 = local_68[6];
          if (*(long *)(lVar18 + 0x10) == 0) {
LAB_010a5850:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
            *(undefined8 *)(lVar18 + 8) = uVar11;
            *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) goto LAB_010a5870;
        }
        FUN_010a5930(uVar17,&local_90);
        if (local_90 != (long *)0x0) {
          lVar18 = local_90[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_90 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_010a5828;
        }
        if (local_68 != (long *)0x0) {
          lVar18 = local_68[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_010a5828;
        }
        if (local_70 != (long *)0x0) {
          lVar18 = local_70[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_70 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_010a5828;
        }
        if (local_58 != (long *)0x0) {
          lVar18 = local_58[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_58 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_010a5828;
        }
        if (local_60 != (long *)0x0) {
          lVar18 = local_60[6];
          psVar1 = (short *)(lVar18 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*local_60 + 0x50))();
          }
          else if (sVar3 == 0) {
LAB_010a5828:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if (local_38 != (long *)0x0) {
          plVar9 = local_38 + 5;
          do {
            lVar18 = *plVar9;
            iVar6 = (int)lVar18 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
          else if ((int)lVar18 == 0) goto LAB_010a56a8;
        }
      }
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == 5) {
      return;
    }
  } while( true );
}


