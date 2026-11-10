/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021eeb04; name: FUN_021eeb04
 */


void FUN_021eeb04(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar9 = 4;
  do {
    lVar11 = param_1 + lVar9 * 8;
    plVar12 = (long *)(lVar11 + 0x30);
    if (((*(byte *)(*(long *)(*(long *)(*plVar12 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) &&
       (sVar7 = FUN_00cf44f4(), sVar7 == 0)) {
      lVar14 = *plVar12;
      *plVar12 = 0;
      plVar12 = (long *)0x0;
      uVar13 = *(undefined8 *)(lVar11 + 0x60);
      *(undefined8 *)(lVar11 + 0x60) = 0;
      lVar11 = lVar9;
      while( true ) {
        plVar2 = (long *)(param_1 + 0x30 + lVar11 * 8);
        *plVar2 = 0;
        if (plVar12 != (long *)0x0) {
          plVar8 = plVar12 + 5;
          do {
            lVar6 = *plVar8;
            iVar5 = (int)lVar6 + -1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *(int *)plVar8 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_021eecc4;
        }
        lVar6 = lVar11 + 1;
        plVar12 = (long *)(param_1 + 0x30 + lVar6 * 8);
        lVar10 = *plVar12;
        *plVar12 = 0;
        *plVar2 = lVar10;
        plVar2 = (long *)(param_1 + 0x60 + lVar11 * 8);
        plVar8 = (long *)*plVar2;
        *plVar2 = 0;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 5;
          do {
            lVar11 = *plVar1;
            iVar5 = (int)lVar11 + -1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_021eecc4;
        }
        plVar8 = (long *)(param_1 + 0x60 + lVar6 * 8);
        lVar11 = *plVar8;
        *plVar8 = 0;
        *plVar2 = lVar11;
        if (lVar6 == 5) break;
        plVar12 = (long *)*plVar12;
        lVar11 = lVar6;
      }
      plVar12 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 5;
        do {
          lVar11 = *plVar2;
          iVar5 = (int)lVar11 + -1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar3) {
            *(int *)plVar2 = iVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_021eecc4;
      }
      plVar12 = *(long **)(param_1 + 0x88);
      *(long *)(param_1 + 0x58) = lVar14;
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 5;
        do {
          lVar11 = *plVar2;
          iVar5 = (int)lVar11 + -1;
          cVar4 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar3) {
            *(int *)plVar2 = iVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
LAB_021eecc4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *(undefined8 *)(param_1 + 0x88) = uVar13;
    }
    bVar3 = lVar9 == 0;
    lVar9 = lVar9 + -1;
    if (bVar3) {
      return;
    }
  } while( true );
}


