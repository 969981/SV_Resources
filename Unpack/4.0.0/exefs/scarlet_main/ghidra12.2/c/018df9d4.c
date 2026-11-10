/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018df9d4; name: FUN_018df9d4
 */


void FUN_018df9d4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  bool bVar14;
  short sVar15;
  undefined8 uVar16;
  long *local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined2 local_56;
  long *local_50;
  undefined1 auStack_48 [8];
  
  if (((*(long *)(param_1 + 0x178) != 0) && (*(short *)(*(long *)(param_1 + 0x178) + 0x1a) != 0)) &&
     (*(long *)(param_1 + 0x170) != 0)) {
    FUN_018dfd8c(param_1);
  }
  *(undefined8 *)(param_1 + 0x170) = *param_2;
  FUN_00c81640(param_1 + 0x178,param_2 + 1);
  if (((*(long *)(param_1 + 0x178) != 0) && (*(short *)(*(long *)(param_1 + 0x178) + 0x1a) != 0)) &&
     ((*(long *)(param_1 + 0x170) != 0 &&
      ((lVar12 = *(long *)(param_1 + 0x178), lVar12 != 0 && (*(short *)(lVar12 + 0x1a) != 0)))))) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar15 = *(short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar15) {
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_018dfaac;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018dfaac:
        bVar14 = false;
      }
      if (bVar14) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return;
        }
        uVar16 = *(undefined8 *)(param_1 + 0x170);
        *(undefined4 *)(param_1 + 0x188) = param_3;
        lVar8 = FUN_0113ca0c(uVar16);
        (**(code **)(**(long **)(*(long *)(lVar8 + 0x18) + (long)*(int *)(param_1 + 0x188) * 0x10 +
                                8) + 0x20))(&local_58);
        FUN_01a7c990(&local_88,param_1 + 0x48,local_58,local_56,0x38);
        plVar9 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))();
        }
        *(undefined8 *)(param_1 + 0x70) = local_88;
        lVar8 = FUN_0113ca0c(uVar16);
        uVar13 = *(undefined8 *)
                  (*(long *)(lVar8 + 0x18) + (long)*(int *)(param_1 + 0x188) * 0x10 + 8);
        *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x168) = uVar13;
        local_88 = 0x100000000;
        uStack_80 = 0x100000000;
        local_78 = 0x200000025;
        uStack_70 = 0x400000003;
        local_68 = 5;
        uStack_60 = 2;
        puVar10 = (undefined8 *)FUN_00e31554();
        plVar9 = (long *)*puVar10;
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 5;
          do {
            lVar8 = *plVar11;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar14) {
              *(int *)plVar11 = (int)lVar8 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar8 == -1) {
LAB_018dfd64:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        local_98 = FUN_01764ca0(plVar9,&local_88);
        (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(&local_a0);
        plVar11 = local_a0;
        local_50 = plVar9;
        lVar8 = FUN_00cf3764(auStack_48,plVar9[1],&local_50);
        if (lVar8 != 0) {
          piVar2 = (int *)(lVar8 + 0x28);
          do {
            iVar4 = *piVar2;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = iVar4 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 == -1) goto LAB_018dfd64;
        }
        FUN_01765880(lVar8,plVar11,local_98,1);
        plVar11 = *(long **)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x68) = 0;
        if (plVar11 != (long *)0x0) {
          plVar3 = plVar11 + 5;
          do {
            lVar7 = *plVar3;
            iVar4 = (int)lVar7 + -1;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar14) {
              *(int *)plVar3 = iVar4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_018dfd3c;
        }
        *(long *)(param_1 + 0x68) = lVar8;
        if (local_a0 != (long *)0x0) {
          plVar11 = local_a0 + 5;
          do {
            lVar8 = *plVar11;
            iVar4 = (int)lVar8 + -1;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar14) {
              *(int *)plVar11 = iVar4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_a0 + 0x10))();
          }
          else if ((int)lVar8 == 0) goto LAB_018dfd3c;
        }
        uVar16 = FUN_0113ca0c(uVar16);
        FUN_0216aa38(param_1,uVar16);
        plVar11 = plVar9 + 5;
        do {
          lVar8 = *plVar11;
          iVar4 = (int)lVar8 + -1;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar14) {
            *(int *)plVar11 = iVar4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar8 == 0) {
LAB_018dfd3c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
        lVar8 = *(long *)(lVar12 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))((long *)(lVar12 + -0x28));
          return;
        }
        if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar15 = sVar5;
    } while (sVar5 != 0);
  }
  return;
}


