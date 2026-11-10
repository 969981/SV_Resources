/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bc71a0; name: FUN_02bc71a0
 */


void FUN_02bc71a0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  do {
    while( true ) {
      do {
        do {
          lVar5 = lVar8;
          if (lVar5 == param_2) {
            *(long *)(param_1 + 8) = param_2;
            return;
          }
          lVar8 = lVar5 + -0x20;
          plVar7 = *(long **)(lVar5 + -0x18);
        } while (plVar7 == (long *)0x0);
        (**(code **)(*plVar7 + 0x38))(plVar7,lVar8);
        plVar7 = *(long **)(lVar5 + -0x18);
        *(undefined8 *)(lVar5 + -0x20) = 0;
        *(undefined8 *)(lVar5 + -0x18) = 0;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 5;
          do {
            lVar6 = *plVar1;
            iVar4 = (int)lVar6 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_02bc72c8;
        }
        plVar7 = *(long **)(lVar5 + -0x18);
        *(undefined8 *)(lVar5 + -0x10) = 0xffffffffffffffff;
        *(undefined8 *)(lVar5 + -8) = 0;
      } while (plVar7 == (long *)0x0);
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 != 0) break;
      (**(code **)(*plVar7 + 0x10))();
    }
  } while ((int)lVar5 != 0);
LAB_02bc72c8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


