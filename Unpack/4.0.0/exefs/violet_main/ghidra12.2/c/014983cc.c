/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014983cc; name: FUN_014983cc
 */


void FUN_014983cc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  short *psVar1;
  char *pcVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long *local_48;
  long *local_28;
  
  lVar8 = param_2 + (param_4 & 0xff);
  *(undefined1 *)(lVar8 + 0x230) = 0;
  FUN_00f634c8(&local_28,param_1,param_4 & 0xffffffff);
  plVar7 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_00f63734(&local_48,local_28,param_3);
    if (local_48 != (long *)0x0) {
      if ((int)local_48[9] == 0xe8) {
        lVar9 = local_48[8];
        bVar4 = *(byte *)(lVar9 + 0x20);
        if ((ulong)bVar4 != 0) {
          param_4 = param_4 & 0xff;
          puVar11 = (undefined8 *)(param_2 + param_4 * 0x70);
          *puVar11 = *(undefined8 *)(lVar9 + 0x28);
          pcVar2 = (char *)(lVar8 + 0x230);
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(lVar9 + 0x30);
          *pcVar2 = *pcVar2 + '\x01';
          if (bVar4 != 1) {
            lVar8 = param_2 + param_4 * 0x70;
            *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar9 + 0x38);
            *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar9 + 0x40);
            *pcVar2 = *pcVar2 + '\x01';
            if (bVar4 != 2) {
              puVar11 = (undefined8 *)(lVar9 + 0x48);
              lVar8 = (ulong)bVar4 - 2;
              puVar10 = (undefined4 *)(param_2 + param_4 * 0x70 + 0x28);
              do {
                *(undefined8 *)(puVar10 + -2) = *puVar11;
                *puVar10 = *(undefined4 *)(puVar11 + 1);
                lVar8 = lVar8 + -1;
                puVar11 = puVar11 + 2;
                *pcVar2 = *pcVar2 + '\x01';
                puVar10 = puVar10 + 4;
              } while (lVar8 != 0);
            }
          }
        }
      }
      FUN_0105bd98(plVar7,param_3);
      if (local_48 != (long *)0x0) {
        lVar8 = local_48[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*local_48 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_01498518;
      }
    }
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_01498518:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


