/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f6710; name: FUN_028f6710
 */


void FUN_028f6710(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_045ebbf8;
  param_1[4] = &PTR_LAB_045ebc28;
  plVar6 = (long *)param_1[0x4d];
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_028f6824(param_1 + 0x1f);
  FUN_028f6850(param_1 + 0x12);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x10));
  lVar8 = param_1[8];
  if (lVar8 != 0) {
    lVar3 = param_1[10];
    plVar6 = (long *)param_1[0xb];
    param_1[9] = lVar8;
    uVar7 = FUN_00c4e564(plVar6);
    if ((uVar7 & 1) == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar3 - lVar8,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar8,lVar3 - lVar8,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 6));
  return;
}


