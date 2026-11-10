/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b2c67c; name: FUN_02b2c67c
 */


bool FUN_02b2c67c(long param_1)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  long lVar8;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x140) + 0x148);
  if (plVar6 == (long *)0x0) {
    cVar7 = DAT_00000050;
  }
  else {
    lVar8 = plVar6[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar2 == 0) {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar4;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar5 = plVar6[6];
    psVar1 = (short *)(lVar5 + 0x1a);
    lVar8 = plVar6[10];
    do {
      sVar2 = *psVar1;
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    cVar7 = (char)lVar8;
    if (sVar2 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return cVar7 != '\0';
}


