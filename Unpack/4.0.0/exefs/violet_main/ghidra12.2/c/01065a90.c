/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01065a90; name: FUN_01065a90
 */


int FUN_01065a90(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar9 = *(long *)(param_2 + 0x1f8);
  plVar6 = *(long **)(lVar9 + 0x50);
  *(undefined8 *)(lVar9 + 0x50) = 0;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 5;
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
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(long *)(lVar9 + 0x50) = lVar8;
  lVar9 = *(long *)(param_1 + 0x30);
  iVar5 = FUN_01065e30(lVar9 + 0x90);
  FUN_01065bd4(*(undefined8 *)(lVar9 + 0x58),lVar9 + 0x38,
               *(undefined8 *)(*(long *)(param_2 + 0x1f0) + 0x30),iVar5,1,0);
  lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x58) + 0x98) + (long)iVar5 * 8);
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(char *)(lVar8 + 9) != '\0') {
      lVar7 = lVar8;
    }
  }
  FUN_01065ccc(lVar7,&LAB_00fe9e38,lVar9);
  return iVar5;
}


