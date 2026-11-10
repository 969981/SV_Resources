/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eaa980; name: FUN_00eaa980
 */


void FUN_00eaa980(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *local_48;
  
  lVar6 = *param_1;
  for (lVar8 = *(long *)(lVar6 + 0x70); lVar8 != lVar6 + 0x68; lVar8 = *(long *)(lVar8 + 8)) {
    lVar9 = *(long *)(lVar8 + 0x10);
    plVar10 = *(long **)(lVar9 + 0x50);
    plVar1 = *(long **)(lVar9 + 0x58);
    if (plVar10 != plVar1) {
      lVar11 = *plVar10;
      *(undefined8 *)(lVar11 + 0x108) = *(undefined8 *)(lVar9 + 0x160);
      *(undefined8 *)(lVar11 + 0x110) = *(undefined8 *)(lVar9 + 0x168);
      *(undefined8 *)(lVar11 + 0x118) = *(undefined8 *)(lVar9 + 0x170);
      plVar7 = *(long **)(lVar9 + 0x178);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      plVar5 = *(long **)(lVar11 + 0x120);
      *(long **)(lVar11 + 0x120) = plVar7;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      FUN_00eb0770(*plVar10,param_3);
      if (plVar10 + 1 != plVar1) {
        lVar11 = plVar10[1];
        *(undefined8 *)(lVar11 + 0x108) = *(undefined8 *)(lVar9 + 0x160);
        *(undefined8 *)(lVar11 + 0x110) = *(undefined8 *)(lVar9 + 0x168);
        *(undefined8 *)(lVar11 + 0x118) = *(undefined8 *)(lVar9 + 0x170);
        plVar7 = *(long **)(lVar9 + 0x178);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        plVar5 = *(long **)(lVar11 + 0x120);
        *(long **)(lVar11 + 0x120) = plVar7;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
        FUN_00eb0770(plVar10[1],param_3);
        for (plVar10 = plVar10 + 2; plVar10 != plVar1; plVar10 = plVar10 + 1) {
          lVar11 = *plVar10;
          *(undefined8 *)(lVar11 + 0x108) = *(undefined8 *)(lVar9 + 0x160);
          *(undefined8 *)(lVar11 + 0x110) = *(undefined8 *)(lVar9 + 0x168);
          *(undefined8 *)(lVar11 + 0x118) = *(undefined8 *)(lVar9 + 0x170);
          plVar7 = *(long **)(lVar9 + 0x178);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
          plVar5 = *(long **)(lVar11 + 0x120);
          *(long **)(lVar11 + 0x120) = plVar7;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          FUN_00eb0770(*plVar10,param_3);
        }
      }
    }
  }
  lVar9 = *param_2;
  lVar8 = *(long *)(lVar9 + 0x70);
  lVar6 = *(long *)(lVar9 + 0x78);
  do {
    if (lVar8 == lVar6) {
      return;
    }
    FUN_00c5ecb4(&local_48,*(undefined8 *)(lVar9 + 0x30),lVar8);
    FUN_00eaabc4(local_48);
    if (local_48 != (long *)0x0) {
      plVar10 = local_48 + 5;
      do {
        lVar11 = *plVar10;
        iVar4 = (int)lVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar8 = lVar8 + 0x28;
  } while( true );
}


