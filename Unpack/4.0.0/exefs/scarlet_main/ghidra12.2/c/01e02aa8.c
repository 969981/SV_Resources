/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e02aa8; name: FUN_01e02aa8
 */


undefined4 FUN_01e02aa8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  ulong uVar7;
  undefined4 uVar8;
  long *plVar9;
  
  if ((((*(long *)(param_1 + 0x2f0) == 0) || (*(short *)(*(long *)(param_1 + 0x2f0) + 0x1a) == 0))
      || (lVar5 = *(long *)(param_1 + 0x2f0), lVar5 == 0)) || (*(short *)(lVar5 + 0x1a) == 0)) {
LAB_01e02ad8:
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar6 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e02b30;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e02b30:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 != 0) {
          plVar9 = (long *)(lVar5 + -0x28);
          uVar7 = FUN_00dba40c(plVar9,"SFB1373F59643DB06");
          lVar5 = *(long *)(lVar5 + 8);
          uVar8 = (undefined4)(uVar7 >> 0x20);
          psVar1 = (short *)(lVar5 + 0x1a);
          do {
            sVar6 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_01e02ad8;
      }
      uVar8 = 0;
      uVar7 = 0;
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if ((uVar7 & 0xff) == 0) {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}


