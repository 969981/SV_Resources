/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01541c30; name: FUN_01541c30
 */


void FUN_01541c30(long param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  bool bVar13;
  ulong uVar14;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  if (param_2 != (long *)0x0) {
    for (plVar11 = *(long **)(param_1 + 0xf0); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      puVar1 = (undefined8 *)plVar11[7];
      for (puVar12 = (undefined8 *)plVar11[6]; puVar12 != puVar1; puVar12 = puVar12 + 1) {
        local_80 = plVar11[2];
        uStack_78 = plVar11[3];
        local_70 = plVar11[4];
        local_68 = (long *)plVar11[5];
        if (local_68 == (long *)0x0) {
          uVar10 = *puVar12;
          plVar9 = (long *)0x0;
          bVar13 = true;
          uVar14 = plVar11[2];
        }
        else {
          (**(code **)(*local_68 + 0x18))();
          plVar9 = (long *)plVar11[5];
          uVar10 = *puVar12;
          uVar14 = plVar11[2];
          if (plVar9 == (long *)0x0) {
            bVar13 = true;
          }
          else {
            (**(code **)(*plVar9 + 0x18))(plVar9);
            bVar13 = false;
          }
        }
        uVar6 = *(ulong *)(param_1 + 0x198);
        if ((uVar6 & uVar6 - 1) == 0) {
          plVar7 = *(long **)(*(long *)(param_1 + 400) + (uVar6 - 1 & uVar14) * 8);
          do {
            do {
              plVar7 = (long *)*plVar7;
            } while (plVar7[1] != uVar14);
          } while (plVar7[2] != uVar14);
        }
        else {
          uVar8 = uVar14;
          if (uVar6 <= uVar14) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar14 / uVar6;
            }
            uVar8 = uVar14 - uVar8 * uVar6;
          }
          plVar7 = *(long **)(*(long *)(param_1 + 400) + uVar8 * 8);
          do {
            do {
              plVar7 = (long *)*plVar7;
            } while (plVar7[1] != uVar14);
          } while (plVar7[2] != uVar14);
        }
        local_48 = *(long **)((long)plVar7 + 0x30);
        if (local_48 != (long *)0x0) {
          plVar7 = local_48 + 5;
          do {
            lVar5 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *(int *)plVar7 = (int)lVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar5 == -1) goto LAB_01541fb8;
        }
        (**(code **)(*param_2 + 0xc0))(param_2,&local_80,uVar10,&local_48);
        if (local_48 != (long *)0x0) {
          plVar7 = local_48 + 5;
          do {
            lVar5 = *plVar7;
            iVar4 = (int)lVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *(int *)plVar7 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
          else if ((int)lVar5 == 0) goto LAB_01541fe0;
        }
        if (!bVar13) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    for (plVar11 = *(long **)(param_1 + 0x158); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11)
    {
      puVar1 = (undefined8 *)plVar11[7];
      for (puVar12 = (undefined8 *)plVar11[6]; puVar12 != puVar1; puVar12 = puVar12 + 1) {
        local_a0 = plVar11[2];
        uStack_98 = plVar11[3];
        local_90 = plVar11[4];
        local_88 = (long *)plVar11[5];
        if (local_88 == (long *)0x0) {
          uVar10 = *puVar12;
          plVar9 = (long *)0x0;
          bVar13 = true;
          uVar14 = plVar11[2];
        }
        else {
          (**(code **)(*local_88 + 0x18))();
          plVar9 = (long *)plVar11[5];
          uVar10 = *puVar12;
          uVar14 = plVar11[2];
          if (plVar9 == (long *)0x0) {
            bVar13 = true;
          }
          else {
            (**(code **)(*plVar9 + 0x18))(plVar9);
            bVar13 = false;
          }
        }
        uVar6 = *(ulong *)(param_1 + 0x200);
        if ((uVar6 & uVar6 - 1) == 0) {
          plVar7 = *(long **)(*(long *)(param_1 + 0x1f8) + (uVar6 - 1 & uVar14) * 8);
          do {
            do {
              plVar7 = (long *)*plVar7;
            } while (plVar7[1] != uVar14);
          } while (plVar7[2] != uVar14);
        }
        else {
          uVar8 = uVar14;
          if (uVar6 <= uVar14) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar14 / uVar6;
            }
            uVar8 = uVar14 - uVar8 * uVar6;
          }
          plVar7 = *(long **)(*(long *)(param_1 + 0x1f8) + uVar8 * 8);
          do {
            do {
              plVar7 = (long *)*plVar7;
            } while (plVar7[1] != uVar14);
          } while (plVar7[2] != uVar14);
        }
        local_a8 = *(long **)((long)plVar7 + 0x30);
        if (local_a8 != (long *)0x0) {
          plVar7 = local_a8 + 5;
          do {
            lVar5 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *(int *)plVar7 = (int)lVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar5 == -1) {
LAB_01541fb8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        (**(code **)(*param_2 + 200))(param_2,&local_a0,uVar10,&local_a8);
        if (local_a8 != (long *)0x0) {
          plVar7 = local_a8 + 5;
          do {
            lVar5 = *plVar7;
            iVar4 = (int)lVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *(int *)plVar7 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_a8 + 0x10))();
          }
          else if ((int)lVar5 == 0) {
LAB_01541fe0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if (!bVar13) {
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
  }
  return;
}


