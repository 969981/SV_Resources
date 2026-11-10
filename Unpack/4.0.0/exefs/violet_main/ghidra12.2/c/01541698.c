/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01541698; name: FUN_01541698
 */


void FUN_01541698(long param_1,long *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar6;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar5 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar8;
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[6];
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
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar8 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar8 + 0x40) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(lVar8 + 0x44) = *(undefined4 *)(param_1 + 0x244);
  *(undefined1 *)(lVar8 + 0x48) = *(undefined1 *)(param_1 + 0x248);
  *(undefined1 *)(lVar8 + 0x49) = *(undefined1 *)(param_1 + 0x249);
  (**(code **)(**(long **)(param_1 + 0x220) + 0x90))
            (*(long **)(param_1 + 0x220),param_3,param_4 & 1,param_5 & 1);
  lVar8 = *(long *)(param_1 + 8);
  pcVar7 = *(code **)(lVar8 + 0x358);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x360) = 0;
    *(undefined8 *)(lVar8 + 0x368) = 0;
    *(undefined8 *)(lVar8 + 0x350) = 0;
    *(undefined8 *)(lVar8 + 0x358) = 0;
    (*pcVar7)(lVar8 + 0x370);
  }
  *(undefined1 **)(lVar8 + 0x350) = &LAB_02b7b79c;
  *(undefined1 **)(lVar8 + 0x360) = &LAB_02b7b7c4;
  pcVar7 = *(code **)(lVar8 + 0x3d8);
  *(undefined1 **)(lVar8 + 0x358) = &LAB_02b7b7c0;
  *(long *)(lVar8 + 0x370) = param_1;
  *(undefined1 **)(lVar8 + 0x368) = &LAB_02b7b7d0;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x3e0) = 0;
    *(undefined8 *)(lVar8 + 1000) = 0;
    *(undefined8 *)(lVar8 + 0x3d0) = 0;
    *(undefined8 *)(lVar8 + 0x3d8) = 0;
    (*pcVar7)(lVar8 + 0x3f0);
  }
  *(undefined1 **)(lVar8 + 0x3d0) = &LAB_02b7b7dc;
  *(long *)(lVar8 + 0x3f0) = param_1;
  *(undefined1 **)(lVar8 + 0x3d8) = &LAB_02b7b814;
  *(undefined1 **)(lVar8 + 0x3e0) = &LAB_02b7b818;
  *(undefined1 **)(lVar8 + 1000) = &LAB_02b7b824;
  return;
}


