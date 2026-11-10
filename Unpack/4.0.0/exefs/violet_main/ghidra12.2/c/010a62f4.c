/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a62f4; name: FUN_010a62f4
 */


void FUN_010a62f4(long param_1,undefined4 param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_14;
  
  param_1 = param_1 + 0x1a0;
  local_14 = param_2;
  plVar5 = (long *)FUN_010a66b4(param_1,&local_14);
  plVar6 = (long *)*plVar5;
  *plVar5 = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_010a63d4;
  }
  plVar6 = (long *)plVar5[1];
  plVar5[1] = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_010a63d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar5[2] = 0;
  plVar5[3] = 0;
  uVar7 = FUN_010a66b4(param_1,&local_14);
  FUN_010a6424(uVar7,*param_3);
  lVar8 = FUN_010a66b4(param_1,&local_14);
  FUN_010a6560(lVar8 + 8,param_3[1]);
  uVar7 = param_3[2];
  lVar8 = FUN_010a66b4(param_1,&local_14);
  *(undefined8 *)(lVar8 + 0x10) = uVar7;
  return;
}


