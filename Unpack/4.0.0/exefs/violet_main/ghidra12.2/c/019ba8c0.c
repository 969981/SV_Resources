/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ba8c0; name: FUN_019ba8c0
 */


void FUN_019ba8c0(long param_1,int param_2,byte param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  
  if ((ulong)(*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 3) <= (ulong)(long)param_2)
  {
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x2d8) + (long)param_2 * 8);
  if ((((*(byte *)(lVar4 + 0x18c) != (param_3 & 1)) && (*(long *)(lVar4 + 0x178) != 0)) &&
      (*(short *)(*(long *)(lVar4 + 0x178) + 0x1a) != 0)) &&
     (((*(long *)(lVar4 + 0x170) != 0 && (lVar6 = *(long *)(lVar4 + 0x178), lVar6 != 0)) &&
      (*(short *)(lVar6 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_019ba96c;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019ba96c:
        bVar7 = false;
      }
      if (bVar7) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        *(byte *)(lVar4 + 0x18c) = param_3 & 1;
        uVar5 = FUN_0113ca0c(*(undefined8 *)(lVar4 + 0x170));
        FUN_0216aa38(lVar4,uVar5);
        lVar4 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar4 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar4 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x019baa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))((long *)(lVar6 + -0x28));
          return;
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


