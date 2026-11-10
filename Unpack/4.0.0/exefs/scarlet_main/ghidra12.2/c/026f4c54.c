/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f4c54; name: FUN_026f4c54
 */


void FUN_026f4c54(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  undefined1 auStack_58 [8];
  
  lVar12 = *(long *)(param_1 + 0x48);
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar13 = *(short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_026f4ccc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026f4ccc:
        bVar4 = false;
      }
      if (bVar4) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return;
        }
        plVar14 = (long *)(lVar12 + -0x28);
        lVar7 = FUN_026f5464(plVar14);
        plVar8 = (long *)FUN_00e31554();
        local_90 = 1;
        uStack_88 = 2;
        local_78 = 0x400000003;
        uStack_70 = 5;
        local_80 = 0x200000001;
        local_b0 = (ulong)*(uint *)(lVar7 + 400);
        local_a8 = (ulong)*(uint *)(lVar7 + 0x194);
        local_68 = 0x10;
        uStack_a0 = 0;
        local_60 = *plVar8;
        local_98 = local_b0;
        plVar9 = (long *)FUN_00cf3764(auStack_58,*(undefined8 *)(local_60 + 8),&local_60);
        plVar11 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 5;
          do {
            lVar6 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar6 == -1) {
LAB_026f50f4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          plVar11 = plVar9;
        }
        FUN_0117e220(plVar11,&local_b0,1,3,0);
        uVar10 = *param_2;
        local_b8 = plVar9;
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 5;
          do {
            lVar6 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar6 == -1) goto LAB_026f50f4;
        }
        FUN_026f552c(uVar10,&local_b8);
        if (local_b8 != (long *)0x0) {
          plVar11 = local_b8 + 5;
          do {
            lVar6 = *plVar11;
            iVar5 = (int)lVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_b8 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_026f511c;
        }
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 5;
          do {
            lVar6 = *plVar11;
            iVar5 = (int)lVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
          else if ((int)lVar6 == 0) goto LAB_026f511c;
        }
        local_80 = 0x200000001;
        local_78 = 0x400000003;
        uStack_70 = 5;
        local_90 = 1;
        uStack_88 = 2;
        local_b0 = (ulong)(*(uint *)(lVar7 + 400) >> 1);
        local_68 = 0x10;
        local_a8 = (ulong)(*(uint *)(lVar7 + 0x194) >> 1);
        uStack_a0 = 0;
        local_60 = *plVar8;
        local_98 = local_b0;
        plVar9 = (long *)FUN_00cf3764(auStack_58,*(undefined8 *)(local_60 + 8),&local_60);
        plVar11 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 5;
          do {
            lVar6 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar6 == -1) goto LAB_026f50f4;
          plVar11 = plVar9;
        }
        FUN_0117e220(plVar11,&local_b0,1,3,0);
        uVar10 = *param_2;
        local_c0 = plVar9;
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 5;
          do {
            lVar6 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar6 == -1) goto LAB_026f50f4;
        }
        FUN_026f55ec(uVar10,&local_c0);
        if (local_c0 != (long *)0x0) {
          plVar11 = local_c0 + 5;
          do {
            lVar6 = *plVar11;
            iVar5 = (int)lVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_026f511c;
        }
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 5;
          do {
            lVar6 = *plVar11;
            iVar5 = (int)lVar6 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
          else if ((int)lVar6 == 0) goto LAB_026f511c;
        }
        local_80 = 0x200000001;
        local_78 = 0x400000003;
        uStack_70 = 5;
        local_90 = 1;
        uStack_88 = 2;
        local_b0 = (ulong)(*(uint *)(lVar7 + 400) >> 1);
        local_68 = 0x10;
        local_a8 = (ulong)(*(uint *)(lVar7 + 0x194) >> 1);
        uStack_a0 = 0;
        local_60 = *plVar8;
        local_98 = local_b0;
        plVar8 = (long *)FUN_00cf3764(auStack_58,*(undefined8 *)(local_60 + 8),&local_60);
        plVar11 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 5;
          do {
            lVar7 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar7 == -1) goto LAB_026f50f4;
          plVar11 = plVar8;
        }
        FUN_0117e220(plVar11,&local_b0,1,3,0);
        uVar10 = *param_2;
        local_c8 = plVar8;
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 5;
          do {
            lVar7 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = (int)lVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar7 == -1) goto LAB_026f50f4;
        }
        FUN_026f56ac(uVar10,&local_c8);
        if (local_c8 != (long *)0x0) {
          plVar11 = local_c8 + 5;
          do {
            lVar7 = *plVar11;
            iVar5 = (int)lVar7 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_c8 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_026f511c;
        }
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 5;
          do {
            lVar7 = *plVar11;
            iVar5 = (int)lVar7 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *(int *)plVar11 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          else if ((int)lVar7 == 0) {
LAB_026f511c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        lVar12 = *(long *)(lVar12 + 8);
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
          return;
        }
        if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar13 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


