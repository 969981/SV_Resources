/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02139150; name: FUN_02139150
 */


/* WARNING: Removing unreachable block (ram,0x021391d4) */
/* WARNING: Removing unreachable block (ram,0x02139248) */

void FUN_02139150(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar2 = *(long **)(param_1 + 0x48);
  plVar3 = *(long **)(param_1 + 0x50);
  do {
    if (plVar2 == plVar3) {
      return;
    }
    plVar11 = (long *)*plVar2;
    plVar10 = (long *)plVar2[1];
    if (plVar11 != plVar10) {
      do {
        lVar12 = *(long *)(*plVar11 + 200);
        if (*(long *)(lVar12 + 0x260) != 0) {
          pcVar8 = *(code **)(lVar12 + 0x268);
          if (pcVar8 != (code *)0x0) {
            *(undefined8 *)(lVar12 + 0x270) = 0;
            *(undefined8 *)(lVar12 + 0x278) = 0;
            *(undefined8 *)(lVar12 + 0x260) = 0;
            *(undefined8 *)(lVar12 + 0x268) = 0;
            (*pcVar8)(lVar12 + 0x280);
          }
          lVar9 = *(long *)(lVar12 + 0x208);
          *(undefined4 *)(lVar12 + 0x2e0) = 0;
          lVar12 = *(long *)(lVar12 + 0x210);
          if (((lVar9 != lVar12) && (*(undefined1 *)(lVar9 + 0x10) = 1, lVar9 + 0x18 != lVar12)) &&
             (*(undefined1 *)(lVar9 + 0x28) = 1, lVar9 + 0x30 != lVar12)) {
            *(undefined1 *)(lVar9 + 0x40) = 1;
            for (lVar9 = lVar9 + 0x48; lVar9 != lVar12; lVar9 = lVar9 + 0x18) {
              *(undefined1 *)(lVar9 + 0x10) = 1;
            }
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar10);
      plVar11 = (long *)*plVar2;
      plVar10 = (long *)plVar2[1];
      while (plVar10 != plVar11) {
        plVar10 = plVar10 + -1;
        plVar7 = (long *)*plVar10;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 5;
          do {
            lVar12 = *plVar1;
            iVar6 = (int)lVar12 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
    }
    plVar2[1] = (long)plVar11;
    plVar2 = plVar2 + 10;
  } while( true );
}


