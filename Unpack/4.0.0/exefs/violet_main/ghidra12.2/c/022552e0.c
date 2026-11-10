/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022552e0; name: FUN_022552e0
 */


uint FUN_022552e0(ulong param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long lVar12;
  
  plVar8 = *(long **)(param_1 + 0x30);
  lVar9 = plVar8[1];
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
LAB_02255300:
    uVar5 = 0;
LAB_02255304:
    return uVar5 & 1;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar11 = *(short *)(lVar9 + 0x1a);
LAB_0225532c:
  sVar2 = *psVar1;
  if (sVar2 == sVar11) {
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_02255358;
    bVar10 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02255358:
    bVar10 = false;
  }
  if (!bVar10) goto code_r0x02255360;
  lVar9 = *(long *)(lVar9 + 0x10);
  if (lVar9 != 0) {
    lVar12 = *plVar8;
    uVar5 = FUN_0196c63c(*param_2);
    uVar6 = FUN_0225587c(lVar12);
    bVar10 = uVar5 <= (uVar6 & 0xffff);
    if (bVar10) {
      iVar7 = FUN_01446910(*(undefined4 *)(param_1 + 0x27c),*(undefined8 *)(*param_2 + 0x30),
                           *(undefined8 *)(param_1 + 0x270),0);
      param_1 = (ulong)((float)iVar7 <= *(float *)(lVar12 + 0x50));
    }
    uVar5 = (uint)param_1;
    lVar12 = *(long *)(lVar9 + 8);
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    if (bVar10) goto LAB_02255304;
  }
  goto LAB_02255300;
code_r0x02255360:
  sVar11 = sVar2;
  if (sVar2 == 0) goto LAB_02255300;
  goto LAB_0225532c;
}


