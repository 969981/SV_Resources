/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b77f0; name: FUN_010b77f0
 */


/* WARNING: Removing unreachable block (ram,0x010b78c8) */
/* WARNING: Removing unreachable block (ram,0x010b793c) */

void FUN_010b77f0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = *(long *)(param_1 + 0x48);
  lVar3 = *(long *)(param_1 + 0x50);
  do {
    if (lVar2 == lVar3) {
      return;
    }
    if (*(long *)(lVar2 + 0x38) != 0) {
      lVar10 = *(long *)(*(long *)(lVar2 + 0x38) + 200);
      if (*(long *)(lVar10 + 0x260) != 0) {
        pcVar8 = *(code **)(lVar10 + 0x268);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar10 + 0x270) = 0;
          *(undefined8 *)(lVar10 + 0x278) = 0;
          *(undefined8 *)(lVar10 + 0x260) = 0;
          *(undefined8 *)(lVar10 + 0x268) = 0;
          (*pcVar8)(lVar10 + 0x280);
        }
        lVar9 = *(long *)(lVar10 + 0x208);
        *(undefined4 *)(lVar10 + 0x2e0) = 0;
        lVar10 = *(long *)(lVar10 + 0x210);
        if (((lVar9 != lVar10) && (*(undefined1 *)(lVar9 + 0x10) = 1, lVar9 + 0x18 != lVar10)) &&
           (*(undefined1 *)(lVar9 + 0x28) = 1, lVar9 + 0x30 != lVar10)) {
          *(undefined1 *)(lVar9 + 0x40) = 1;
          for (lVar9 = lVar9 + 0x48; lVar9 != lVar10; lVar9 = lVar9 + 0x18) {
            *(undefined1 *)(lVar9 + 0x10) = 1;
          }
        }
      }
      plVar7 = *(long **)(lVar2 + 0x38);
      *(undefined8 *)(lVar2 + 0x38) = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar10 = *plVar1;
          iVar6 = (int)lVar10 + -1;
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
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar7 = *(long **)(lVar2 + 0x40);
      *(undefined8 *)(lVar2 + 0x40) = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    lVar2 = lVar2 + 0x50;
  } while( true );
}


