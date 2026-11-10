/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144c89c; name: FUN_0144c89c
 */


int FUN_0144c89c(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 == *(long **)(param_1 + 0x90)) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      iVar3 = (**(code **)(*(long *)(*plVar5 + 0x30) + 0x18))();
      if (iVar3 == param_2) {
        plVar7 = *(long **)(param_1 + 0x90);
        plVar6 = plVar5 + 1;
        plVar4 = plVar5;
        plVar11 = plVar5;
        if (plVar6 == plVar7) goto LAB_0144c918;
        do {
          plVar11 = (long *)*plVar4;
          *plVar4 = 0;
          if (plVar11 != (long *)0x0) {
            plVar12 = plVar11 + 5;
            do {
              lVar10 = *plVar12;
              iVar3 = (int)lVar10 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar2) {
                *(int *)plVar12 = iVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
            else if ((int)lVar10 == 0) goto LAB_0144ca7c;
          }
          lVar10 = *plVar6;
          plVar12 = plVar6 + 1;
          *plVar6 = 0;
          plVar11 = plVar4 + 1;
          *plVar4 = lVar10;
          plVar4 = plVar11;
          plVar6 = plVar12;
        } while (plVar12 != plVar7);
        plVar6 = *(long **)(param_1 + 0x90);
        while (plVar6 != plVar11) {
LAB_0144c918:
          plVar6 = plVar6 + -1;
          plVar4 = (long *)*plVar6;
          if (plVar4 != (long *)0x0) {
            plVar7 = plVar4 + 5;
            do {
              lVar10 = *plVar7;
              iVar3 = (int)lVar10 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *(int *)plVar7 = iVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
            else if ((int)lVar10 == 0) {
LAB_0144ca7c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        iVar8 = iVar8 + 1;
        *(long **)(param_1 + 0x90) = plVar11;
      }
      else {
        plVar11 = *(long **)(param_1 + 0x90);
        plVar5 = plVar5 + 1;
      }
    } while (plVar5 != plVar11);
    if (iVar8 != 0) {
      lVar10 = (long)plVar11 - *(long *)(param_1 + 0x88);
      if ((((1 < (ulong)(lVar10 >> 3)) &&
           ((**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + 0x30) + 0x20))(),
           lVar10 != 0x10)) &&
          (plVar5 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0x30),
          (**(code **)(*plVar5 + 0x20))(plVar5,*(long *)(param_1 + 0x88) + 8), lVar10 != 0x18)) &&
         (plVar5 = (long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x18) + 0x30),
         (**(code **)(*plVar5 + 0x20))(plVar5,*(long *)(param_1 + 0x88) + 0x10), lVar10 != 0x20)) {
        lVar9 = (lVar10 >> 3) - 4;
        lVar10 = 0x20;
        do {
          plVar5 = (long *)(*(long *)(param_1 + 0x88) + lVar10);
          plVar6 = (long *)(*plVar5 + 0x30);
          (**(code **)(*plVar6 + 0x20))(plVar6,plVar5 + -1);
          lVar9 = lVar9 + -1;
          lVar10 = lVar10 + 8;
        } while (lVar9 != 0);
      }
    }
  }
  return iVar8;
}


