/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eac828; name: FUN_00eac828
 */


/* WARNING: Removing unreachable block (ram,0x00eac978) */

void FUN_00eac828(long param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  plVar8 = (long *)(param_1 + 0x38);
  lVar11 = *plVar8;
  lVar12 = *param_2;
  *plVar8 = lVar12;
  *(long *)(param_1 + 0x40) = param_2[1];
  *(long *)(param_1 + 0x48) = param_2[2];
  plVar9 = (long *)param_2[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar6 = *(long **)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar9;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  lVar7 = *(long *)(param_1 + 0x110);
  if (lVar11 == lVar12) {
    if (*(long *)(param_1 + 0x118) != lVar7) {
      uVar10 = 0;
      do {
        plVar8 = (long *)FUN_00c7f744(*(undefined8 *)
                                       (*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x50),
                                      lVar7 + uVar10 * 0x20);
        lVar11 = *(long *)(param_1 + 0x58);
        lVar12 = *plVar8;
        if (lVar12 != 0) {
          piVar1 = (int *)(lVar12 + 0x28);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 == -1) goto LAB_00eaca70;
        }
        plVar8 = *(long **)(lVar11 + uVar10 * 8);
        *(long *)(lVar11 + uVar10 * 8) = lVar12;
        if (plVar8 != (long *)0x0) {
          plVar9 = plVar8 + 5;
          do {
            lVar11 = *plVar9;
            iVar3 = (int)lVar11 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_00eaca98;
        }
        lVar7 = *(long *)(param_1 + 0x110);
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)(*(long *)(param_1 + 0x118) - lVar7 >> 5));
    }
  }
  else if (*(long *)(param_1 + 0x118) != lVar7) {
    uVar10 = 0;
    do {
      FUN_00d3b1d4(&local_60,DAT_04859f58,plVar8,uVar10);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x110) + uVar10 * 0x20);
      *puVar2 = local_60;
      puVar2[1] = local_58;
      puVar2[2] = local_50;
      plVar6 = puVar2 + 3;
      plVar9 = (long *)*plVar6;
      *plVar6 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      *plVar6 = local_48;
      local_48 = 0;
      plVar9 = (long *)FUN_00c7f744(*(undefined8 *)
                                     (*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0x50),
                                    *(long *)(param_1 + 0x110) + uVar10 * 0x20);
      lVar11 = *(long *)(param_1 + 0x58);
      lVar12 = *plVar9;
      if (lVar12 != 0) {
        piVar1 = (int *)(lVar12 + 0x28);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == -1) {
LAB_00eaca70:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar9 = *(long **)(lVar11 + uVar10 * 8);
      *(long *)(lVar11 + uVar10 * 8) = lVar12;
      if (plVar9 != (long *)0x0) {
        plVar6 = plVar9 + 5;
        do {
          lVar11 = *plVar6;
          iVar3 = (int)lVar11 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *(int *)plVar6 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
LAB_00eaca98:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110) >> 5));
  }
  *(undefined1 *)(param_1 + 0x148) = 1;
  return;
}


