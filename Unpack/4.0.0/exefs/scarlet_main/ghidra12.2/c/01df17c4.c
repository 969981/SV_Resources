/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df17c4; name: FUN_01df17c4
 */


void FUN_01df17c4(long param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  ulong local_38;
  undefined8 local_18;
  
  lVar7 = *(long *)(param_1 + 0x50);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar10 = *(short *)(lVar7 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar10) {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01df1828;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df1828:
        bVar9 = false;
      }
      if (bVar9) {
        lVar7 = *(long *)(lVar7 + 0x10);
        plVar8 = (long *)(lVar7 + -0x28);
        if (lVar7 == 0) {
          return;
        }
        local_18 = FUN_01dcd22c(plVar8);
        bVar3 = *(byte *)(param_1 + 0x69);
        uVar6 = 0;
        if (bVar3 != 0) {
          uVar6 = param_2 / bVar3;
        }
        uVar2 = bVar3 - 1;
        local_38 = 0;
        if (param_2 != 0x20) {
          uVar2 = param_2 - uVar6 * bVar3;
          local_38 = (ulong)(uVar6 + 1) << 0x20;
        }
        local_38 = local_38 | uVar2;
        FUN_014e974c(plVar8,&local_38,1,0);
        FUN_01de2f94(*(undefined8 *)(param_1 + 0x30),&local_38,&local_18,0);
        lVar7 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
          return;
        }
        if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar10 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


