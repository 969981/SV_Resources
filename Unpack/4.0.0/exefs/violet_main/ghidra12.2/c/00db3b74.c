/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db3b74; name: FUN_00db3b74
 */


void FUN_00db3b74(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  lVar8 = param_1[1];
  lVar9 = param_1[2];
  if (lVar9 != lVar8) {
    puVar1 = PTR_DAT_047e0d78 + 0x10;
    do {
      param_1[2] = lVar9 + -0xc0;
      if (*(long **)(lVar9 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x10) + 0x20))();
      }
      if (*(long **)(lVar9 + -0x30) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x30) + 0x20))();
      }
      if (*(long **)(lVar9 + -0x50) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x50) + 0x20))();
      }
      plVar10 = *(long **)(lVar9 + -0x78);
      *(undefined **)(lVar9 + -0xc0) = puVar1;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 5;
        do {
          lVar7 = *plVar2;
          iVar5 = (int)lVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      FUN_00db239c(lVar9 + -0xb8);
      lVar9 = param_1[2];
    } while (lVar9 != lVar8);
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return;
  }
  lVar9 = param_1[3];
  plVar10 = *(long **)param_1[4];
  uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00db3bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar9 - lVar8,8);
    return;
  }
  FUN_00c48fe8(plVar10,lVar8,lVar9 - lVar8,8);
  return;
}


