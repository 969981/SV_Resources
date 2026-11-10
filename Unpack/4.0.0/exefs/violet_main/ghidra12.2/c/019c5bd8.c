/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c5bd8; name: FUN_019c5bd8
 */


bool FUN_019c5bd8(long param_1,long param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *local_50;
  undefined1 auStack_48 [8];
  
  uVar7 = FUN_019c5d84(*(undefined8 *)(param_1 + 0x170));
  bVar6 = false;
  if (uVar7 != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x178);
    puVar3 = *(undefined8 **)(param_1 + 0x180);
    if (puVar9 != puVar3) {
      param_2 = param_2 + uVar7;
      do {
        FUN_00f42a08(&local_50,*puVar9,auStack_48);
        bVar6 = true;
        if ((uVar7 <= param_3) && (local_50 != (long *)0x0)) {
          lVar8 = FUN_019c5d00(local_50,param_2,param_3 - uVar7);
          bVar6 = lVar8 == 0;
          uVar7 = lVar8 + uVar7;
          if (!bVar6) {
            param_2 = param_2 + lVar8;
          }
        }
        if (local_50 != (long *)0x0) {
          lVar8 = local_50[6];
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*local_50 + 0x50))();
          }
          else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if (bVar6) {
          return false;
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar3);
    }
    bVar6 = uVar7 == param_3;
  }
  return bVar6;
}


