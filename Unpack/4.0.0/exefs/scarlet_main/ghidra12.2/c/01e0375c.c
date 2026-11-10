/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0375c; name: FUN_01e0375c
 */


bool FUN_01e0375c(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  short sVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(char *)(param_5 + 0x3c0) == '\0') {
    if (((*(long *)(param_5 + 0x2f0) == 0) || (*(short *)(*(long *)(param_5 + 0x2f0) + 0x1a) == 0))
       || (lVar5 = *(long *)(param_5 + 0x2f0), lVar5 == 0)) {
      fVar9 = 0.0;
      uVar6 = 0;
    }
    else {
      if (*(short *)(lVar5 + 0x1a) != 0) {
        psVar1 = (short *)(lVar5 + 0x1a);
        sVar7 = *(short *)(lVar5 + 0x1a);
LAB_01e03858:
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01e0387c;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e0387c:
          bVar4 = false;
        }
        if (!bVar4) goto code_r0x01e03884;
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + -0x28);
          uVar6 = FUN_01e02da4(plVar8,"S6751E1AAE7BBAA17");
          lVar5 = *(long *)(lVar5 + 8);
          psVar1 = (short *)(lVar5 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          fVar9 = (float)(uVar6 >> 0x20);
          if (sVar7 == 1) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_01e03810;
        }
      }
      fVar9 = 0.0;
      uVar6 = 0;
    }
LAB_01e03810:
    fVar11 = -1.0;
    if ((uVar6 & 0xff) != 0) {
      fVar11 = fVar9;
    }
    *(undefined1 *)(param_5 + 0x3c0) = 1;
    *(float *)(param_5 + 0x3c4) = fVar11;
  }
  else {
    fVar11 = *(float *)(param_5 + 0x3c4);
  }
  fVar9 = param_1 * 3600.0 + param_2 * 60.0;
  fVar10 = param_3 * 3600.0 + param_4 * 60.0;
  bVar4 = fVar9 <= fVar11 || fVar11 < fVar10;
  if (fVar9 < fVar10) {
    bVar4 = fVar9 <= fVar11 && fVar11 < fVar10;
  }
  return bVar4;
code_r0x01e03884:
  fVar9 = 0.0;
  uVar6 = 0;
  sVar7 = sVar2;
  if (sVar2 == 0) goto LAB_01e03810;
  goto LAB_01e03858;
}


