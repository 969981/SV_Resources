/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02759570; name: FUN_02759570
 */


void FUN_02759570(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 auStack_d0 [24];
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if ((*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x128)) &&
     (uVar10 = FUN_01e0d238(*(undefined8 *)(param_1 + 0x158)), puVar9 = PTR_DAT_047d9c48,
     (uVar10 & 1) != 0)) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x158) + 0x120);
    plVar14 = *(long **)(lVar11 + 0x88);
    plVar4 = *(long **)(lVar11 + 0x90);
    if (plVar14 != plVar4) {
      do {
        uStack_80 = *(undefined8 *)(param_1 + 8);
        local_98 = 0;
        lStack_90 = 0;
        local_68 = 0;
        local_78 = 0x1af286bca1af286;
        uStack_70 = 0;
        local_88 = 0;
        local_a0 = (long *)*plVar14;
        if (local_a0 != (long *)0x0) {
          plVar1 = local_a0 + 5;
          do {
            lVar11 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = (int)lVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar11 == -1) {
LAB_0275979c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        lVar11 = FUN_027597ec(&local_98,&local_a0);
        if (local_a0 != (long *)0x0) {
          plVar1 = local_a0 + 5;
          do {
            lVar8 = *plVar1;
            iVar3 = (int)lVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *(int *)plVar1 = iVar3;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*local_a0 + 0x10))();
          }
          else if ((int)lVar8 == 0) {
LAB_027597c4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        lVar8 = lStack_90;
        if (lVar11 != 0) {
          for (lVar11 = local_98; lVar11 != lVar8; lVar11 = lVar11 + 0x98) {
            local_a8 = FUN_02759c6c(*(undefined8 *)(param_1 + 8));
            if (local_a8 == 0) {
              lVar12 = 0;
            }
            else {
              piVar2 = (int *)(local_a8 + 0x28);
              do {
                iVar3 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar3 == -1) goto LAB_0275979c;
              lVar12 = local_a8;
            }
            uVar13 = *(undefined8 *)(param_1 + 0x158);
            FUN_00d8fb98(auStack_d0,puVar9);
            local_b0 = (long *)FUN_00cb7028(uVar13,auStack_d0);
            local_b0 = (long *)*local_b0;
            if (local_b0 != (long *)0x0) {
              plVar1 = local_b0 + 5;
              do {
                lVar7 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = (int)lVar7 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((int)lVar7 == -1) goto LAB_0275979c;
            }
            FUN_02759d94(lVar12,lVar11,&local_b0);
            if (local_b0 != (long *)0x0) {
              plVar1 = local_b0 + 5;
              do {
                lVar12 = *plVar1;
                iVar3 = (int)lVar12 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = iVar3;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar3 == 0) {
                (**(code **)(*local_b0 + 0x10))();
              }
              else if ((int)lVar12 == 0) goto LAB_027597c4;
            }
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x20))();
            }
            FUN_02759fe0(param_1 + 0x120,&local_a8);
            FUN_0275a030(&local_a8);
          }
        }
        FUN_02759bdc(&local_98);
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar4);
    }
  }
  return;
}


