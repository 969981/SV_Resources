/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01595bbc; name: FUN_01595bbc
 */


void FUN_01595bbc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  plVar2 = *(long **)(param_1 + 0x98);
  plVar8 = *(long **)(param_1 + 0xa0);
  do {
    while( true ) {
      do {
        if (plVar8 == plVar2) {
          *(long **)(param_1 + 0xa0) = plVar2;
          FUN_01595d28(param_1 + 0x108,*(undefined8 *)(param_1 + 0x108));
          lVar7 = *(long *)(param_1 + 0xd0);
          lVar9 = *(long *)(param_1 + 0xd8);
          if (lVar7 != lVar9) {
            FUN_01168f90(lVar7);
            if (((lVar7 + 0x40 != lVar9) && (FUN_01168f90(), lVar7 + 0x80 != lVar9)) &&
               (FUN_01168f90(), lVar7 + 0xc0 != lVar9)) {
              FUN_01168f90();
              for (lVar7 = lVar7 + 0x100; lVar7 != lVar9; lVar7 = lVar7 + 0x40) {
                FUN_01168f90(lVar7);
              }
            }
            lVar7 = *(long *)(param_1 + 0xd0);
            lVar9 = *(long *)(param_1 + 0xd8);
            if (((lVar9 != lVar7) && (FUN_01168d28(lVar9 + -0x40), lVar9 + -0x40 != lVar7)) &&
               ((FUN_01168d28(lVar9 + -0x80), lVar9 + -0x80 != lVar7 &&
                (FUN_01168d28(lVar9 + -0xc0), lVar9 + -0xc0 != lVar7)))) {
              do {
                FUN_01168d28(lVar9 + -0x100);
                lVar9 = lVar9 + -0x40;
              } while (lVar7 + 0xc0 != lVar9);
            }
          }
          *(long *)(param_1 + 0xd8) = lVar7;
          return;
        }
        plVar8 = plVar8 + -1;
        plVar6 = (long *)*plVar8;
      } while (plVar6 == (long *)0x0);
      plVar1 = plVar6 + 5;
      do {
        lVar7 = *plVar1;
        iVar5 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != 0) break;
      (**(code **)(*plVar6 + 0x10))();
    }
  } while ((int)lVar7 != 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


