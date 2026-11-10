/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4940c; name: FUN_00f4940c
 */


void FUN_00f4940c(long param_1)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  float fVar10;
  float local_34;
  float local_18;
  float local_14;
  
  plVar7 = (long *)FUN_00f4958c();
  lVar8 = *plVar7;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00f49478;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f49478:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        plVar7 = (long *)(lVar8 + -0x28);
        fVar10 = (float)FUN_01f9de94(plVar7);
        if (ABS(fVar10 + -0.5) <= 1.1920929e-07) {
          fVar10 = 0.0;
        }
        else {
          local_34 = 1.0;
          local_14 = (fVar10 + -0.5) / -0.3;
          pfVar2 = &local_34;
          if (local_14 <= 1.0) {
            pfVar2 = &local_14;
          }
          local_18 = 0.0;
          pfVar3 = &local_18;
          if (0.0 <= local_14) {
            pfVar3 = pfVar2;
          }
          fVar10 = *pfVar3;
        }
        *(int *)(param_1 + 0xd0) = (int)(fVar10 * (float)*(int *)(param_1 + 0x80));
        lVar8 = *(long *)(lVar8 + 0x70);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f49580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x50))(plVar7);
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


