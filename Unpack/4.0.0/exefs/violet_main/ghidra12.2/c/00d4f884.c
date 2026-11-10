/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4f884; name: FUN_00d4f884
 */


undefined8 FUN_00d4f884(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (((*(long *)(param_1 + 0x120) != 0) && (*(char *)(*(long *)(param_1 + 0x120) + 0x210) != '\0'))
     && (iVar2 = *(int *)(param_1 + 0x1b0), 0 < iVar2)) {
    iVar13 = 0;
    do {
      puVar6 = (undefined8 *)FUN_00d4fa5c(param_1,iVar13);
      local_50 = *puVar6;
      uStack_48 = puVar6[1];
      local_40 = puVar6[2];
      local_38 = (long *)puVar6[3];
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x18))();
      }
      plVar7 = (long *)FUN_00cb7028(param_1,&local_50);
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        uVar9 = 4;
      }
      else {
        plVar1 = plVar7 + 5;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        plVar8 = (long *)plVar7[0x1a];
        if (plVar8 == (long *)plVar7[0x1b]) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          do {
            lVar11 = *plVar8;
            if (lVar11 != 0) {
              for (lVar12 = *(long *)(lVar11 + 0x70); lVar12 != lVar11 + 0x68;
                  lVar12 = *(long *)(lVar12 + 8)) {
                if ((*(char *)(*(long *)(lVar12 + 0x10) + 0x240) != '\0') &&
                   (*(char *)(*(long *)(lVar12 + 0x10) + 0x241) != '\0')) {
                  uVar10 = 1;
                  goto LAB_00d4f964;
                }
              }
            }
            uVar10 = 0;
LAB_00d4f964:
            plVar8 = plVar8 + 1;
            uVar9 = uVar9 | uVar10;
          } while (plVar8 != (long *)plVar7[0x1b]);
        }
        do {
          lVar11 = *plVar1;
          iVar5 = (int)lVar11 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if ((uVar9 | 4) != 4) {
        return 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar2);
  }
  return 0;
}


