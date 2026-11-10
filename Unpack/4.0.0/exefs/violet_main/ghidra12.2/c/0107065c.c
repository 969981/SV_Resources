/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0107065c; name: FUN_0107065c
 */


void FUN_0107065c(undefined8 param_1,long param_2,undefined4 param_3,ulong param_4)

{
  char *pcVar1;
  short *psVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *local_48;
  long *local_28;
  
  lVar11 = param_2 + (param_4 & 0xff);
  *(undefined1 *)(lVar11 + 0x230) = 0;
  FUN_00f634c8(&local_28,param_1,param_4 & 0xffffffff);
  plVar7 = local_28;
  if (local_28 != (long *)0x0) {
    FUN_0106f0a8(&local_48,local_28,param_3);
    if (local_48 != (long *)0x0) {
      if ((int)local_48[9] == 0xe8) {
        lVar8 = local_48[8];
        bVar4 = *(byte *)(lVar8 + 0x20);
        if ((ulong)bVar4 != 0) {
          param_4 = param_4 & 0xff;
          puVar10 = (undefined8 *)(param_2 + param_4 * 0x70);
          *puVar10 = *(undefined8 *)(lVar8 + 0x28);
          pcVar1 = (char *)(lVar11 + 0x230);
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar8 + 0x30);
          *pcVar1 = *pcVar1 + '\x01';
          if (bVar4 != 1) {
            lVar11 = param_2 + param_4 * 0x70;
            *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar8 + 0x38);
            *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)(lVar8 + 0x40);
            *pcVar1 = *pcVar1 + '\x01';
            if (bVar4 != 2) {
              lVar11 = param_2 + param_4 * 0x70;
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar8 + 0x48);
              *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(lVar8 + 0x50);
              *pcVar1 = *pcVar1 + '\x01';
              if (bVar4 != 3) {
                puVar10 = (undefined8 *)(lVar8 + 0x58);
                lVar11 = (ulong)bVar4 - 3;
                puVar9 = (undefined4 *)(param_2 + param_4 * 0x70 + 0x38);
                do {
                  *(undefined8 *)(puVar9 + -2) = *puVar10;
                  *puVar9 = *(undefined4 *)(puVar10 + 1);
                  lVar11 = lVar11 + -1;
                  puVar10 = puVar10 + 2;
                  *pcVar1 = *pcVar1 + '\x01';
                  puVar9 = puVar9 + 4;
                } while (lVar11 != 0);
              }
            }
          }
        }
      }
      FUN_0106fd7c(plVar7,param_3);
      if (local_48 != (long *)0x0) {
        lVar11 = local_48[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_48 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_0107083c;
      }
    }
    if (local_28 != (long *)0x0) {
      lVar11 = local_28[6];
      psVar2 = (short *)(lVar11 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_0107083c:
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


