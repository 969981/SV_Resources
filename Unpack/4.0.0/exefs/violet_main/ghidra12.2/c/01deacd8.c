/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01deacd8; name: FUN_01deacd8
 */


void FUN_01deacd8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  
  lVar7 = *(long *)(param_1 + 0x50);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar10 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01dead3c;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dead3c:
        bVar9 = false;
      }
      if (bVar9) {
        lVar7 = *(long *)(lVar7 + 0x10);
        plVar8 = (long *)(lVar7 + -0x28);
        if (lVar7 == 0) {
          return;
        }
        uVar4 = FUN_01dcd22c(plVar8);
        lVar6 = *(long *)(param_1 + 0x48);
        uVar5 = 0;
        if (((uVar4 & 0xff) < 6) && (lVar6 != 0)) {
          uVar5 = FUN_01400eec(lVar6,uVar4);
          lVar6 = *(long *)(param_1 + 0x48);
        }
        uVar5 = ((uVar5 & 0xff) + 1) % 3;
        if (((uVar4 & 0xff) < 6) && (lVar6 != 0)) {
          FUN_01deae58(lVar6,uVar4,uVar5);
        }
        FUN_01dea984(param_1,uVar4,uVar5);
        lVar7 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01deae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
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
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


