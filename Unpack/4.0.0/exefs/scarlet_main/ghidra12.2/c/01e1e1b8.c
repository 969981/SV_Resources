/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1e1b8; name: FUN_01e1e1b8
 */


undefined4 FUN_01e1e1b8(long param_1,ulong param_2)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  ulong uVar11;
  
  lVar8 = *(long *)(param_1 + 0x88);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      uVar11 = param_2 & 0xffffffff;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e1e228;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1e228:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          plVar10 = (long *)(lVar8 + -0x28);
          iVar1 = *(int *)(param_1 + 0xac) + 1;
          uVar6 = FUN_01e1c638(plVar10,param_2);
          if (uVar6 < 0x19) {
            uVar7 = *(undefined4 *)(&DAT_03d305c0 + (ulong)uVar6 * 4);
          }
          else {
            uVar7 = 0;
          }
          FUN_01e1e318(param_1,iVar1,uVar7,uVar11);
          uVar7 = FUN_01e1e544(param_1,iVar1,uVar7,uVar11);
          lVar8 = *(long *)(lVar8 + 0x70);
          psVar2 = (short *)(lVar8 + 0x1a);
          do {
            sVar9 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
            return uVar7;
          }
          if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return uVar7;
        }
        break;
      }
      param_2 = uVar11;
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return *(undefined4 *)(param_1 + 0x40);
}


