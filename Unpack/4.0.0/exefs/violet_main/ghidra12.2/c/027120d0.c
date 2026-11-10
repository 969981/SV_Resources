/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027120d0; name: FUN_027120d0
 */


void FUN_027120d0(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_045d0fe0;
  param_1[4] = &PTR_LAB_045d1018;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1c2));
  plVar7 = (long *)param_1[0x1c0];
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_027122f4(param_1 + 0x1b9);
  FUN_02712394(param_1 + 0x1b2);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1b0));
  FUN_02712434(param_1 + 0x1a1);
  FUN_02712434(param_1 + 0x194);
  FUN_02712434(param_1 + 0x187);
  FUN_02712434(param_1 + 0x17a);
  FUN_02712434(param_1 + 0x16d);
  FUN_02712434(param_1 + 0x160);
  FUN_02712434(param_1 + 0x153);
  FUN_02712434(param_1 + 0x146);
  FUN_02712434(param_1 + 0x139);
  FUN_02712434(param_1 + 300);
  FUN_02712434(param_1 + 0x11f);
  FUN_02712434(param_1 + 0x112);
  FUN_02712434(param_1 + 0x105);
  FUN_02712434(param_1 + 0xf8);
  FUN_02712434(param_1 + 0xeb);
  FUN_02712434(param_1 + 0xde);
  FUN_02712434(param_1 + 0xd1);
  FUN_02712434(param_1 + 0xc4);
  FUN_02712434(param_1 + 0xb7);
  FUN_02712434(param_1 + 0xaa);
  FUN_02712434(param_1 + 0x9d);
  FUN_02712434(param_1 + 0x90);
  FUN_02712434(param_1 + 0x83);
  FUN_02712434(param_1 + 0x76);
  FUN_02712434(param_1 + 0x69);
  FUN_02712434(param_1 + 0x5c);
  FUN_02712434(param_1 + 0x4f);
  FUN_02712434(param_1 + 0x42);
  FUN_02712434(param_1 + 0x35);
  FUN_02712434(param_1 + 0x28);
  FUN_02712434(param_1 + 0x1b);
  FUN_02712434(param_1 + 0xe);
  FUN_02712504(param_1 + 7);
  plVar7 = (long *)param_1[6];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar8 = *plVar1;
      iVar6 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02712268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
    if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


