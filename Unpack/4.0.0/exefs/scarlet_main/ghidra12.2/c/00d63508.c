/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d63508; name: FUN_00d63508
 */


void FUN_00d63508(float param_1,long param_2)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  short sVar11;
  
  plVar7 = (long *)FUN_00d63f6c();
  lVar9 = *plVar7;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d63578;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d63578:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        plVar7 = (long *)(lVar9 + -0x28);
        uVar8 = FUN_01e0d6f0(plVar7);
        if (((uVar8 & 1) != 0) &&
           (param_1 = *(float *)(param_2 + 0x288) - param_1, *(float *)(param_2 + 0x288) = param_1,
           param_1 < 0.0)) {
          uVar6 = FUN_01e0d720(plVar7);
          FUN_01e0d730(param_2,uVar6);
          uVar8 = *(ulong *)(param_2 + 0x48);
          uVar2 = *(ulong *)(param_2 + 0x50);
          uVar10 = uVar2 ^ uVar8;
          *(ulong *)(param_2 + 0x48) = uVar10 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar10 << 0x10;
          *(ulong *)(param_2 + 0x50) = uVar10 >> 0x1b | uVar10 << 0x25;
          *(float *)(param_2 + 0x288) = (float)(uVar2 + uVar8) * 5.421011e-20 * 5.0 + 0.0 + 5.0;
        }
        lVar9 = *(long *)(lVar9 + 0x70);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d63624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x50))(plVar7);
          return;
        }
        if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


