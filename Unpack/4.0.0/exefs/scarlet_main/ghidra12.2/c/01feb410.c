/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01feb410; name: FUN_01feb410
 */


bool FUN_01feb410(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  
  lVar8 = FUN_01feb5c4(param_1,*param_2);
  if ((((*(long *)(lVar8 + 0xd8) != 0) && (*(short *)(*(long *)(lVar8 + 0xd8) + 0x1a) != 0)) ||
      (uVar10 = FUN_01473a8c(lVar8 + 0xc0), (uVar10 & 1) != 0)) &&
     (lVar8 = *(long *)(lVar8 + 0xd0), lVar8 != 0)) {
    plVar9 = (long *)FUN_01489b28();
    lVar11 = *plVar9;
    if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar13 = *(short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar13) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01feb4c0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01feb4c0:
          bVar5 = false;
        }
        if (bVar5) {
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) {
            return false;
          }
          plVar9 = (long *)(lVar11 + -0x28);
          uVar6 = FUN_01feb6a0(lVar8);
          iVar7 = FUN_011ec834(plVar9,uVar6);
          lVar8 = *param_2;
          lVar12 = *(long *)(lVar8 + (ulong)*(uint *)(param_1 + 0x60));
          if (lVar12 == 0x133a8707be4aa423) {
            bVar5 = *(int *)(lVar8 + (ulong)*(uint *)(param_1 + 100)) != iVar7;
          }
          else if (lVar12 == 0x137e8707be8470ef) {
            bVar5 = *(int *)(lVar8 + (ulong)*(uint *)(param_1 + 100)) == iVar7;
          }
          else {
            bVar5 = false;
          }
          lVar8 = *(long *)(lVar11 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar3) {
              *psVar1 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
            return bVar5;
          }
          if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return bVar5;
        }
        sVar13 = sVar2;
        if (sVar2 == 0) {
          return false;
        }
      } while( true );
    }
  }
  return false;
}


