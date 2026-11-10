/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de2120; name: FUN_01de2120
 */


void FUN_01de2120(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  bool bVar11;
  short sVar12;
  undefined1 *local_e0;
  byte *pbStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  byte local_c0 [64];
  char acStack_80 [64];
  
  lVar8 = *(long *)(param_1 + 0x68);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar12 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar12) {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01de218c;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01de218c:
        bVar11 = false;
      }
      if (bVar11) {
        lVar8 = *(long *)(lVar8 + 0x10);
        plVar9 = (long *)(lVar8 + -0x28);
        if (lVar8 == 0) {
          return;
        }
        uVar5 = FUN_01dcd22c(plVar9);
        iVar4 = FUN_014a24ec();
        iVar7 = 8;
        if (iVar4 != 2) {
          iVar7 = 4;
        }
        iVar7 = (int)uVar5 + ((int)((ulong)uVar5 >> 0x20) + -1) * iVar7;
        FUN_01de0e08(iVar7,acStack_80);
        snprintf((char *)local_c0,0x40,"%s/N_frame_00",acStack_80);
        if (local_c0[0] == 0) {
          local_e0 = &DAT_cbf29ce484222645;
        }
        else {
          local_e0 = &DAT_cbf29ce484222645;
          pbVar10 = (byte *)((ulong)local_c0 | 1);
          do {
            local_e0 = (undefined1 *)(((ulong)local_e0 ^ (ulong)local_c0[0]) * 0x100000001b3);
            local_c0[0] = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (local_c0[0] != 0);
        }
        local_d0 = 0x3f;
        uStack_c8 = 0;
        pbStack_d8 = local_c0;
        lVar6 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_e0);
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
        *(int *)(param_1 + 0x16cc) = iVar7;
        lVar8 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar12 = *psVar1;
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
          return;
        }
        if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar12 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


