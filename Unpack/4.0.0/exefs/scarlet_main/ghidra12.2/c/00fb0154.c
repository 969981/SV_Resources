/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb0154; name: FUN_00fb0154
 */


void FUN_00fb0154(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = (long *)*param_1;
  plVar7 = (long *)param_1[1];
  do {
    while( true ) {
      do {
        if (plVar7 == plVar1) {
          param_1[1] = (long)plVar1;
          return;
        }
        if ((char)plVar7[-5] != '\0') {
          if ((long *)plVar7[-1] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[-1] + 0x20))();
          }
          *(undefined1 *)(plVar7 + -5) = 0;
        }
        plVar8 = plVar7 + -0xf;
        if ((char)plVar7[-10] != '\0') {
          if ((long *)plVar7[-6] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[-6] + 0x20))();
          }
          *(undefined1 *)(plVar7 + -10) = 0;
        }
        if ((long *)plVar7[-0xb] != (long *)0x0) {
          (**(code **)(*(long *)plVar7[-0xb] + 0x20))();
        }
        plVar6 = (long *)*plVar8;
        plVar7 = plVar8;
      } while (plVar6 == (long *)0x0);
      plVar8 = plVar6 + 5;
      do {
        lVar5 = *plVar8;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 != 0) break;
      (**(code **)(*plVar6 + 0x10))();
    }
  } while ((int)lVar5 != 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


