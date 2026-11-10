/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132a808; name: FUN_0132a808
 */


void FUN_0132a808(long param_1)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  long lVar10;
  float fVar11;
  
  plVar6 = *(long **)(param_1 + 0x30);
  lVar7 = plVar6[1];
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0132a86c;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0132a86c:
        bVar8 = false;
      }
      if (bVar8) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        lVar10 = *plVar6;
        uVar5 = FUN_00c81fa0(lVar10);
        *(undefined8 *)(param_1 + 0x270) = uVar5;
        uVar2 = *(undefined4 *)(lVar10 + 0xf8);
        *(undefined4 *)(param_1 + 0x27c) = uVar2;
        *(undefined4 *)(param_1 + 0x280) = uVar2;
        fVar11 = *(float *)(lVar10 + 0x50);
        uVar2 = *(undefined4 *)(lVar10 + 0xec);
        *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(lVar10 + 0xe8);
        *(int *)(param_1 + 0x218) = (int)fVar11;
        *(undefined4 *)(param_1 + 0x20c) = uVar2;
        *(undefined1 *)(param_1 + 0x268) = 1;
        lVar10 = FUN_00fa5b78(lVar10,&DAT_03c3608e);
        if (lVar10 != 0) {
          *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 4));
          *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(lVar10 + (ulong)*(uint *)(lVar10 + 4));
        }
        lVar10 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0132a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


