/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02256c00; name: FUN_02256c00
 */


undefined4 FUN_02256c00(long *param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar5 = param_1[1];
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02256c60;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02256c60:
        bVar7 = false;
      }
      if (bVar7) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return 0;
        }
        lVar4 = *param_1;
        uVar9 = *(undefined4 *)(lVar4 + 0x50);
        fVar10 = *(float *)(lVar4 + 0xfc);
        goto LAB_02256ca0;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
LAB_02256ca0:
  sVar8 = *param_2;
  if (sVar8 == 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
    *(float *)(lVar4 + 0x54) = (float)(int)fVar10;
    lVar4 = *(long *)(lVar5 + 8);
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
      (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))();
      return uVar9;
    }
    if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.",uVar9,(ulong)(uint)(float)(int)fVar10);
    }
    return uVar9;
  }
  if (sVar8 == 10) {
    fVar10 = *(float *)(lVar4 + 0xfc) + fVar10;
LAB_02256cb8:
    lVar6 = 1;
  }
  else {
    if (sVar8 != 0x10) goto LAB_02256cb8;
    lVar6 = (ulong)(ushort)param_2[1] + 2;
  }
  param_2 = param_2 + lVar6;
  goto LAB_02256ca0;
}


