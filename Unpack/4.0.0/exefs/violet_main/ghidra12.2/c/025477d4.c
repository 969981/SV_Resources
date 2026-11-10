/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025477d4; name: FUN_025477d4
 */


void FUN_025477d4(long *param_1,char *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  cVar3 = *param_2;
  if (cVar3 == '\x02') {
    FUN_0254791c(param_2 + 8);
    return;
  }
  if (cVar3 == '\x01') {
    lVar6 = *(long *)(param_2 + 8);
    *param_1 = lVar6;
    if (lVar6 == 0) {
      return;
    }
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_025478ac;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (cVar3 != '\0') {
      *param_1 = 0;
      return;
    }
    lVar6 = *(long *)(param_2 + 8);
    *param_1 = lVar6;
    if (lVar6 == 0) {
      return;
    }
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_025478ac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (sVar2 == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    *(undefined8 *)(lVar6 + 8) = uVar5;
    *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  return;
}


