/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026b646c; name: FUN_026b646c
 */


undefined1  [16] FUN_026b646c(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  undefined1 auVar8 [16];
  
  lVar4 = *param_1;
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar7 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_026b64c4;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026b64c4:
        bVar6 = false;
      }
      if (bVar6) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          return ZEXT816(0);
        }
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *(long *)(lVar4 + -0x28 + ((long)param_3 >> 1)));
        }
        auVar8 = (*param_2)(0);
        lVar5 = *(long *)(lVar4 + 8);
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*(long *)(lVar4 + -0x28) + 0x50))();
          return auVar8;
        }
        if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.",auVar8._0_8_);
        }
        return auVar8;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return ZEXT816(0);
}


