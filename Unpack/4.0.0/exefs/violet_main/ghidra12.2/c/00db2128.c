/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db2128; name: FUN_00db2128
 */


void FUN_00db2128(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = *param_1;
  lVar9 = param_1[1];
  if (lVar9 != lVar3) {
    puVar1 = PTR_DAT_047e0d78 + 0x10;
    do {
      if (*(long **)(lVar9 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x10) + 0x20))();
      }
      if (*(long **)(lVar9 + -0x30) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x30) + 0x20))();
      }
      if (*(long **)(lVar9 + -0x50) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x50) + 0x20))();
      }
      plVar7 = *(long **)(lVar9 + -0x78);
      *(undefined **)(lVar9 + -0xc0) = puVar1;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 5;
        do {
          lVar8 = *plVar2;
          iVar6 = (int)lVar8 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      lVar8 = lVar9 + -0xb8;
      lVar9 = lVar9 + -0xc0;
      FUN_00db239c(lVar8);
    } while (lVar9 != lVar3);
  }
  param_1[1] = lVar3;
  return;
}


