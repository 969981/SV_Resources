/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a43484; name: FUN_01a43484
 */


void FUN_01a43484(long param_1)

{
  short *psVar1;
  long *plVar2;
  undefined4 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  char local_68;
  undefined7 uStack_67;
  long *local_48;
  
  lVar10 = *(long *)(param_1 + 0x70);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01a434f4;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a434f4:
        bVar6 = false;
      }
      if (bVar6) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        if (*(long *)(param_1 + 0xd8) != 0) {
          puVar9 = (undefined8 *)FUN_00e31554();
          plVar13 = (long *)*puVar9;
          if (plVar13 != (long *)0x0) {
            plVar8 = plVar13 + 5;
            do {
              lVar12 = *plVar8;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *(int *)plVar8 = (int)lVar12 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          uVar14 = *(undefined8 *)(param_1 + 0xd8);
          uVar3 = *(undefined4 *)(param_1 + 0x54);
          (**(code **)(**(long **)(param_1 + 0x88) + 0x80))(&local_68,*(long **)(param_1 + 0x88),0);
          FUN_01773b4c(uVar14,uVar3,&local_68,0,0,0);
          plVar8 = (long *)CONCAT71(uStack_67,local_68);
          if (plVar8 != (long *)0x0) {
            plVar2 = plVar8 + 5;
            do {
              lVar12 = *plVar2;
              iVar7 = (int)lVar12 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
            else if ((int)lVar12 == 0) goto LAB_01a4372c;
          }
          uVar14 = *(undefined8 *)(param_1 + 0xd8);
          uVar3 = *(undefined4 *)(param_1 + 0x58);
          (**(code **)(**(long **)(param_1 + 0x88) + 0x80))(&local_68,*(long **)(param_1 + 0x88),1);
          FUN_01773b4c(uVar14,uVar3,&local_68,0,0,0);
          plVar8 = (long *)CONCAT71(uStack_67,local_68);
          if (plVar8 != (long *)0x0) {
            plVar2 = plVar8 + 5;
            do {
              lVar12 = *plVar2;
              iVar7 = (int)lVar12 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
            else if ((int)lVar12 == 0) goto LAB_01a4372c;
          }
          uVar14 = *(undefined8 *)(param_1 + 0xd8);
          uVar3 = *(undefined4 *)(param_1 + 0x5c);
          (**(code **)(**(long **)(param_1 + 0x88) + 0x80))(&local_68,*(long **)(param_1 + 0x88),2);
          FUN_01773b4c(uVar14,uVar3,&local_68,0,0,0);
          plVar8 = (long *)CONCAT71(uStack_67,local_68);
          if (plVar8 != (long *)0x0) {
            plVar2 = plVar8 + 5;
            do {
              lVar12 = *plVar2;
              iVar7 = (int)lVar12 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
            else if ((int)lVar12 == 0) goto LAB_01a4372c;
          }
          if (*(char *)(lVar10 + 0x60) != '\0') {
            lVar12 = *(long *)(param_1 + 0xd8);
            FUN_026f36ac(&local_68,lVar10 + -0x28);
            FUN_00d10690(*(undefined8 *)(lVar12 + 200),0x1f,&local_68);
            if (local_68 != '\0') {
              if (local_48 != (long *)0x0) {
                (**(code **)(*local_48 + 0x20))();
              }
              local_68 = '\0';
            }
          }
          if (plVar13 != (long *)0x0) {
            plVar8 = plVar13 + 5;
            do {
              lVar12 = *plVar8;
              iVar7 = (int)lVar12 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar6) {
                *(int *)plVar8 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
            else if ((int)lVar12 == 0) {
LAB_01a4372c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        *(undefined1 *)(lVar10 + 0x60) = 0;
        (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))(lVar10 + -0x28);
        return;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


