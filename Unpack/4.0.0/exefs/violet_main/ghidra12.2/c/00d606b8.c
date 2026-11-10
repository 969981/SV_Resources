/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d606b8; name: FUN_00d606b8
 */


bool FUN_00d606b8(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(*(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x4c)) + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
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
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
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
  bVar6 = FUN_00d60828(plVar8,*param_2 + (ulong)*(uint *)(param_1 + 0x5c));
  bVar3 = *(byte *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60));
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return bVar3 == (bVar6 & 1);
}


